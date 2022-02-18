// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _conv_read_HH_
#define _conv_read_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct conv_read : public sc_module {
    // Port declarations 60
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<512> > cofm_TDATA;
    sc_out< sc_logic > cofm_TVALID;
    sc_in< sc_logic > cofm_TREADY;
    sc_out< sc_lv<6> > ofm_buff0_0_address0;
    sc_out< sc_logic > ofm_buff0_0_ce0;
    sc_in< sc_lv<32> > ofm_buff0_0_q0;
    sc_out< sc_lv<6> > ofm_buff0_1_address0;
    sc_out< sc_logic > ofm_buff0_1_ce0;
    sc_in< sc_lv<32> > ofm_buff0_1_q0;
    sc_out< sc_lv<6> > ofm_buff0_2_address0;
    sc_out< sc_logic > ofm_buff0_2_ce0;
    sc_in< sc_lv<32> > ofm_buff0_2_q0;
    sc_out< sc_lv<6> > ofm_buff0_3_address0;
    sc_out< sc_logic > ofm_buff0_3_ce0;
    sc_in< sc_lv<32> > ofm_buff0_3_q0;
    sc_out< sc_lv<6> > ofm_buff0_4_address0;
    sc_out< sc_logic > ofm_buff0_4_ce0;
    sc_in< sc_lv<32> > ofm_buff0_4_q0;
    sc_out< sc_lv<6> > ofm_buff0_5_address0;
    sc_out< sc_logic > ofm_buff0_5_ce0;
    sc_in< sc_lv<32> > ofm_buff0_5_q0;
    sc_out< sc_lv<6> > ofm_buff0_6_address0;
    sc_out< sc_logic > ofm_buff0_6_ce0;
    sc_in< sc_lv<32> > ofm_buff0_6_q0;
    sc_out< sc_lv<6> > ofm_buff0_7_address0;
    sc_out< sc_logic > ofm_buff0_7_ce0;
    sc_in< sc_lv<32> > ofm_buff0_7_q0;
    sc_out< sc_lv<6> > ofm_buff0_8_address0;
    sc_out< sc_logic > ofm_buff0_8_ce0;
    sc_in< sc_lv<32> > ofm_buff0_8_q0;
    sc_out< sc_lv<6> > ofm_buff0_9_address0;
    sc_out< sc_logic > ofm_buff0_9_ce0;
    sc_in< sc_lv<32> > ofm_buff0_9_q0;
    sc_out< sc_lv<6> > ofm_buff0_10_address0;
    sc_out< sc_logic > ofm_buff0_10_ce0;
    sc_in< sc_lv<32> > ofm_buff0_10_q0;
    sc_out< sc_lv<6> > ofm_buff0_11_address0;
    sc_out< sc_logic > ofm_buff0_11_ce0;
    sc_in< sc_lv<32> > ofm_buff0_11_q0;
    sc_out< sc_lv<6> > ofm_buff0_12_address0;
    sc_out< sc_logic > ofm_buff0_12_ce0;
    sc_in< sc_lv<32> > ofm_buff0_12_q0;
    sc_out< sc_lv<6> > ofm_buff0_13_address0;
    sc_out< sc_logic > ofm_buff0_13_ce0;
    sc_in< sc_lv<32> > ofm_buff0_13_q0;
    sc_out< sc_lv<6> > ofm_buff0_14_address0;
    sc_out< sc_logic > ofm_buff0_14_ce0;
    sc_in< sc_lv<32> > ofm_buff0_14_q0;
    sc_out< sc_lv<6> > ofm_buff0_15_address0;
    sc_out< sc_logic > ofm_buff0_15_ce0;
    sc_in< sc_lv<32> > ofm_buff0_15_q0;
    sc_in< sc_lv<32> > cofm_counter_read;
    sc_in< sc_logic > enable;
    sc_out< sc_lv<32> > ap_return;


    // Module declarations
    conv_read(sc_module_name name);
    SC_HAS_PROCESS(conv_read);

    ~conv_read();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > cofm_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > icmp_ln199_reg_482;
    sc_signal< sc_lv<6> > j_0_reg_309;
    sc_signal< sc_lv<1> > enable_read_read_fu_82_p2;
    sc_signal< sc_lv<32> > add_ln199_fu_329_p2;
    sc_signal< sc_lv<32> > add_ln199_reg_477;
    sc_signal< sc_lv<1> > icmp_ln199_fu_335_p2;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state3_io;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<6> > j_fu_341_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_lv<32> > ap_phi_mux_cofm_counter_1_phi_fu_323_p4;
    sc_signal< sc_lv<32> > cofm_counter_1_reg_320;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<64> > zext_ln202_fu_347_p1;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<32> > bitcast_ln217_fu_427_p1;
    sc_signal< sc_lv<32> > bitcast_ln216_fu_423_p1;
    sc_signal< sc_lv<32> > bitcast_ln215_fu_419_p1;
    sc_signal< sc_lv<32> > bitcast_ln214_fu_415_p1;
    sc_signal< sc_lv<32> > bitcast_ln213_fu_411_p1;
    sc_signal< sc_lv<32> > bitcast_ln212_fu_407_p1;
    sc_signal< sc_lv<32> > bitcast_ln211_fu_403_p1;
    sc_signal< sc_lv<32> > bitcast_ln210_fu_399_p1;
    sc_signal< sc_lv<32> > bitcast_ln209_fu_395_p1;
    sc_signal< sc_lv<32> > bitcast_ln208_fu_391_p1;
    sc_signal< sc_lv<32> > bitcast_ln207_fu_387_p1;
    sc_signal< sc_lv<32> > bitcast_ln206_fu_383_p1;
    sc_signal< sc_lv<32> > bitcast_ln205_fu_379_p1;
    sc_signal< sc_lv<32> > bitcast_ln204_fu_375_p1;
    sc_signal< sc_lv<32> > bitcast_ln203_fu_371_p1;
    sc_signal< sc_lv<32> > bitcast_ln202_fu_367_p1;
    sc_signal< sc_lv<32> > ap_return_preg;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_pp0_stage0;
    static const sc_lv<3> ap_ST_fsm_state4;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_38;
    static const sc_lv<6> ap_const_lv6_38;
    static const sc_lv<6> ap_const_lv6_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln199_fu_329_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state4();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_io();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_cofm_counter_1_phi_fu_323_p4();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_bitcast_ln202_fu_367_p1();
    void thread_bitcast_ln203_fu_371_p1();
    void thread_bitcast_ln204_fu_375_p1();
    void thread_bitcast_ln205_fu_379_p1();
    void thread_bitcast_ln206_fu_383_p1();
    void thread_bitcast_ln207_fu_387_p1();
    void thread_bitcast_ln208_fu_391_p1();
    void thread_bitcast_ln209_fu_395_p1();
    void thread_bitcast_ln210_fu_399_p1();
    void thread_bitcast_ln211_fu_403_p1();
    void thread_bitcast_ln212_fu_407_p1();
    void thread_bitcast_ln213_fu_411_p1();
    void thread_bitcast_ln214_fu_415_p1();
    void thread_bitcast_ln215_fu_419_p1();
    void thread_bitcast_ln216_fu_423_p1();
    void thread_bitcast_ln217_fu_427_p1();
    void thread_cofm_TDATA();
    void thread_cofm_TDATA_blk_n();
    void thread_cofm_TVALID();
    void thread_enable_read_read_fu_82_p2();
    void thread_icmp_ln199_fu_335_p2();
    void thread_j_fu_341_p2();
    void thread_ofm_buff0_0_address0();
    void thread_ofm_buff0_0_ce0();
    void thread_ofm_buff0_10_address0();
    void thread_ofm_buff0_10_ce0();
    void thread_ofm_buff0_11_address0();
    void thread_ofm_buff0_11_ce0();
    void thread_ofm_buff0_12_address0();
    void thread_ofm_buff0_12_ce0();
    void thread_ofm_buff0_13_address0();
    void thread_ofm_buff0_13_ce0();
    void thread_ofm_buff0_14_address0();
    void thread_ofm_buff0_14_ce0();
    void thread_ofm_buff0_15_address0();
    void thread_ofm_buff0_15_ce0();
    void thread_ofm_buff0_1_address0();
    void thread_ofm_buff0_1_ce0();
    void thread_ofm_buff0_2_address0();
    void thread_ofm_buff0_2_ce0();
    void thread_ofm_buff0_3_address0();
    void thread_ofm_buff0_3_ce0();
    void thread_ofm_buff0_4_address0();
    void thread_ofm_buff0_4_ce0();
    void thread_ofm_buff0_5_address0();
    void thread_ofm_buff0_5_ce0();
    void thread_ofm_buff0_6_address0();
    void thread_ofm_buff0_6_ce0();
    void thread_ofm_buff0_7_address0();
    void thread_ofm_buff0_7_ce0();
    void thread_ofm_buff0_8_address0();
    void thread_ofm_buff0_8_ce0();
    void thread_ofm_buff0_9_address0();
    void thread_ofm_buff0_9_ce0();
    void thread_zext_ln202_fu_347_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif