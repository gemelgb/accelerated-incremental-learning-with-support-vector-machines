// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _Loop_LOOP_1_proc10_HH_
#define _Loop_LOOP_1_proc10_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct Loop_LOOP_1_proc10 : public sc_module {
    // Port declarations 32
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > kernel_index_stream_TDATA;
    sc_in< sc_logic > kernel_index_stream_TVALID;
    sc_out< sc_logic > kernel_index_stream_TREADY;
    sc_in< sc_lv<4> > kernel_index_stream_TSTRB;
    sc_in< sc_lv<4> > kernel_index_stream_TKEEP;
    sc_in< sc_lv<4> > kernel_index_stream_TUSER;
    sc_in< sc_lv<1> > kernel_index_stream_TLAST;
    sc_in< sc_lv<5> > kernel_index_stream_TID;
    sc_in< sc_lv<5> > kernel_index_stream_TDEST;
    sc_out< sc_lv<10> > index_buf_address0;
    sc_out< sc_logic > index_buf_ce0;
    sc_out< sc_logic > index_buf_we0;
    sc_out< sc_lv<32> > index_buf_d0;
    sc_in< sc_lv<32> > length_x;
    sc_in< sc_lv<32> > tile_size;
    sc_in< sc_lv<32> > remaining_size;
    sc_out< sc_lv<32> > length_x_out_din;
    sc_in< sc_logic > length_x_out_full_n;
    sc_out< sc_logic > length_x_out_write;
    sc_out< sc_lv<32> > tile_size_out_din;
    sc_in< sc_logic > tile_size_out_full_n;
    sc_out< sc_logic > tile_size_out_write;
    sc_out< sc_lv<32> > remaining_size_out_din;
    sc_in< sc_logic > remaining_size_out_full_n;
    sc_out< sc_logic > remaining_size_out_write;


    // Module declarations
    Loop_LOOP_1_proc10(sc_module_name name);
    SC_HAS_PROCESS(Loop_LOOP_1_proc10);

    ~Loop_LOOP_1_proc10();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > kernel_index_stream_data_V_0_data_out;
    sc_signal< sc_logic > kernel_index_stream_data_V_0_vld_in;
    sc_signal< sc_logic > kernel_index_stream_data_V_0_vld_out;
    sc_signal< sc_logic > kernel_index_stream_data_V_0_ack_in;
    sc_signal< sc_logic > kernel_index_stream_data_V_0_ack_out;
    sc_signal< sc_lv<32> > kernel_index_stream_data_V_0_payload_A;
    sc_signal< sc_lv<32> > kernel_index_stream_data_V_0_payload_B;
    sc_signal< sc_logic > kernel_index_stream_data_V_0_sel_rd;
    sc_signal< sc_logic > kernel_index_stream_data_V_0_sel_wr;
    sc_signal< sc_logic > kernel_index_stream_data_V_0_sel;
    sc_signal< sc_logic > kernel_index_stream_data_V_0_load_A;
    sc_signal< sc_logic > kernel_index_stream_data_V_0_load_B;
    sc_signal< sc_lv<2> > kernel_index_stream_data_V_0_state;
    sc_signal< sc_logic > kernel_index_stream_data_V_0_state_cmp_full;
    sc_signal< sc_logic > kernel_index_stream_dest_V_0_vld_in;
    sc_signal< sc_logic > kernel_index_stream_dest_V_0_vld_out;
    sc_signal< sc_logic > kernel_index_stream_dest_V_0_ack_out;
    sc_signal< sc_lv<2> > kernel_index_stream_dest_V_0_state;
    sc_signal< sc_logic > kernel_index_stream_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > exitcond5_i_i_i_i_reg_187;
    sc_signal< sc_logic > length_x_out_blk_n;
    sc_signal< sc_logic > tile_size_out_blk_n;
    sc_signal< sc_logic > remaining_size_out_blk_n;
    sc_signal< sc_lv<10> > j_0_i_i_i_i_reg_149;
    sc_signal< sc_lv<1> > exitcond5_i_i_i_i_fu_161_p2;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<10> > is_idx1_fu_167_p2;
    sc_signal< sc_lv<10> > is_idx1_reg_191;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_state1;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_lv<10> > ap_phi_mux_j_0_i_i_i_i_phi_fu_153_p4;
    sc_signal< sc_lv<64> > tmp_2_i_i_i_fu_173_p1;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_pp0_stage0;
    static const sc_lv<3> ap_ST_fsm_state4;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<10> ap_const_lv10_310;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<32> ap_const_lv32_2;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state4();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_j_0_i_i_i_i_phi_fu_153_p4();
    void thread_ap_ready();
    void thread_exitcond5_i_i_i_i_fu_161_p2();
    void thread_index_buf_address0();
    void thread_index_buf_ce0();
    void thread_index_buf_d0();
    void thread_index_buf_we0();
    void thread_is_idx1_fu_167_p2();
    void thread_kernel_index_stream_TDATA_blk_n();
    void thread_kernel_index_stream_TREADY();
    void thread_kernel_index_stream_data_V_0_ack_in();
    void thread_kernel_index_stream_data_V_0_ack_out();
    void thread_kernel_index_stream_data_V_0_data_out();
    void thread_kernel_index_stream_data_V_0_load_A();
    void thread_kernel_index_stream_data_V_0_load_B();
    void thread_kernel_index_stream_data_V_0_sel();
    void thread_kernel_index_stream_data_V_0_state_cmp_full();
    void thread_kernel_index_stream_data_V_0_vld_in();
    void thread_kernel_index_stream_data_V_0_vld_out();
    void thread_kernel_index_stream_dest_V_0_ack_out();
    void thread_kernel_index_stream_dest_V_0_vld_in();
    void thread_kernel_index_stream_dest_V_0_vld_out();
    void thread_length_x_out_blk_n();
    void thread_length_x_out_din();
    void thread_length_x_out_write();
    void thread_remaining_size_out_blk_n();
    void thread_remaining_size_out_din();
    void thread_remaining_size_out_write();
    void thread_tile_size_out_blk_n();
    void thread_tile_size_out_din();
    void thread_tile_size_out_write();
    void thread_tmp_2_i_i_i_fu_173_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
