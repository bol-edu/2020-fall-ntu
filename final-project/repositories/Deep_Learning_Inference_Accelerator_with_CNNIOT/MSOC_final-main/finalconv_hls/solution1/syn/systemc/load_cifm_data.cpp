// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "load_cifm_data.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic load_cifm_data::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic load_cifm_data::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<7> load_cifm_data::ap_ST_fsm_state1 = "1";
const sc_lv<7> load_cifm_data::ap_ST_fsm_state2 = "10";
const sc_lv<7> load_cifm_data::ap_ST_fsm_state3 = "100";
const sc_lv<7> load_cifm_data::ap_ST_fsm_state4 = "1000";
const sc_lv<7> load_cifm_data::ap_ST_fsm_state5 = "10000";
const sc_lv<7> load_cifm_data::ap_ST_fsm_state6 = "100000";
const sc_lv<7> load_cifm_data::ap_ST_fsm_state7 = "1000000";
const sc_lv<32> load_cifm_data::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> load_cifm_data::ap_const_lv32_1 = "1";
const sc_lv<1> load_cifm_data::ap_const_lv1_0 = "0";
const sc_lv<32> load_cifm_data::ap_const_lv32_3 = "11";
const sc_lv<32> load_cifm_data::ap_const_lv32_5 = "101";
const sc_lv<6> load_cifm_data::ap_const_lv6_0 = "000000";
const sc_lv<32> load_cifm_data::ap_const_lv32_2 = "10";
const sc_lv<32> load_cifm_data::ap_const_lv32_4 = "100";
const sc_lv<32> load_cifm_data::ap_const_lv32_20 = "100000";
const sc_lv<32> load_cifm_data::ap_const_lv32_3F = "111111";
const sc_lv<32> load_cifm_data::ap_const_lv32_40 = "1000000";
const sc_lv<32> load_cifm_data::ap_const_lv32_5F = "1011111";
const sc_lv<6> load_cifm_data::ap_const_lv6_22 = "100010";
const sc_lv<6> load_cifm_data::ap_const_lv6_1 = "1";
const sc_lv<32> load_cifm_data::ap_const_lv32_6 = "110";
const sc_lv<1> load_cifm_data::ap_const_lv1_1 = "1";
const bool load_cifm_data::ap_const_boolean_1 = true;

load_cifm_data::load_cifm_data(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_state2);
    sensitive << ( cifm_TVALID );
    sensitive << ( icmp_ln9_fu_246_p2 );

    SC_METHOD(thread_ap_block_state4);
    sensitive << ( cifm_TVALID );
    sensitive << ( icmp_ln32_fu_284_p2 );

    SC_METHOD(thread_ap_block_state6);
    sensitive << ( cifm_TVALID );
    sensitive << ( icmp_ln54_fu_322_p2 );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_cifm_TDATA_blk_n);
    sensitive << ( cifm_TVALID );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln9_fu_246_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln32_fu_284_p2 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( icmp_ln54_fu_322_p2 );

    SC_METHOD(thread_cifm_TREADY);
    sensitive << ( cifm_TVALID );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln9_fu_246_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln32_fu_284_p2 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( icmp_ln54_fu_322_p2 );

    SC_METHOD(thread_grp_fu_226_p4);
    sensitive << ( cifm_TDATA );

    SC_METHOD(thread_grp_fu_236_p4);
    sensitive << ( cifm_TDATA );

    SC_METHOD(thread_icmp_ln32_fu_284_p2);
    sensitive << ( cifm_TVALID );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln32_fu_284_p2 );
    sensitive << ( j1_0_reg_204 );

    SC_METHOD(thread_icmp_ln54_fu_322_p2);
    sensitive << ( cifm_TVALID );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( icmp_ln54_fu_322_p2 );
    sensitive << ( j2_0_reg_215 );

    SC_METHOD(thread_icmp_ln9_fu_246_p2);
    sensitive << ( cifm_TVALID );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln9_fu_246_p2 );
    sensitive << ( cifm_counter_0_reg_193 );

    SC_METHOD(thread_ifm_buff0_0_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( zext_ln12_fu_258_p1 );

    SC_METHOD(thread_ifm_buff0_0_ce0);
    sensitive << ( cifm_TVALID );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln9_fu_246_p2 );

    SC_METHOD(thread_ifm_buff0_0_d0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( trunc_ln12_fu_265_p1 );

    SC_METHOD(thread_ifm_buff0_0_we0);
    sensitive << ( cifm_TVALID );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln9_fu_246_p2 );

    SC_METHOD(thread_ifm_buff0_1_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( zext_ln12_fu_258_p1 );

    SC_METHOD(thread_ifm_buff0_1_ce0);
    sensitive << ( cifm_TVALID );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln9_fu_246_p2 );

    SC_METHOD(thread_ifm_buff0_1_d0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( grp_fu_226_p4 );

    SC_METHOD(thread_ifm_buff0_1_we0);
    sensitive << ( cifm_TVALID );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln9_fu_246_p2 );

    SC_METHOD(thread_ifm_buff0_2_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( zext_ln12_fu_258_p1 );

    SC_METHOD(thread_ifm_buff0_2_ce0);
    sensitive << ( cifm_TVALID );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln9_fu_246_p2 );

    SC_METHOD(thread_ifm_buff0_2_d0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( grp_fu_236_p4 );

    SC_METHOD(thread_ifm_buff0_2_we0);
    sensitive << ( cifm_TVALID );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln9_fu_246_p2 );

    SC_METHOD(thread_ifm_buff1_0_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( zext_ln35_fu_305_p1 );

    SC_METHOD(thread_ifm_buff1_0_ce0);
    sensitive << ( cifm_TVALID );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln32_fu_284_p2 );

    SC_METHOD(thread_ifm_buff1_0_d0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( trunc_ln35_fu_296_p1 );

    SC_METHOD(thread_ifm_buff1_0_we0);
    sensitive << ( cifm_TVALID );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln32_fu_284_p2 );

    SC_METHOD(thread_ifm_buff1_1_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( zext_ln35_fu_305_p1 );

    SC_METHOD(thread_ifm_buff1_1_ce0);
    sensitive << ( cifm_TVALID );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln32_fu_284_p2 );

    SC_METHOD(thread_ifm_buff1_1_d0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( grp_fu_226_p4 );

    SC_METHOD(thread_ifm_buff1_1_we0);
    sensitive << ( cifm_TVALID );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln32_fu_284_p2 );

    SC_METHOD(thread_ifm_buff1_2_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( zext_ln35_fu_305_p1 );

    SC_METHOD(thread_ifm_buff1_2_ce0);
    sensitive << ( cifm_TVALID );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln32_fu_284_p2 );

    SC_METHOD(thread_ifm_buff1_2_d0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( grp_fu_236_p4 );

    SC_METHOD(thread_ifm_buff1_2_we0);
    sensitive << ( cifm_TVALID );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln32_fu_284_p2 );

    SC_METHOD(thread_ifm_buff2_0_address0);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( zext_ln57_fu_343_p1 );

    SC_METHOD(thread_ifm_buff2_0_ce0);
    sensitive << ( cifm_TVALID );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( icmp_ln54_fu_322_p2 );

    SC_METHOD(thread_ifm_buff2_0_d0);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( trunc_ln57_fu_334_p1 );

    SC_METHOD(thread_ifm_buff2_0_we0);
    sensitive << ( cifm_TVALID );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( icmp_ln54_fu_322_p2 );

    SC_METHOD(thread_ifm_buff2_1_address0);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( zext_ln57_fu_343_p1 );

    SC_METHOD(thread_ifm_buff2_1_ce0);
    sensitive << ( cifm_TVALID );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( icmp_ln54_fu_322_p2 );

    SC_METHOD(thread_ifm_buff2_1_d0);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( grp_fu_226_p4 );

    SC_METHOD(thread_ifm_buff2_1_we0);
    sensitive << ( cifm_TVALID );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( icmp_ln54_fu_322_p2 );

    SC_METHOD(thread_ifm_buff2_2_address0);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( zext_ln57_fu_343_p1 );

    SC_METHOD(thread_ifm_buff2_2_ce0);
    sensitive << ( cifm_TVALID );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( icmp_ln54_fu_322_p2 );

    SC_METHOD(thread_ifm_buff2_2_d0);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( grp_fu_236_p4 );

    SC_METHOD(thread_ifm_buff2_2_we0);
    sensitive << ( cifm_TVALID );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( icmp_ln54_fu_322_p2 );

    SC_METHOD(thread_j_1_fu_290_p2);
    sensitive << ( j1_0_reg_204 );

    SC_METHOD(thread_j_2_fu_328_p2);
    sensitive << ( j2_0_reg_215 );

    SC_METHOD(thread_j_fu_252_p2);
    sensitive << ( cifm_counter_0_reg_193 );

    SC_METHOD(thread_trunc_ln12_fu_265_p1);
    sensitive << ( cifm_TDATA );

    SC_METHOD(thread_trunc_ln35_fu_296_p1);
    sensitive << ( cifm_TDATA );

    SC_METHOD(thread_trunc_ln57_fu_334_p1);
    sensitive << ( cifm_TDATA );

    SC_METHOD(thread_zext_ln12_fu_258_p1);
    sensitive << ( cifm_counter_0_reg_193 );

    SC_METHOD(thread_zext_ln35_fu_305_p1);
    sensitive << ( j1_0_reg_204 );

    SC_METHOD(thread_zext_ln57_fu_343_p1);
    sensitive << ( j2_0_reg_215 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( cifm_TVALID );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln9_fu_246_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln32_fu_284_p2 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( icmp_ln54_fu_322_p2 );

    ap_CS_fsm = "0000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "load_cifm_data_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, cifm_TDATA, "(port)cifm_TDATA");
    sc_trace(mVcdFile, cifm_TVALID, "(port)cifm_TVALID");
    sc_trace(mVcdFile, cifm_TREADY, "(port)cifm_TREADY");
    sc_trace(mVcdFile, ifm_buff0_0_address0, "(port)ifm_buff0_0_address0");
    sc_trace(mVcdFile, ifm_buff0_0_ce0, "(port)ifm_buff0_0_ce0");
    sc_trace(mVcdFile, ifm_buff0_0_we0, "(port)ifm_buff0_0_we0");
    sc_trace(mVcdFile, ifm_buff0_0_d0, "(port)ifm_buff0_0_d0");
    sc_trace(mVcdFile, ifm_buff0_1_address0, "(port)ifm_buff0_1_address0");
    sc_trace(mVcdFile, ifm_buff0_1_ce0, "(port)ifm_buff0_1_ce0");
    sc_trace(mVcdFile, ifm_buff0_1_we0, "(port)ifm_buff0_1_we0");
    sc_trace(mVcdFile, ifm_buff0_1_d0, "(port)ifm_buff0_1_d0");
    sc_trace(mVcdFile, ifm_buff0_2_address0, "(port)ifm_buff0_2_address0");
    sc_trace(mVcdFile, ifm_buff0_2_ce0, "(port)ifm_buff0_2_ce0");
    sc_trace(mVcdFile, ifm_buff0_2_we0, "(port)ifm_buff0_2_we0");
    sc_trace(mVcdFile, ifm_buff0_2_d0, "(port)ifm_buff0_2_d0");
    sc_trace(mVcdFile, ifm_buff1_0_address0, "(port)ifm_buff1_0_address0");
    sc_trace(mVcdFile, ifm_buff1_0_ce0, "(port)ifm_buff1_0_ce0");
    sc_trace(mVcdFile, ifm_buff1_0_we0, "(port)ifm_buff1_0_we0");
    sc_trace(mVcdFile, ifm_buff1_0_d0, "(port)ifm_buff1_0_d0");
    sc_trace(mVcdFile, ifm_buff1_1_address0, "(port)ifm_buff1_1_address0");
    sc_trace(mVcdFile, ifm_buff1_1_ce0, "(port)ifm_buff1_1_ce0");
    sc_trace(mVcdFile, ifm_buff1_1_we0, "(port)ifm_buff1_1_we0");
    sc_trace(mVcdFile, ifm_buff1_1_d0, "(port)ifm_buff1_1_d0");
    sc_trace(mVcdFile, ifm_buff1_2_address0, "(port)ifm_buff1_2_address0");
    sc_trace(mVcdFile, ifm_buff1_2_ce0, "(port)ifm_buff1_2_ce0");
    sc_trace(mVcdFile, ifm_buff1_2_we0, "(port)ifm_buff1_2_we0");
    sc_trace(mVcdFile, ifm_buff1_2_d0, "(port)ifm_buff1_2_d0");
    sc_trace(mVcdFile, ifm_buff2_0_address0, "(port)ifm_buff2_0_address0");
    sc_trace(mVcdFile, ifm_buff2_0_ce0, "(port)ifm_buff2_0_ce0");
    sc_trace(mVcdFile, ifm_buff2_0_we0, "(port)ifm_buff2_0_we0");
    sc_trace(mVcdFile, ifm_buff2_0_d0, "(port)ifm_buff2_0_d0");
    sc_trace(mVcdFile, ifm_buff2_1_address0, "(port)ifm_buff2_1_address0");
    sc_trace(mVcdFile, ifm_buff2_1_ce0, "(port)ifm_buff2_1_ce0");
    sc_trace(mVcdFile, ifm_buff2_1_we0, "(port)ifm_buff2_1_we0");
    sc_trace(mVcdFile, ifm_buff2_1_d0, "(port)ifm_buff2_1_d0");
    sc_trace(mVcdFile, ifm_buff2_2_address0, "(port)ifm_buff2_2_address0");
    sc_trace(mVcdFile, ifm_buff2_2_ce0, "(port)ifm_buff2_2_ce0");
    sc_trace(mVcdFile, ifm_buff2_2_we0, "(port)ifm_buff2_2_we0");
    sc_trace(mVcdFile, ifm_buff2_2_d0, "(port)ifm_buff2_2_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, cifm_TDATA_blk_n, "cifm_TDATA_blk_n");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, icmp_ln9_fu_246_p2, "icmp_ln9_fu_246_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, icmp_ln32_fu_284_p2, "icmp_ln32_fu_284_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, icmp_ln54_fu_322_p2, "icmp_ln54_fu_322_p2");
    sc_trace(mVcdFile, j_fu_252_p2, "j_fu_252_p2");
    sc_trace(mVcdFile, ap_block_state2, "ap_block_state2");
    sc_trace(mVcdFile, j_1_fu_290_p2, "j_1_fu_290_p2");
    sc_trace(mVcdFile, ap_block_state4, "ap_block_state4");
    sc_trace(mVcdFile, j_2_fu_328_p2, "j_2_fu_328_p2");
    sc_trace(mVcdFile, ap_block_state6, "ap_block_state6");
    sc_trace(mVcdFile, cifm_counter_0_reg_193, "cifm_counter_0_reg_193");
    sc_trace(mVcdFile, j1_0_reg_204, "j1_0_reg_204");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, j2_0_reg_215, "j2_0_reg_215");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, zext_ln12_fu_258_p1, "zext_ln12_fu_258_p1");
    sc_trace(mVcdFile, zext_ln35_fu_305_p1, "zext_ln35_fu_305_p1");
    sc_trace(mVcdFile, zext_ln57_fu_343_p1, "zext_ln57_fu_343_p1");
    sc_trace(mVcdFile, trunc_ln12_fu_265_p1, "trunc_ln12_fu_265_p1");
    sc_trace(mVcdFile, grp_fu_226_p4, "grp_fu_226_p4");
    sc_trace(mVcdFile, grp_fu_236_p4, "grp_fu_236_p4");
    sc_trace(mVcdFile, trunc_ln35_fu_296_p1, "trunc_ln35_fu_296_p1");
    sc_trace(mVcdFile, trunc_ln57_fu_334_p1, "trunc_ln57_fu_334_p1");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

