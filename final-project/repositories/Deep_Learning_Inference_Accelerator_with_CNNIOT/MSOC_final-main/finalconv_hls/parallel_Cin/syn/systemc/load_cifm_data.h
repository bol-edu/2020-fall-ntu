// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _load_cifm_data_HH_
#define _load_cifm_data_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct load_cifm_data : public sc_module {
    // Port declarations 45
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<512> > cifm_TDATA;
    sc_in< sc_logic > cifm_TVALID;
    sc_out< sc_logic > cifm_TREADY;
    sc_out< sc_lv<6> > ifm_buff0_0_address0;
    sc_out< sc_logic > ifm_buff0_0_ce0;
    sc_out< sc_logic > ifm_buff0_0_we0;
    sc_out< sc_lv<32> > ifm_buff0_0_d0;
    sc_out< sc_lv<6> > ifm_buff0_1_address0;
    sc_out< sc_logic > ifm_buff0_1_ce0;
    sc_out< sc_logic > ifm_buff0_1_we0;
    sc_out< sc_lv<32> > ifm_buff0_1_d0;
    sc_out< sc_lv<6> > ifm_buff0_2_address0;
    sc_out< sc_logic > ifm_buff0_2_ce0;
    sc_out< sc_logic > ifm_buff0_2_we0;
    sc_out< sc_lv<32> > ifm_buff0_2_d0;
    sc_out< sc_lv<6> > ifm_buff1_0_address0;
    sc_out< sc_logic > ifm_buff1_0_ce0;
    sc_out< sc_logic > ifm_buff1_0_we0;
    sc_out< sc_lv<32> > ifm_buff1_0_d0;
    sc_out< sc_lv<6> > ifm_buff1_1_address0;
    sc_out< sc_logic > ifm_buff1_1_ce0;
    sc_out< sc_logic > ifm_buff1_1_we0;
    sc_out< sc_lv<32> > ifm_buff1_1_d0;
    sc_out< sc_lv<6> > ifm_buff1_2_address0;
    sc_out< sc_logic > ifm_buff1_2_ce0;
    sc_out< sc_logic > ifm_buff1_2_we0;
    sc_out< sc_lv<32> > ifm_buff1_2_d0;
    sc_out< sc_lv<6> > ifm_buff2_0_address0;
    sc_out< sc_logic > ifm_buff2_0_ce0;
    sc_out< sc_logic > ifm_buff2_0_we0;
    sc_out< sc_lv<32> > ifm_buff2_0_d0;
    sc_out< sc_lv<6> > ifm_buff2_1_address0;
    sc_out< sc_logic > ifm_buff2_1_ce0;
    sc_out< sc_logic > ifm_buff2_1_we0;
    sc_out< sc_lv<32> > ifm_buff2_1_d0;
    sc_out< sc_lv<6> > ifm_buff2_2_address0;
    sc_out< sc_logic > ifm_buff2_2_ce0;
    sc_out< sc_logic > ifm_buff2_2_we0;
    sc_out< sc_lv<32> > ifm_buff2_2_d0;


    // Module declarations
    load_cifm_data(sc_module_name name);
    SC_HAS_PROCESS(load_cifm_data);

    ~load_cifm_data();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<7> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > cifm_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > icmp_ln9_fu_246_p2;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > icmp_ln32_fu_284_p2;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<1> > icmp_ln54_fu_322_p2;
    sc_signal< sc_lv<6> > j_fu_252_p2;
    sc_signal< bool > ap_block_state2;
    sc_signal< sc_lv<6> > j_1_fu_290_p2;
    sc_signal< bool > ap_block_state4;
    sc_signal< sc_lv<6> > j_2_fu_328_p2;
    sc_signal< bool > ap_block_state6;
    sc_signal< sc_lv<6> > cifm_counter_0_reg_193;
    sc_signal< sc_lv<6> > j1_0_reg_204;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<6> > j2_0_reg_215;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<64> > zext_ln12_fu_258_p1;
    sc_signal< sc_lv<64> > zext_ln35_fu_305_p1;
    sc_signal< sc_lv<64> > zext_ln57_fu_343_p1;
    sc_signal< sc_lv<32> > trunc_ln12_fu_265_p1;
    sc_signal< sc_lv<32> > grp_fu_226_p4;
    sc_signal< sc_lv<32> > grp_fu_236_p4;
    sc_signal< sc_lv<32> > trunc_ln35_fu_296_p1;
    sc_signal< sc_lv<32> > trunc_ln57_fu_334_p1;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<7> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<7> ap_ST_fsm_state1;
    static const sc_lv<7> ap_ST_fsm_state2;
    static const sc_lv<7> ap_ST_fsm_state3;
    static const sc_lv<7> ap_ST_fsm_state4;
    static const sc_lv<7> ap_ST_fsm_state5;
    static const sc_lv<7> ap_ST_fsm_state6;
    static const sc_lv<7> ap_ST_fsm_state7;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<32> ap_const_lv32_5F;
    static const sc_lv<6> ap_const_lv6_22;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<1> ap_const_lv1_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_block_state2();
    void thread_ap_block_state4();
    void thread_ap_block_state6();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_cifm_TDATA_blk_n();
    void thread_cifm_TREADY();
    void thread_grp_fu_226_p4();
    void thread_grp_fu_236_p4();
    void thread_icmp_ln32_fu_284_p2();
    void thread_icmp_ln54_fu_322_p2();
    void thread_icmp_ln9_fu_246_p2();
    void thread_ifm_buff0_0_address0();
    void thread_ifm_buff0_0_ce0();
    void thread_ifm_buff0_0_d0();
    void thread_ifm_buff0_0_we0();
    void thread_ifm_buff0_1_address0();
    void thread_ifm_buff0_1_ce0();
    void thread_ifm_buff0_1_d0();
    void thread_ifm_buff0_1_we0();
    void thread_ifm_buff0_2_address0();
    void thread_ifm_buff0_2_ce0();
    void thread_ifm_buff0_2_d0();
    void thread_ifm_buff0_2_we0();
    void thread_ifm_buff1_0_address0();
    void thread_ifm_buff1_0_ce0();
    void thread_ifm_buff1_0_d0();
    void thread_ifm_buff1_0_we0();
    void thread_ifm_buff1_1_address0();
    void thread_ifm_buff1_1_ce0();
    void thread_ifm_buff1_1_d0();
    void thread_ifm_buff1_1_we0();
    void thread_ifm_buff1_2_address0();
    void thread_ifm_buff1_2_ce0();
    void thread_ifm_buff1_2_d0();
    void thread_ifm_buff1_2_we0();
    void thread_ifm_buff2_0_address0();
    void thread_ifm_buff2_0_ce0();
    void thread_ifm_buff2_0_d0();
    void thread_ifm_buff2_0_we0();
    void thread_ifm_buff2_1_address0();
    void thread_ifm_buff2_1_ce0();
    void thread_ifm_buff2_1_d0();
    void thread_ifm_buff2_1_we0();
    void thread_ifm_buff2_2_address0();
    void thread_ifm_buff2_2_ce0();
    void thread_ifm_buff2_2_d0();
    void thread_ifm_buff2_2_we0();
    void thread_j_1_fu_290_p2();
    void thread_j_2_fu_328_p2();
    void thread_j_fu_252_p2();
    void thread_trunc_ln12_fu_265_p1();
    void thread_trunc_ln35_fu_296_p1();
    void thread_trunc_ln57_fu_334_p1();
    void thread_zext_ln12_fu_258_p1();
    void thread_zext_ln35_fu_305_p1();
    void thread_zext_ln57_fu_343_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
