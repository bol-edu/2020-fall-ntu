-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity conv_read is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    cofm_i_TDATA : IN STD_LOGIC_VECTOR (511 downto 0);
    cofm_i_TVALID : IN STD_LOGIC;
    cofm_i_TREADY : OUT STD_LOGIC;
    cofm_o_TDATA : OUT STD_LOGIC_VECTOR (511 downto 0);
    cofm_o_TVALID : OUT STD_LOGIC;
    cofm_o_TREADY : IN STD_LOGIC;
    ofm_buff0_0_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
    ofm_buff0_0_ce0 : OUT STD_LOGIC;
    ofm_buff0_0_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    ofm_buff0_1_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
    ofm_buff0_1_ce0 : OUT STD_LOGIC;
    ofm_buff0_1_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    ofm_buff0_2_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
    ofm_buff0_2_ce0 : OUT STD_LOGIC;
    ofm_buff0_2_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    ofm_buff0_3_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
    ofm_buff0_3_ce0 : OUT STD_LOGIC;
    ofm_buff0_3_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    ofm_buff0_4_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
    ofm_buff0_4_ce0 : OUT STD_LOGIC;
    ofm_buff0_4_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    ofm_buff0_5_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
    ofm_buff0_5_ce0 : OUT STD_LOGIC;
    ofm_buff0_5_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    cofm_counter_read : IN STD_LOGIC_VECTOR (31 downto 0);
    enable : IN STD_LOGIC;
    ap_return : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of conv_read is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_ST_fsm_pp0_stage0 : STD_LOGIC_VECTOR (4 downto 0) := "00010";
    constant ap_ST_fsm_pp0_stage1 : STD_LOGIC_VECTOR (4 downto 0) := "00100";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (4 downto 0) := "01000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv6_0 : STD_LOGIC_VECTOR (5 downto 0) := "000000";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_20 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000100000";
    constant ap_const_lv6_20 : STD_LOGIC_VECTOR (5 downto 0) := "100000";
    constant ap_const_lv6_1 : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    constant ap_const_lv32_BF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000010111111";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";

    signal ap_CS_fsm : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal cofm_TDATA_i_blk_n : STD_LOGIC;
    signal ap_CS_fsm_pp0_stage1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage1 : signal is "none";
    signal ap_enable_reg_pp0_iter0 : STD_LOGIC := '0';
    signal ap_block_pp0_stage1 : BOOLEAN;
    signal icmp_ln233_reg_285 : STD_LOGIC_VECTOR (0 downto 0);
    signal cofm_TDATA_o_blk_n : STD_LOGIC;
    signal ap_CS_fsm_pp0_stage0 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage0 : signal is "none";
    signal ap_enable_reg_pp0_iter1 : STD_LOGIC := '0';
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal j_0_reg_171 : STD_LOGIC_VECTOR (5 downto 0);
    signal enable_read_read_fu_68_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal add_ln233_fu_191_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal add_ln233_reg_280 : STD_LOGIC_VECTOR (31 downto 0);
    signal icmp_ln233_fu_197_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_block_state2_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state4_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_state4_io : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal j_fu_203_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal j_reg_289 : STD_LOGIC_VECTOR (5 downto 0);
    signal cofm_b5_addr1516_par_fu_259_p5 : STD_LOGIC_VECTOR (511 downto 0);
    signal cofm_b5_addr1516_par_reg_324 : STD_LOGIC_VECTOR (511 downto 0);
    signal ap_block_state3_pp0_stage1_iter0 : BOOLEAN;
    signal ap_block_pp0_stage1_11001 : BOOLEAN;
    signal ap_block_pp0_stage0_subdone : BOOLEAN;
    signal ap_condition_pp0_exit_iter0_state2 : STD_LOGIC;
    signal ap_block_pp0_stage1_subdone : BOOLEAN;
    signal ap_phi_mux_j_0_phi_fu_175_p4 : STD_LOGIC_VECTOR (5 downto 0);
    signal cofm_counter_1_reg_182 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal zext_ln236_fu_209_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_block_pp0_stage0_01001 : BOOLEAN;
    signal bitcast_ln241_fu_239_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal bitcast_ln240_fu_235_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal bitcast_ln239_fu_231_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal bitcast_ln238_fu_227_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal bitcast_ln237_fu_223_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal bitcast_ln236_fu_219_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_s_fu_243_p7 : STD_LOGIC_VECTOR (191 downto 0);
    signal ap_return_preg : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_idle_pp0 : STD_LOGIC;
    signal ap_enable_pp0 : STD_LOGIC;


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


    ap_enable_reg_pp0_iter0_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter0 <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_logic_1 = ap_condition_pp0_exit_iter0_state2) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then 
                    ap_enable_reg_pp0_iter0 <= ap_const_logic_0;
                elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1) and (enable_read_read_fu_68_p2 = ap_const_lv1_1))) then 
                    ap_enable_reg_pp0_iter0 <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter1_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
            else
                if ((((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) or ((ap_const_logic_1 = ap_CS_fsm_pp0_stage1) and (ap_const_boolean_0 = ap_block_pp0_stage1_subdone)))) then 
                    ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
                elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1) and (enable_read_read_fu_68_p2 = ap_const_lv1_1))) then 
                    ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    ap_return_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_preg <= ap_const_lv32_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
                    ap_return_preg <= cofm_counter_1_reg_182;
                end if; 
            end if;
        end if;
    end process;


    cofm_counter_1_reg_182_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                cofm_counter_1_reg_182 <= add_ln233_reg_280;
            elsif (((enable_read_read_fu_68_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                cofm_counter_1_reg_182 <= cofm_counter_read;
            end if; 
        end if;
    end process;

    j_0_reg_171_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1) and (enable_read_read_fu_68_p2 = ap_const_lv1_1))) then 
                j_0_reg_171 <= ap_const_lv6_0;
            elsif (((icmp_ln233_reg_285 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
                j_0_reg_171 <= j_reg_289;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1) and (enable_read_read_fu_68_p2 = ap_const_lv1_1))) then
                add_ln233_reg_280 <= add_ln233_fu_191_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln233_reg_285 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1) and (ap_const_boolean_0 = ap_block_pp0_stage1_11001))) then
                cofm_b5_addr1516_par_reg_324 <= cofm_b5_addr1516_par_fu_259_p5;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then
                icmp_ln233_reg_285 <= icmp_ln233_fu_197_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then
                j_reg_289 <= j_fu_203_p2;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_enable_reg_pp0_iter0, enable_read_read_fu_68_p2, icmp_ln233_fu_197_p2, ap_block_pp0_stage0_subdone, ap_block_pp0_stage1_subdone)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1) and (enable_read_read_fu_68_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                elsif (((enable_read_read_fu_68_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state6;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_pp0_stage0 => 
                if ((not(((ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (icmp_ln233_fu_197_p2 = ap_const_lv1_1))) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage1;
                elsif (((ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (icmp_ln233_fu_197_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state5;
                else
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                end if;
            when ap_ST_fsm_pp0_stage1 => 
                if ((ap_const_boolean_0 = ap_block_pp0_stage1_subdone)) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                else
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage1;
                end if;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state6;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "XXXXX";
        end case;
    end process;
    add_ln233_fu_191_p2 <= std_logic_vector(unsigned(cofm_counter_read) + unsigned(ap_const_lv32_20));
    ap_CS_fsm_pp0_stage0 <= ap_CS_fsm(1);
    ap_CS_fsm_pp0_stage1 <= ap_CS_fsm(2);
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state5 <= ap_CS_fsm(3);
    ap_CS_fsm_state6 <= ap_CS_fsm(4);
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage0_01001 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_block_pp0_stage0_11001_assign_proc : process(ap_enable_reg_pp0_iter1, ap_block_state4_io)
    begin
                ap_block_pp0_stage0_11001 <= ((ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_boolean_1 = ap_block_state4_io));
    end process;


    ap_block_pp0_stage0_subdone_assign_proc : process(ap_enable_reg_pp0_iter1, ap_block_state4_io)
    begin
                ap_block_pp0_stage0_subdone <= ((ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_boolean_1 = ap_block_state4_io));
    end process;

        ap_block_pp0_stage1 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_block_pp0_stage1_11001_assign_proc : process(cofm_i_TVALID, ap_enable_reg_pp0_iter0, icmp_ln233_reg_285)
    begin
                ap_block_pp0_stage1_11001 <= ((icmp_ln233_reg_285 = ap_const_lv1_0) and (cofm_i_TVALID = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1));
    end process;


    ap_block_pp0_stage1_subdone_assign_proc : process(cofm_i_TVALID, ap_enable_reg_pp0_iter0, icmp_ln233_reg_285)
    begin
                ap_block_pp0_stage1_subdone <= ((icmp_ln233_reg_285 = ap_const_lv1_0) and (cofm_i_TVALID = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1));
    end process;

        ap_block_state2_pp0_stage0_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_block_state3_pp0_stage1_iter0_assign_proc : process(cofm_i_TVALID, icmp_ln233_reg_285)
    begin
                ap_block_state3_pp0_stage1_iter0 <= ((icmp_ln233_reg_285 = ap_const_lv1_0) and (cofm_i_TVALID = ap_const_logic_0));
    end process;


    ap_block_state4_io_assign_proc : process(cofm_o_TREADY, icmp_ln233_reg_285)
    begin
                ap_block_state4_io <= ((icmp_ln233_reg_285 = ap_const_lv1_0) and (cofm_o_TREADY = ap_const_logic_0));
    end process;

        ap_block_state4_pp0_stage0_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_condition_pp0_exit_iter0_state2_assign_proc : process(icmp_ln233_fu_197_p2)
    begin
        if ((icmp_ln233_fu_197_p2 = ap_const_lv1_1)) then 
            ap_condition_pp0_exit_iter0_state2 <= ap_const_logic_1;
        else 
            ap_condition_pp0_exit_iter0_state2 <= ap_const_logic_0;
        end if; 
    end process;


    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state6)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state6) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;

    ap_enable_pp0 <= (ap_idle_pp0 xor ap_const_logic_1);

    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_assign_proc : process(ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_enable_reg_pp0_iter1 = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_0))) then 
            ap_idle_pp0 <= ap_const_logic_1;
        else 
            ap_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_phi_mux_j_0_phi_fu_175_p4_assign_proc : process(icmp_ln233_reg_285, ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter1, ap_block_pp0_stage0, j_0_reg_171, j_reg_289)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0) and (icmp_ln233_reg_285 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            ap_phi_mux_j_0_phi_fu_175_p4 <= j_reg_289;
        else 
            ap_phi_mux_j_0_phi_fu_175_p4 <= j_0_reg_171;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state6)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    ap_return_assign_proc : process(cofm_counter_1_reg_182, ap_return_preg, ap_CS_fsm_state6)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            ap_return <= cofm_counter_1_reg_182;
        else 
            ap_return <= ap_return_preg;
        end if; 
    end process;

    bitcast_ln236_fu_219_p1 <= ofm_buff0_0_q0;
    bitcast_ln237_fu_223_p1 <= ofm_buff0_1_q0;
    bitcast_ln238_fu_227_p1 <= ofm_buff0_2_q0;
    bitcast_ln239_fu_231_p1 <= ofm_buff0_3_q0;
    bitcast_ln240_fu_235_p1 <= ofm_buff0_4_q0;
    bitcast_ln241_fu_239_p1 <= ofm_buff0_5_q0;

    cofm_TDATA_i_blk_n_assign_proc : process(cofm_i_TVALID, ap_CS_fsm_pp0_stage1, ap_enable_reg_pp0_iter0, ap_block_pp0_stage1, icmp_ln233_reg_285)
    begin
        if (((icmp_ln233_reg_285 = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage1) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1))) then 
            cofm_TDATA_i_blk_n <= cofm_i_TVALID;
        else 
            cofm_TDATA_i_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    cofm_TDATA_o_blk_n_assign_proc : process(cofm_o_TREADY, icmp_ln233_reg_285, ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter1, ap_block_pp0_stage0)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0) and (icmp_ln233_reg_285 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            cofm_TDATA_o_blk_n <= cofm_o_TREADY;
        else 
            cofm_TDATA_o_blk_n <= ap_const_logic_1;
        end if; 
    end process;

    cofm_b5_addr1516_par_fu_259_p5 <= (cofm_i_TDATA(511 downto 192) & tmp_s_fu_243_p7);

    cofm_i_TREADY_assign_proc : process(ap_CS_fsm_pp0_stage1, ap_enable_reg_pp0_iter0, icmp_ln233_reg_285, ap_block_pp0_stage1_11001)
    begin
        if (((icmp_ln233_reg_285 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1) and (ap_const_boolean_0 = ap_block_pp0_stage1_11001))) then 
            cofm_i_TREADY <= ap_const_logic_1;
        else 
            cofm_i_TREADY <= ap_const_logic_0;
        end if; 
    end process;

    cofm_o_TDATA <= cofm_b5_addr1516_par_reg_324;

    cofm_o_TVALID_assign_proc : process(icmp_ln233_reg_285, ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter1, ap_block_pp0_stage0_11001)
    begin
        if (((icmp_ln233_reg_285 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            cofm_o_TVALID <= ap_const_logic_1;
        else 
            cofm_o_TVALID <= ap_const_logic_0;
        end if; 
    end process;

    enable_read_read_fu_68_p2 <= (0=>enable, others=>'-');
    icmp_ln233_fu_197_p2 <= "1" when (ap_phi_mux_j_0_phi_fu_175_p4 = ap_const_lv6_20) else "0";
    j_fu_203_p2 <= std_logic_vector(unsigned(ap_phi_mux_j_0_phi_fu_175_p4) + unsigned(ap_const_lv6_1));
    ofm_buff0_0_address0 <= zext_ln236_fu_209_p1(5 - 1 downto 0);

    ofm_buff0_0_ce0_assign_proc : process(ap_enable_reg_pp0_iter0, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            ofm_buff0_0_ce0 <= ap_const_logic_1;
        else 
            ofm_buff0_0_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ofm_buff0_1_address0 <= zext_ln236_fu_209_p1(5 - 1 downto 0);

    ofm_buff0_1_ce0_assign_proc : process(ap_enable_reg_pp0_iter0, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            ofm_buff0_1_ce0 <= ap_const_logic_1;
        else 
            ofm_buff0_1_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ofm_buff0_2_address0 <= zext_ln236_fu_209_p1(5 - 1 downto 0);

    ofm_buff0_2_ce0_assign_proc : process(ap_enable_reg_pp0_iter0, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            ofm_buff0_2_ce0 <= ap_const_logic_1;
        else 
            ofm_buff0_2_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ofm_buff0_3_address0 <= zext_ln236_fu_209_p1(5 - 1 downto 0);

    ofm_buff0_3_ce0_assign_proc : process(ap_enable_reg_pp0_iter0, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            ofm_buff0_3_ce0 <= ap_const_logic_1;
        else 
            ofm_buff0_3_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ofm_buff0_4_address0 <= zext_ln236_fu_209_p1(5 - 1 downto 0);

    ofm_buff0_4_ce0_assign_proc : process(ap_enable_reg_pp0_iter0, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            ofm_buff0_4_ce0 <= ap_const_logic_1;
        else 
            ofm_buff0_4_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ofm_buff0_5_address0 <= zext_ln236_fu_209_p1(5 - 1 downto 0);

    ofm_buff0_5_ce0_assign_proc : process(ap_enable_reg_pp0_iter0, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then 
            ofm_buff0_5_ce0 <= ap_const_logic_1;
        else 
            ofm_buff0_5_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    tmp_s_fu_243_p7 <= (((((bitcast_ln241_fu_239_p1 & bitcast_ln240_fu_235_p1) & bitcast_ln239_fu_231_p1) & bitcast_ln238_fu_227_p1) & bitcast_ln237_fu_223_p1) & bitcast_ln236_fu_219_p1);
    zext_ln236_fu_209_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(ap_phi_mux_j_0_phi_fu_175_p4),64));
end behav;