load_cifm_data::~load_cifm_data() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void load_cifm_data::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln9_fu_246_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(icmp_ln9_fu_246_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())))) {
        cifm_counter_0_reg_193 = j_fu_252_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        cifm_counter_0_reg_193 = ap_const_lv6_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        j1_0_reg_204 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln32_fu_284_p2.read()) && 
                !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln32_fu_284_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())))) {
        j1_0_reg_204 = j_1_fu_290_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        j2_0_reg_215 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln54_fu_322_p2.read()) && 
                !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln54_fu_322_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())))) {
        j2_0_reg_215 = j_2_fu_328_p2.read();
    }
}

void load_cifm_data::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void load_cifm_data::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void load_cifm_data::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void load_cifm_data::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void load_cifm_data::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void load_cifm_data::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void load_cifm_data::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void load_cifm_data::thread_ap_block_state2() {
    ap_block_state2 = (esl_seteq<1,1,1>(icmp_ln9_fu_246_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read()));
}

void load_cifm_data::thread_ap_block_state4() {
    ap_block_state4 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln32_fu_284_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read()));
}

void load_cifm_data::thread_ap_block_state6() {
    ap_block_state6 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln54_fu_322_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read()));
}

void load_cifm_data::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void load_cifm_data::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void load_cifm_data::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void load_cifm_data::thread_cifm_TDATA_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln9_fu_246_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln32_fu_284_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln54_fu_322_p2.read())))) {
        cifm_TDATA_blk_n = cifm_TVALID.read();
    } else {
        cifm_TDATA_blk_n = ap_const_logic_1;
    }
}

void load_cifm_data::thread_cifm_TREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln9_fu_246_p2.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(icmp_ln9_fu_246_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln32_fu_284_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln32_fu_284_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln54_fu_322_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln54_fu_322_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read()))))) {
        cifm_TREADY = ap_const_logic_1;
    } else {
        cifm_TREADY = ap_const_logic_0;
    }
}

void load_cifm_data::thread_grp_fu_226_p4() {
    grp_fu_226_p4 = cifm_TDATA.read().range(63, 32);
}

void load_cifm_data::thread_grp_fu_236_p4() {
    grp_fu_236_p4 = cifm_TDATA.read().range(95, 64);
}

void load_cifm_data::thread_icmp_ln32_fu_284_p2() {
    icmp_ln32_fu_284_p2 = (!j1_0_reg_204.read().is_01() || !ap_const_lv6_22.is_01())? sc_lv<1>(): sc_lv<1>(j1_0_reg_204.read() == ap_const_lv6_22);
}

void load_cifm_data::thread_icmp_ln54_fu_322_p2() {
    icmp_ln54_fu_322_p2 = (!j2_0_reg_215.read().is_01() || !ap_const_lv6_22.is_01())? sc_lv<1>(): sc_lv<1>(j2_0_reg_215.read() == ap_const_lv6_22);
}

