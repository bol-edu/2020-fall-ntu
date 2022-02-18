#include "frft.h"
#include "cordic.h"
#include "hermite_gaussian.h"

//The cordic_phase array holds the angle for the current rotation


void C_U1(DTYPE* u1_re, DTYPE* u1_im ,COS_SIN_TYPE* cos, COS_SIN_TYPE* sin, IO_DTYPE* data_re_in_i, IO_DTYPE* data_im_in_i,  THETA_TYPE rotation_angle)
{
#pragma HLS DATAFLOW
	//  Module C
	   // COS_SIN_TYPE cos[256] ;
	   // COS_SIN_TYPE sin[256] ;

	    THETA_TYPE angle_acc = 0 ;

	    MODULE_C : {
	        for ( short i=0 ; i<255; i++){
	            cordic( angle_acc,  sin[i],  cos[i]) ;
	            // printf(" i:%d, angle = %f, cos = %f, sin = %f \n", i, double(angle_acc), double(cos[i]), double(sin[i]) ) ;
	            angle_acc = angle_acc - rotation_angle ;
	            if ( angle_acc < -pi ) {
	                angle_acc = angle_acc + pi_2 ;
	            }
	            else if( angle_acc > pi ) {
	                angle_acc = angle_acc - pi_2 ;
	            }

	        }
	        angle_acc = angle_acc - rotation_angle ;  // 256
	        if ( angle_acc < -pi ) {
	            angle_acc = angle_acc + pi_2 ;
	        }
	        cordic( angle_acc,  sin[255],  cos[255] ) ;
	    }

	/*
	    // Module U1
	    DTYPE u1_re[256] ;
	    DTYPE u1_im[256] ;
	    // DTYPE u1_tmp_re[256]={0} ;
	    // DTYPE u1_tmp_im[256]={0} ;
	    DTYPE data_re_in, data_im_in ;

	    RESET_U1:
	    for ( short i=0 ; i<256 ; i++ ){
	       u1_re[i] = 0 ;
	       u1_im[i] = 0 ;
	    }

	    MODULE_U1_OUTER :
	    for ( short i=0 ; i<256 ; i++ ){
	        data_re_in = data_re_in_i[i] ;
	        data_im_in = data_im_in_i[i] ;
	        MODULE_U1_INNER :
	        for ( short j=0 ; j<256 ; j++ ){
				#pragma HLS UNROLL factor=4
	            u1_re[j] = u1_re[j] + data_re_in * hermite_gaussian[j][i] ;
	            u1_im[j] = u1_im[j] + data_im_in * hermite_gaussian[j][i] ;
	        }
	    }
	*/

	   // Module U1
	    //DTYPE u1_re[256], u1_im[256] ;
	    DTYPE u1_tmp_re, u1_tmp_im ;
	    DTYPE data_re_in[256], data_im_in[256] ;
#pragma HLS ARRAY_PARTITION variable=data_im_in block factor=8 dim=1
#pragma HLS ARRAY_PARTITION variable=data_re_in block factor=8 dim=1
	    for ( short i=0 ; i<256 ; i++ ){
	    	data_re_in[i] = data_re_in_i[i] ;
	    	data_im_in[i] = data_im_in_i[i] ;
	    }

	    MODULE_U1_OUTER :
	    for ( short i=0 ; i<256 ; i++ ){
	        u1_tmp_re = 0 ;
	        u1_tmp_im = 0 ;
	        MODULE_U1_INNER :
	        for ( short j=0 ; j<256 ; j++ ){
#pragma HLS PIPELINE
	            u1_tmp_re = u1_tmp_re + data_re_in[j] * hermite_gaussian[i][j] ;
	            u1_tmp_im = u1_tmp_im + data_im_in[j] * hermite_gaussian[i][j] ;
	            // printf("her: %f, u1_re: %f \n", double(hermite_gaussian[i][j]), double(data_re_in[j]) ) ;
	        }
	        u1_re[i] = u1_tmp_re ;
	        u1_im[i] = u1_tmp_im ;
	    }

}


