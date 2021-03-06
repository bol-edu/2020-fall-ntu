-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity write_row_ifm is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    cifm_TDATA : IN STD_LOGIC_VECTOR (511 downto 0);
    cifm_TVALID : IN STD_LOGIC;
    cifm_TREADY : OUT STD_LOGIC;
    ifm_buff0_0_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    ifm_buff0_0_ce0 : OUT STD_LOGIC;
    ifm_buff0_0_we0 : OUT STD_LOGIC;
    ifm_buff0_0_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    ifm_buff0_1_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    ifm_buff0_1_ce0 : OUT STD_LOGIC;
    ifm_buff0_1_we0 : OUT STD_LOGIC;
    ifm_buff0_1_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    ifm_buff0_2_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    ifm_buff0_2_ce0 : OUT STD_LOGIC;
    ifm_buff0_2_we0 : OUT STD_LOGIC;
    ifm_buff0_2_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    ifm_buff0_3_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    ifm_buff0_3_ce0 : OUT STD_LOGIC;
    ifm_buff0_3_we0 : OUT STD_LOGIC;
    ifm_buff0_3_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    ifm_buff0_4_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    ifm_buff0_4_ce0 : OUT STD_LOGIC;
    ifm_buff0_4_we0 : OUT STD_LOGIC;
    ifm_buff0_4_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    ifm_buff0_5_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    ifm_buff0_5_ce0 : OUT STD_LOGIC;
    ifm_buff0_5_we0 : OUT STD_LOGIC;
    ifm_buff0_5_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    ifm_buff0_6_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    ifm_buff0_6_ce0 : OUT STD_LOGIC;
    ifm_buff0_6_we0 : OUT STD_LOGIC;
    ifm_buff0_6_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    ifm_buff0_7_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    ifm_buff0_7_ce0 : OUT STD_LOGIC;
    ifm_buff0_7_we0 : OUT STD_LOGIC;
    ifm_buff0_7_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    ifm_buff0_8_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    ifm_buff0_8_ce0 : OUT STD_LOGIC;
    ifm_buff0_8_we0 : OUT STD_LOGIC;
    ifm_buff0_8_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    ifm_buff0_9_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    ifm_buff0_9_ce0 : OUT STD_LOGIC;
    ifm_buff0_9_we0 : OUT STD_LOGIC;
    ifm_buff0_9_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    ifm_buff0_10_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    ifm_buff0_10_ce0 : OUT STD_LOGIC;
    ifm_buff0_10_we0 : OUT STD_LOGIC;
    ifm_buff0_10_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    ifm_buff0_11_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    ifm_buff0_11_ce0 : OUT STD_LOGIC;
    ifm_buff0_11_we0 : OUT STD_LOGIC;
    ifm_buff0_11_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    ifm_buff0_12_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    ifm_buff0_12_ce0 : OUT STD_LOGIC;
    ifm_buff0_12_we0 : OUT STD_LOGIC;
    ifm_buff0_12_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    ifm_buff0_13_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    ifm_buff0_13_ce0 : OUT STD_LOGIC;
    ifm_buff0_13_we0 : OUT STD_LOGIC;
    ifm_buff0_13_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    ifm_buff0_14_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    ifm_buff0_14_ce0 : OUT STD_LOGIC;
    ifm_buff0_14_we0 : OUT STD_LOGIC;
    ifm_buff0_14_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    ifm_buff0_15_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    ifm_buff0_15_ce0 : OUT STD_LOGIC;
    ifm_buff0_15_we0 : OUT STD_LOGIC;
    ifm_buff0_15_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    cifm_counter_read : IN STD_LOGIC_VECTOR (31 downto 0);
    enable : IN STD_LOGIC;
    ap_return : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of write_row_ifm is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (2 downto 0) := "010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv6_0 : STD_LOGIC_VECTOR (5 downto 0) := "000000";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000111010";
    constant ap_const_lv6_3A : STD_LOGIC_VECTOR (5 downto 0) := "111010";
    constant ap_const_lv6_1 : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    constant ap_const_lv32_20 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000100000";
    constant ap_const_lv32_3F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000111111";
    constant ap_const_lv32_40 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000001000000";
    constant ap_const_lv32_5F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000001011111";
    constant ap_const_lv32_60 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000001100000";
    constant ap_const_lv32_7F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000001111111";
    constant ap_const_lv32_80 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000010000000";
    constant ap_const_lv32_9F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000010011111";
    constant ap_const_lv32_A0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000010100000";
    constant ap_const_lv32_BF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000010111111";
    constant ap_const_lv32_C0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000011000000";
    constant ap_const_lv32_DF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000011011111";
    constant ap_const_lv32_E0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000011100000";
    constant ap_const_lv32_FF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000011111111";
    constant ap_const_lv32_100 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000100000000";
    constant ap_const_lv32_11F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000100011111";
    constant ap_const_lv32_120 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000100100000";
    constant ap_const_lv32_13F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000100111111";
    constant ap_const_lv32_140 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000101000000";
    constant ap_const_lv32_15F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000101011111";
    constant ap_const_lv32_160 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000101100000";
    constant ap_const_lv32_17F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000101111111";
    constant ap_const_lv32_180 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000110000000";
    constant ap_const_lv32_19F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000110011111";
    constant ap_const_lv32_1A0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000110100000";
    constant ap_const_lv32_1BF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000110111111";
    constant ap_const_lv32_1C0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000111000000";
    constant ap_const_lv32_1DF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000111011111";
    constant ap_const_lv32_1E0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000111100000";
    constant ap_const_lv32_1FF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000111111111";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (2 downto 0) := "001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal cifm_TDATA_blk_n : STD_LOGIC;
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal icmp_ln61_fu_394_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal enable_read_read_fu_142_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal add_ln61_fu_388_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal add_ln61_reg_669 : STD_LOGIC_VECTOR (31 downto 0);
    signal j_fu_400_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_block_state2 : BOOLEAN;
    signal j_0_reg_368 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_phi_mux_cifm_counter_1_phi_fu_382_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal cifm_counter_1_reg_379 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal zext_ln64_fu_415_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal trunc_ln64_fu_406_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal cifm_a1_load_new6_fu_435_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal cifm_a2_load_new_fu_450_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal cifm_a3_load_new_fu_465_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal cifm_a4_load_new_fu_480_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal cifm_a5_load_new_fu_495_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal cifm_a6_load_new_fu_510_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal cifm_a7_load_new_fu_525_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal cifm_a8_load_new_fu_540_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal cifm_a9_load_new_fu_555_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal cifm_a10_load_new_fu_570_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal cifm_a11_load_new_fu_585_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal cifm_a12_load_new_fu_600_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal cifm_a13_load_new_fu_615_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal cifm_a14_load_new_fu_630_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal cifm_a15_load_new_fu_645_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_return_preg : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (2 downto 0);