void load_cifm_data::thread_icmp_ln9_fu_246_p2() {
    icmp_ln9_fu_246_p2 = (!cifm_counter_0_reg_193.read().is_01() || !ap_const_lv6_22.is_01())? sc_lv<1>(): sc_lv<1>(cifm_counter_0_reg_193.read() == ap_const_lv6_22);
}

void load_cifm_data::thread_ifm_buff0_0_address0() {
    ifm_buff0_0_address0 =  (sc_lv<6>) (zext_ln12_fu_258_p1.read());
}

void load_cifm_data::thread_ifm_buff0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(icmp_ln9_fu_246_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())))) {
        ifm_buff0_0_ce0 = ap_const_logic_1;
    } else {
        ifm_buff0_0_ce0 = ap_const_logic_0;
    }
}

void load_cifm_data::thread_ifm_buff0_0_d0() {
    ifm_buff0_0_d0 = trunc_ln12_fu_265_p1.read();
}

void load_cifm_data::thread_ifm_buff0_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln9_fu_246_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(icmp_ln9_fu_246_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())))) {
        ifm_buff0_0_we0 = ap_const_logic_1;
    } else {
        ifm_buff0_0_we0 = ap_const_logic_0;
    }
}

void load_cifm_data::thread_ifm_buff0_1_address0() {
    ifm_buff0_1_address0 =  (sc_lv<6>) (zext_ln12_fu_258_p1.read());
}

void load_cifm_data::thread_ifm_buff0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(icmp_ln9_fu_246_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())))) {
        ifm_buff0_1_ce0 = ap_const_logic_1;
    } else {
        ifm_buff0_1_ce0 = ap_const_logic_0;
    }
}

void load_cifm_data::thread_ifm_buff0_1_d0() {
    ifm_buff0_1_d0 = grp_fu_226_p4.read();
}

void load_cifm_data::thread_ifm_buff0_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln9_fu_246_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(icmp_ln9_fu_246_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())))) {
        ifm_buff0_1_we0 = ap_const_logic_1;
    } else {
        ifm_buff0_1_we0 = ap_const_logic_0;
    }
}