void E(DTYPE* e_re, DTYPE* e_im, DTYPE* u1_re, DTYPE* u1_im ,COS_SIN_TYPE* cos, COS_SIN_TYPE* sin)
{
	//DTYPE e_re[256], e_im[256] ;

	    THETA_TYPE cos_in_e ;
	    THETA_TYPE sin_in_e ;
	    DTYPE u1_re_in_e ;
	    DTYPE u1_im_in_e ;

	    DTYPE re_re ;
	    DTYPE re_im ;
	    DTYPE im_re ;
	    DTYPE im_im ;


	    Module_E :
	    for ( short i=0 ; i<256 ; i++ ){
	        // e_re[i] = u1_re[i] * cos[i] - u1_im[i] * sin[i] ;
	        // e_im[i] = u1_re[i] * sin[i] + u1_im[i] * cos[i] ;

	        cos_in_e = cos[i] ;
	        sin_in_e = sin[i] ;
	        u1_re_in_e = u1_re[i] ;
	        u1_im_in_e = u1_im[i] ;

			// #pragma HLS RESOURCE variable=re_re core=Mul latency=5
	        re_re = cos_in_e * u1_re_in_e ;
			// #pragma HLS RESOURCE variable=re_im core=Mul latency=5
	        re_im = cos_in_e * u1_im_in_e ;
			// #pragma HLS RESOURCE variable=im_re core=Mul latency=5
	        im_re = sin_in_e * u1_re_in_e ;
			// #pragma HLS RESOURCE variable=im_im core=Mul latency=5
			im_im = sin_in_e * u1_im_in_e ;


	        e_re[i] = re_re - im_im ;
	        e_im[i] = re_im + im_re ;

	    }
}

void U2(IO_DTYPE* data_re_out_o, IO_DTYPE* data_im_out_o, DTYPE* e_re, DTYPE* e_im)
{
    // Module U2
    DTYPE u2_re[256] ; 
    DTYPE u2_im[256] ;
    DTYPE data_re_in, data_im_in ;

    RESET_U2 :
    for ( short i=0 ; i<256 ; i++ ){
       u2_re[i] = 0 ; 
       u2_im[i] = 0 ; 
    }  

    MODULE_U2_OUTER :
    for ( short i=0 ; i<256 ; i++ ){
        data_re_in = e_re[i] ;
        data_im_in = e_im[i] ;
        MODULE_U2_INNER :
        for ( short j=0 ; j<256 ; j++ ){
#pragma HLS PIPELINE
			#pragma HLS UNROLL factor=8
            u2_re[j] = u2_re[j] + data_re_in * hermite_gaussian[i][j] ;
            u2_im[j] = u2_im[j] + data_im_in * hermite_gaussian[i][j] ;
        }
    }

    for ( short i=0 ; i<256 ; i++ ){
       data_re_out_o[i] = u2_re[i] ; 
       data_im_out_o[i] = u2_im[i] ; 
    }     




/*
    // Module u2
    // DTYPE u2_re[256], u2_im[256] ;
     
    
    DTYPE u2_tmp_re, u2_tmp_im ;
    DTYPE u2_re, u2_im ;  
    MODULE_U2_OUTER :
    for ( short i=0 ; i<256 ; i++ ){
        u2_tmp_re = 0 ; 
        u2_tmp_im = 0 ; 
        MODULE_U2_INNER :
        for ( short j=0 ; j<256 ; j++ ){
            u2_tmp_re = u2_tmp_re + e_re[j] * hermite_gaussian[j][i] ;
            u2_tmp_im = u2_tmp_im + e_im[j] * hermite_gaussian[j][i] ;
            // printf("her: %f, u2_re: %f \n", double(hermite_gaussian[i][j]), double(data_re_in[j]) ) ; 
        }
        data_re_out_o[i] = u2_tmp_re ; 
        data_im_out_o[i] = u2_tmp_im ;        
    }   
 */    

}


// void frft( DTYPE data_re_out[256], DTYPE data_im_out[256], DTYPE data_re_in[256], DTYPE data_im_in[256],  THETA_TYPE rotation_angle){
void frft( IO_DTYPE data_re_out_o[256], IO_DTYPE data_im_out_o[256], IO_DTYPE data_re_in_i[256], IO_DTYPE data_im_in_i[256],  THETA_TYPE rotation_angle){
#pragma HLS INTERFACE s_axilite port=rotation_angle
#pragma HLS INTERFACE m_axi depth=256 port=data_im_in_i offset=slave bundle=im
#pragma HLS INTERFACE m_axi depth=256 port=data_re_in_i offset=slave bundle=re
#pragma HLS INTERFACE m_axi depth=256 port=data_im_out_o offset=slave bundle=im
#pragma HLS INTERFACE m_axi depth=256 port=data_re_out_o offset=slave bundle=re
#pragma HLS DATAFLOW



	COS_SIN_TYPE cos[256] ;
	COS_SIN_TYPE sin[256] ;
	DTYPE u1_re[256], u1_im[256] ;
	DTYPE e_re[256], e_im[256] ;

	C_U1(u1_re, u1_im , cos, sin, data_re_in_i, data_im_in_i, rotation_angle);

	E(e_re, e_im, u1_re, u1_im , cos, sin);

	U2(data_re_out_o, data_im_out_o, e_re, e_im);

}