begin




    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_return_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_preg <= ap_const_lv32_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
                    ap_return_preg <= ap_phi_mux_cifm_counter_1_phi_fu_382_p4;
                end if; 
            end if;
        end if;
    end process;


    cifm_counter_1_reg_379_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state3) and (enable_read_read_fu_142_p2 = ap_const_lv1_1))) then 
                cifm_counter_1_reg_379 <= add_ln61_reg_669;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1) and (enable_read_read_fu_142_p2 = ap_const_lv1_0))) then 
                cifm_counter_1_reg_379 <= cifm_counter_read;
            end if; 
        end if;
    end process;

    j_0_reg_368_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1) and (enable_read_read_fu_142_p2 = ap_const_lv1_1))) then 
                j_0_reg_368 <= ap_const_lv6_0;
            elsif ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) then 
                j_0_reg_368 <= j_fu_400_p2;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1) and (enable_read_read_fu_142_p2 = ap_const_lv1_1))) then
                add_ln61_reg_669 <= add_ln61_fu_388_p2;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2, enable_read_read_fu_142_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1) and (enable_read_read_fu_142_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1) and (enable_read_read_fu_142_p2 = ap_const_lv1_0))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                elsif ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln61_fu_394_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state2;
                end if;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "XXX";
        end case;
    end process;
    add_ln61_fu_388_p2 <= std_logic_vector(unsigned(cifm_counter_read) + unsigned(ap_const_lv32_3A));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);

    ap_block_state2_assign_proc : process(cifm_TVALID, icmp_ln61_fu_394_p2)
    begin
                ap_block_state2 <= ((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0));
    end process;


    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state3)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_phi_mux_cifm_counter_1_phi_fu_382_p4_assign_proc : process(enable_read_read_fu_142_p2, add_ln61_reg_669, cifm_counter_1_reg_379, ap_CS_fsm_state3)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) and (enable_read_read_fu_142_p2 = ap_const_lv1_1))) then 
            ap_phi_mux_cifm_counter_1_phi_fu_382_p4 <= add_ln61_reg_669;
        else 
            ap_phi_mux_cifm_counter_1_phi_fu_382_p4 <= cifm_counter_1_reg_379;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state3)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    ap_return_assign_proc : process(ap_phi_mux_cifm_counter_1_phi_fu_382_p4, ap_CS_fsm_state3, ap_return_preg)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            ap_return <= ap_phi_mux_cifm_counter_1_phi_fu_382_p4;
        else 
            ap_return <= ap_return_preg;
        end if; 
    end process;


    cifm_TDATA_blk_n_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) then 
            cifm_TDATA_blk_n <= cifm_TVALID;
        else 
            cifm_TDATA_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    cifm_TREADY_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) then 
            cifm_TREADY <= ap_const_logic_1;
        else 
            cifm_TREADY <= ap_const_logic_0;
        end if; 
    end process;

    cifm_a10_load_new_fu_570_p4 <= cifm_TDATA(351 downto 320);
    cifm_a11_load_new_fu_585_p4 <= cifm_TDATA(383 downto 352);
    cifm_a12_load_new_fu_600_p4 <= cifm_TDATA(415 downto 384);
    cifm_a13_load_new_fu_615_p4 <= cifm_TDATA(447 downto 416);
    cifm_a14_load_new_fu_630_p4 <= cifm_TDATA(479 downto 448);
    cifm_a15_load_new_fu_645_p4 <= cifm_TDATA(511 downto 480);
    cifm_a1_load_new6_fu_435_p4 <= cifm_TDATA(63 downto 32);
    cifm_a2_load_new_fu_450_p4 <= cifm_TDATA(95 downto 64);
    cifm_a3_load_new_fu_465_p4 <= cifm_TDATA(127 downto 96);
    cifm_a4_load_new_fu_480_p4 <= cifm_TDATA(159 downto 128);
    cifm_a5_load_new_fu_495_p4 <= cifm_TDATA(191 downto 160);
    cifm_a6_load_new_fu_510_p4 <= cifm_TDATA(223 downto 192);
    cifm_a7_load_new_fu_525_p4 <= cifm_TDATA(255 downto 224);
    cifm_a8_load_new_fu_540_p4 <= cifm_TDATA(287 downto 256);
    cifm_a9_load_new_fu_555_p4 <= cifm_TDATA(319 downto 288);
    enable_read_read_fu_142_p2 <= (0=>enable, others=>'-');
    icmp_ln61_fu_394_p2 <= "1" when (j_0_reg_368 = ap_const_lv6_3A) else "0";
    ifm_buff0_0_address0 <= zext_ln64_fu_415_p1(6 - 1 downto 0);

    ifm_buff0_0_ce0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ifm_buff0_0_ce0 <= ap_const_logic_1;
        else 
            ifm_buff0_0_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_0_d0 <= trunc_ln64_fu_406_p1;

    ifm_buff0_0_we0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) then 
            ifm_buff0_0_we0 <= ap_const_logic_1;
        else 
            ifm_buff0_0_we0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_10_address0 <= zext_ln64_fu_415_p1(6 - 1 downto 0);

    ifm_buff0_10_ce0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ifm_buff0_10_ce0 <= ap_const_logic_1;
        else 
            ifm_buff0_10_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_10_d0 <= cifm_a10_load_new_fu_570_p4;

    ifm_buff0_10_we0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) then 
            ifm_buff0_10_we0 <= ap_const_logic_1;
        else 
            ifm_buff0_10_we0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_11_address0 <= zext_ln64_fu_415_p1(6 - 1 downto 0);

    ifm_buff0_11_ce0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ifm_buff0_11_ce0 <= ap_const_logic_1;
        else 
            ifm_buff0_11_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_11_d0 <= cifm_a11_load_new_fu_585_p4;

    ifm_buff0_11_we0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) then 
            ifm_buff0_11_we0 <= ap_const_logic_1;
        else 
            ifm_buff0_11_we0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_12_address0 <= zext_ln64_fu_415_p1(6 - 1 downto 0);

    ifm_buff0_12_ce0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ifm_buff0_12_ce0 <= ap_const_logic_1;
        else 
            ifm_buff0_12_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_12_d0 <= cifm_a12_load_new_fu_600_p4;

    ifm_buff0_12_we0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) then 
            ifm_buff0_12_we0 <= ap_const_logic_1;
        else 
            ifm_buff0_12_we0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_13_address0 <= zext_ln64_fu_415_p1(6 - 1 downto 0);

    ifm_buff0_13_ce0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ifm_buff0_13_ce0 <= ap_const_logic_1;
        else 
            ifm_buff0_13_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_13_d0 <= cifm_a13_load_new_fu_615_p4;

    ifm_buff0_13_we0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) then 
            ifm_buff0_13_we0 <= ap_const_logic_1;
        else 
            ifm_buff0_13_we0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_14_address0 <= zext_ln64_fu_415_p1(6 - 1 downto 0);

    ifm_buff0_14_ce0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ifm_buff0_14_ce0 <= ap_const_logic_1;
        else 
            ifm_buff0_14_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_14_d0 <= cifm_a14_load_new_fu_630_p4;

    ifm_buff0_14_we0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) then 
            ifm_buff0_14_we0 <= ap_const_logic_1;
        else 
            ifm_buff0_14_we0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_15_address0 <= zext_ln64_fu_415_p1(6 - 1 downto 0);

    ifm_buff0_15_ce0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ifm_buff0_15_ce0 <= ap_const_logic_1;
        else 
            ifm_buff0_15_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_15_d0 <= cifm_a15_load_new_fu_645_p4;

    ifm_buff0_15_we0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) then 
            ifm_buff0_15_we0 <= ap_const_logic_1;
        else 
            ifm_buff0_15_we0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_1_address0 <= zext_ln64_fu_415_p1(6 - 1 downto 0);

    ifm_buff0_1_ce0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ifm_buff0_1_ce0 <= ap_const_logic_1;
        else 
            ifm_buff0_1_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_1_d0 <= cifm_a1_load_new6_fu_435_p4;

    ifm_buff0_1_we0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) then 
            ifm_buff0_1_we0 <= ap_const_logic_1;
        else 
            ifm_buff0_1_we0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_2_address0 <= zext_ln64_fu_415_p1(6 - 1 downto 0);

    ifm_buff0_2_ce0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ifm_buff0_2_ce0 <= ap_const_logic_1;
        else 
            ifm_buff0_2_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_2_d0 <= cifm_a2_load_new_fu_450_p4;

    ifm_buff0_2_we0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) then 
            ifm_buff0_2_we0 <= ap_const_logic_1;
        else 
            ifm_buff0_2_we0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_3_address0 <= zext_ln64_fu_415_p1(6 - 1 downto 0);

    ifm_buff0_3_ce0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ifm_buff0_3_ce0 <= ap_const_logic_1;
        else 
            ifm_buff0_3_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_3_d0 <= cifm_a3_load_new_fu_465_p4;

    ifm_buff0_3_we0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) then 
            ifm_buff0_3_we0 <= ap_const_logic_1;
        else 
            ifm_buff0_3_we0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_4_address0 <= zext_ln64_fu_415_p1(6 - 1 downto 0);

    ifm_buff0_4_ce0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ifm_buff0_4_ce0 <= ap_const_logic_1;
        else 
            ifm_buff0_4_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_4_d0 <= cifm_a4_load_new_fu_480_p4;

    ifm_buff0_4_we0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) then 
            ifm_buff0_4_we0 <= ap_const_logic_1;
        else 
            ifm_buff0_4_we0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_5_address0 <= zext_ln64_fu_415_p1(6 - 1 downto 0);

    ifm_buff0_5_ce0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ifm_buff0_5_ce0 <= ap_const_logic_1;
        else 
            ifm_buff0_5_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_5_d0 <= cifm_a5_load_new_fu_495_p4;

    ifm_buff0_5_we0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) then 
            ifm_buff0_5_we0 <= ap_const_logic_1;
        else 
            ifm_buff0_5_we0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_6_address0 <= zext_ln64_fu_415_p1(6 - 1 downto 0);

    ifm_buff0_6_ce0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ifm_buff0_6_ce0 <= ap_const_logic_1;
        else 
            ifm_buff0_6_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_6_d0 <= cifm_a6_load_new_fu_510_p4;

    ifm_buff0_6_we0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) then 
            ifm_buff0_6_we0 <= ap_const_logic_1;
        else 
            ifm_buff0_6_we0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_7_address0 <= zext_ln64_fu_415_p1(6 - 1 downto 0);

    ifm_buff0_7_ce0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ifm_buff0_7_ce0 <= ap_const_logic_1;
        else 
            ifm_buff0_7_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_7_d0 <= cifm_a7_load_new_fu_525_p4;

    ifm_buff0_7_we0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) then 
            ifm_buff0_7_we0 <= ap_const_logic_1;
        else 
            ifm_buff0_7_we0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_8_address0 <= zext_ln64_fu_415_p1(6 - 1 downto 0);

    ifm_buff0_8_ce0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ifm_buff0_8_ce0 <= ap_const_logic_1;
        else 
            ifm_buff0_8_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_8_d0 <= cifm_a8_load_new_fu_540_p4;

    ifm_buff0_8_we0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) then 
            ifm_buff0_8_we0 <= ap_const_logic_1;
        else 
            ifm_buff0_8_we0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_9_address0 <= zext_ln64_fu_415_p1(6 - 1 downto 0);

    ifm_buff0_9_ce0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ifm_buff0_9_ce0 <= ap_const_logic_1;
        else 
            ifm_buff0_9_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ifm_buff0_9_d0 <= cifm_a9_load_new_fu_555_p4;

    ifm_buff0_9_we0_assign_proc : process(cifm_TVALID, ap_CS_fsm_state2, icmp_ln61_fu_394_p2)
    begin
        if ((not(((cifm_TVALID = ap_const_logic_0) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) and (ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln61_fu_394_p2 = ap_const_lv1_0))) then 
            ifm_buff0_9_we0 <= ap_const_logic_1;
        else 
            ifm_buff0_9_we0 <= ap_const_logic_0;
        end if; 
    end process;

    j_fu_400_p2 <= std_logic_vector(unsigned(j_0_reg_368) + unsigned(ap_const_lv6_1));
    trunc_ln64_fu_406_p1 <= cifm_TDATA(32 - 1 downto 0);
    zext_ln64_fu_415_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(j_0_reg_368),64));
end behav;