void load_cifm_data::thread_ifm_buff0_2_address0() {
    ifm_buff0_2_address0 =  (sc_lv<6>) (zext_ln12_fu_258_p1.read());
}

void load_cifm_data::thread_ifm_buff0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(icmp_ln9_fu_246_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())))) {
        ifm_buff0_2_ce0 = ap_const_logic_1;
    } else {
        ifm_buff0_2_ce0 = ap_const_logic_0;
    }
}

void load_cifm_data::thread_ifm_buff0_2_d0() {
    ifm_buff0_2_d0 = grp_fu_236_p4.read();
}

void load_cifm_data::thread_ifm_buff0_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln9_fu_246_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(icmp_ln9_fu_246_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())))) {
        ifm_buff0_2_we0 = ap_const_logic_1;
    } else {
        ifm_buff0_2_we0 = ap_const_logic_0;
    }
}

void load_cifm_data::thread_ifm_buff1_0_address0() {
    ifm_buff1_0_address0 =  (sc_lv<6>) (zext_ln35_fu_305_p1.read());
}

void load_cifm_data::thread_ifm_buff1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln32_fu_284_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())))) {
        ifm_buff1_0_ce0 = ap_const_logic_1;
    } else {
        ifm_buff1_0_ce0 = ap_const_logic_0;
    }
}

void load_cifm_data::thread_ifm_buff1_0_d0() {
    ifm_buff1_0_d0 = trunc_ln35_fu_296_p1.read();
}

void load_cifm_data::thread_ifm_buff1_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln32_fu_284_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln32_fu_284_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())))) {
        ifm_buff1_0_we0 = ap_const_logic_1;
    } else {
        ifm_buff1_0_we0 = ap_const_logic_0;
    }
}

void load_cifm_data::thread_ifm_buff1_1_address0() {
    ifm_buff1_1_address0 =  (sc_lv<6>) (zext_ln35_fu_305_p1.read());
}

void load_cifm_data::thread_ifm_buff1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln32_fu_284_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())))) {
        ifm_buff1_1_ce0 = ap_const_logic_1;
    } else {
        ifm_buff1_1_ce0 = ap_const_logic_0;
    }
}

void load_cifm_data::thread_ifm_buff1_1_d0() {
    ifm_buff1_1_d0 = grp_fu_226_p4.read();
}

void load_cifm_data::thread_ifm_buff1_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln32_fu_284_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln32_fu_284_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())))) {
        ifm_buff1_1_we0 = ap_const_logic_1;
    } else {
        ifm_buff1_1_we0 = ap_const_logic_0;
    }
}

void load_cifm_data::thread_ifm_buff1_2_address0() {
    ifm_buff1_2_address0 =  (sc_lv<6>) (zext_ln35_fu_305_p1.read());
}

void load_cifm_data::thread_ifm_buff1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln32_fu_284_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())))) {
        ifm_buff1_2_ce0 = ap_const_logic_1;
    } else {
        ifm_buff1_2_ce0 = ap_const_logic_0;
    }
}

void load_cifm_data::thread_ifm_buff1_2_d0() {
    ifm_buff1_2_d0 = grp_fu_236_p4.read();
}

void load_cifm_data::thread_ifm_buff1_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln32_fu_284_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln32_fu_284_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())))) {
        ifm_buff1_2_we0 = ap_const_logic_1;
    } else {
        ifm_buff1_2_we0 = ap_const_logic_0;
    }
}

void load_cifm_data::thread_ifm_buff2_0_address0() {
    ifm_buff2_0_address0 =  (sc_lv<6>) (zext_ln57_fu_343_p1.read());
}

void load_cifm_data::thread_ifm_buff2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln54_fu_322_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())))) {
        ifm_buff2_0_ce0 = ap_const_logic_1;
    } else {
        ifm_buff2_0_ce0 = ap_const_logic_0;
    }
}

void load_cifm_data::thread_ifm_buff2_0_d0() {
    ifm_buff2_0_d0 = trunc_ln57_fu_334_p1.read();
}

void load_cifm_data::thread_ifm_buff2_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln54_fu_322_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln54_fu_322_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())))) {
        ifm_buff2_0_we0 = ap_const_logic_1;
    } else {
        ifm_buff2_0_we0 = ap_const_logic_0;
    }
}

void load_cifm_data::thread_ifm_buff2_1_address0() {
    ifm_buff2_1_address0 =  (sc_lv<6>) (zext_ln57_fu_343_p1.read());
}

void load_cifm_data::thread_ifm_buff2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln54_fu_322_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())))) {
        ifm_buff2_1_ce0 = ap_const_logic_1;
    } else {
        ifm_buff2_1_ce0 = ap_const_logic_0;
    }
}

void load_cifm_data::thread_ifm_buff2_1_d0() {
    ifm_buff2_1_d0 = grp_fu_226_p4.read();
}

void load_cifm_data::thread_ifm_buff2_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln54_fu_322_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln54_fu_322_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())))) {
        ifm_buff2_1_we0 = ap_const_logic_1;
    } else {
        ifm_buff2_1_we0 = ap_const_logic_0;
    }
}

void load_cifm_data::thread_ifm_buff2_2_address0() {
    ifm_buff2_2_address0 =  (sc_lv<6>) (zext_ln57_fu_343_p1.read());
}

void load_cifm_data::thread_ifm_buff2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln54_fu_322_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())))) {
        ifm_buff2_2_ce0 = ap_const_logic_1;
    } else {
        ifm_buff2_2_ce0 = ap_const_logic_0;
    }
}

void load_cifm_data::thread_ifm_buff2_2_d0() {
    ifm_buff2_2_d0 = grp_fu_236_p4.read();
}

void load_cifm_data::thread_ifm_buff2_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln54_fu_322_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln54_fu_322_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())))) {
        ifm_buff2_2_we0 = ap_const_logic_1;
    } else {
        ifm_buff2_2_we0 = ap_const_logic_0;
    }
}

void load_cifm_data::thread_j_1_fu_290_p2() {
    j_1_fu_290_p2 = (!j1_0_reg_204.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j1_0_reg_204.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void load_cifm_data::thread_j_2_fu_328_p2() {
    j_2_fu_328_p2 = (!j2_0_reg_215.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j2_0_reg_215.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void load_cifm_data::thread_j_fu_252_p2() {
    j_fu_252_p2 = (!cifm_counter_0_reg_193.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(cifm_counter_0_reg_193.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void load_cifm_data::thread_trunc_ln12_fu_265_p1() {
    trunc_ln12_fu_265_p1 = cifm_TDATA.read().range(32-1, 0);
}

void load_cifm_data::thread_trunc_ln35_fu_296_p1() {
    trunc_ln35_fu_296_p1 = cifm_TDATA.read().range(32-1, 0);
}

void load_cifm_data::thread_trunc_ln57_fu_334_p1() {
    trunc_ln57_fu_334_p1 = cifm_TDATA.read().range(32-1, 0);
}

void load_cifm_data::thread_zext_ln12_fu_258_p1() {
    zext_ln12_fu_258_p1 = esl_zext<64,6>(cifm_counter_0_reg_193.read());
}

void load_cifm_data::thread_zext_ln35_fu_305_p1() {
    zext_ln35_fu_305_p1 = esl_zext<64,6>(j1_0_reg_204.read());
}

void load_cifm_data::thread_zext_ln57_fu_343_p1() {
    zext_ln57_fu_343_p1 = esl_zext<64,6>(j2_0_reg_215.read());
}

void load_cifm_data::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln9_fu_246_p2.read(), ap_const_lv1_0) && !(esl_seteq<1,1,1>(icmp_ln9_fu_246_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && !(esl_seteq<1,1,1>(icmp_ln9_fu_246_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())) && esl_seteq<1,1,1>(icmp_ln9_fu_246_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln32_fu_284_p2.read()) && !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln32_fu_284_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln32_fu_284_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())) && esl_seteq<1,1,1>(icmp_ln32_fu_284_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln54_fu_322_p2.read()) && !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln54_fu_322_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())))) {
                ap_NS_fsm = ap_ST_fsm_state6;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && !(esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln54_fu_322_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, cifm_TVALID.read())) && esl_seteq<1,1,1>(icmp_ln54_fu_322_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state7;
            } else {
                ap_NS_fsm = ap_ST_fsm_state6;
            }
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXXXXXX";
            break;
    }
}

}
