// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "rbf_kernel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const int rbf_kernel::C_S_AXI_DATA_WIDTH = "100000";
const int rbf_kernel::C_S_AXI_WSTRB_WIDTH = "100";
const int rbf_kernel::C_S_AXI_ADDR_WIDTH = "100000";
const sc_logic rbf_kernel::ap_const_logic_1 = sc_dt::Log_1;
const sc_lv<32> rbf_kernel::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<4> rbf_kernel::ap_const_lv4_0 = "0000";
const sc_lv<1> rbf_kernel::ap_const_lv1_0 = "0";
const sc_lv<5> rbf_kernel::ap_const_lv5_0 = "00000";
const sc_logic rbf_kernel::ap_const_logic_0 = sc_dt::Log_0;
const bool rbf_kernel::ap_const_boolean_1 = true;

rbf_kernel::rbf_kernel(sc_module_name name) : sc_module(name), mVcdFile(0) {
    rbf_kernel_CONTROL_BUS_s_axi_U = new rbf_kernel_CONTROL_BUS_s_axi<C_S_AXI_CONTROL_BUS_ADDR_WIDTH,C_S_AXI_CONTROL_BUS_DATA_WIDTH>("rbf_kernel_CONTROL_BUS_s_axi_U");
    rbf_kernel_CONTROL_BUS_s_axi_U->AWVALID(s_axi_CONTROL_BUS_AWVALID);
    rbf_kernel_CONTROL_BUS_s_axi_U->AWREADY(s_axi_CONTROL_BUS_AWREADY);
    rbf_kernel_CONTROL_BUS_s_axi_U->AWADDR(s_axi_CONTROL_BUS_AWADDR);
    rbf_kernel_CONTROL_BUS_s_axi_U->WVALID(s_axi_CONTROL_BUS_WVALID);
    rbf_kernel_CONTROL_BUS_s_axi_U->WREADY(s_axi_CONTROL_BUS_WREADY);
    rbf_kernel_CONTROL_BUS_s_axi_U->WDATA(s_axi_CONTROL_BUS_WDATA);
    rbf_kernel_CONTROL_BUS_s_axi_U->WSTRB(s_axi_CONTROL_BUS_WSTRB);
    rbf_kernel_CONTROL_BUS_s_axi_U->ARVALID(s_axi_CONTROL_BUS_ARVALID);
    rbf_kernel_CONTROL_BUS_s_axi_U->ARREADY(s_axi_CONTROL_BUS_ARREADY);
    rbf_kernel_CONTROL_BUS_s_axi_U->ARADDR(s_axi_CONTROL_BUS_ARADDR);
    rbf_kernel_CONTROL_BUS_s_axi_U->RVALID(s_axi_CONTROL_BUS_RVALID);
    rbf_kernel_CONTROL_BUS_s_axi_U->RREADY(s_axi_CONTROL_BUS_RREADY);
    rbf_kernel_CONTROL_BUS_s_axi_U->RDATA(s_axi_CONTROL_BUS_RDATA);
    rbf_kernel_CONTROL_BUS_s_axi_U->RRESP(s_axi_CONTROL_BUS_RRESP);
    rbf_kernel_CONTROL_BUS_s_axi_U->BVALID(s_axi_CONTROL_BUS_BVALID);
    rbf_kernel_CONTROL_BUS_s_axi_U->BREADY(s_axi_CONTROL_BUS_BREADY);
    rbf_kernel_CONTROL_BUS_s_axi_U->BRESP(s_axi_CONTROL_BUS_BRESP);
    rbf_kernel_CONTROL_BUS_s_axi_U->ACLK(ap_clk);
    rbf_kernel_CONTROL_BUS_s_axi_U->ARESET(ap_rst_n_inv);
    rbf_kernel_CONTROL_BUS_s_axi_U->ACLK_EN(ap_var_for_const0);
    rbf_kernel_CONTROL_BUS_s_axi_U->ap_start(ap_start);
    rbf_kernel_CONTROL_BUS_s_axi_U->interrupt(interrupt);
    rbf_kernel_CONTROL_BUS_s_axi_U->ap_ready(ap_ready);
    rbf_kernel_CONTROL_BUS_s_axi_U->ap_done(ap_done);
    rbf_kernel_CONTROL_BUS_s_axi_U->ap_idle(ap_idle);
    temp_buf_U = new rbf_kernel_temp_buf("temp_buf_U");
    temp_buf_U->clk(ap_clk);
    temp_buf_U->reset(ap_rst_n_inv);
    temp_buf_U->i_address0(Loop_1_proc_U0_temp_buf_address0);
    temp_buf_U->i_ce0(Loop_1_proc_U0_temp_buf_ce0);
    temp_buf_U->i_we0(Loop_1_proc_U0_temp_buf_we0);
    temp_buf_U->i_d0(Loop_1_proc_U0_temp_buf_d0);
    temp_buf_U->i_q0(temp_buf_i_q0);
    temp_buf_U->i_address1(Loop_1_proc_U0_temp_buf_address1);
    temp_buf_U->i_ce1(Loop_1_proc_U0_temp_buf_ce1);
    temp_buf_U->i_we1(Loop_1_proc_U0_temp_buf_we1);
    temp_buf_U->i_d1(Loop_1_proc_U0_temp_buf_d1);
    temp_buf_U->i_q1(temp_buf_i_q1);
    temp_buf_U->t_address0(Loop_LOOP_12_proc_U0_temp_buf_address0);
    temp_buf_U->t_ce0(Loop_LOOP_12_proc_U0_temp_buf_ce0);
    temp_buf_U->t_we0(ap_var_for_const1);
    temp_buf_U->t_d0(ap_var_for_const2);
    temp_buf_U->t_q0(temp_buf_t_q0);
    temp_buf_U->t_address1(Loop_LOOP_12_proc_U0_temp_buf_address1);
    temp_buf_U->t_ce1(Loop_LOOP_12_proc_U0_temp_buf_ce1);
    temp_buf_U->t_we1(ap_var_for_const1);
    temp_buf_U->t_d1(ap_var_for_const2);
    temp_buf_U->t_q1(temp_buf_t_q1);
    temp_buf_U->i_ce(ap_var_for_const0);
    temp_buf_U->t_ce(ap_var_for_const0);
    temp_buf_U->i_full_n(temp_buf_i_full_n);
    temp_buf_U->i_write(ap_channel_done_temp_buf);
    temp_buf_U->t_empty_n(temp_buf_t_empty_n);
    temp_buf_U->t_read(Loop_LOOP_12_proc_U0_ap_ready);
    temp2_buf_U = new rbf_kernel_temp_buf("temp2_buf_U");
    temp2_buf_U->clk(ap_clk);
    temp2_buf_U->reset(ap_rst_n_inv);
    temp2_buf_U->i_address0(Loop_1_proc_U0_temp2_buf_address0);
    temp2_buf_U->i_ce0(Loop_1_proc_U0_temp2_buf_ce0);
    temp2_buf_U->i_we0(Loop_1_proc_U0_temp2_buf_we0);
    temp2_buf_U->i_d0(Loop_1_proc_U0_temp2_buf_d0);
    temp2_buf_U->i_q0(temp2_buf_i_q0);
    temp2_buf_U->i_address1(Loop_1_proc_U0_temp2_buf_address1);
    temp2_buf_U->i_ce1(Loop_1_proc_U0_temp2_buf_ce1);
    temp2_buf_U->i_we1(Loop_1_proc_U0_temp2_buf_we1);
    temp2_buf_U->i_d1(Loop_1_proc_U0_temp2_buf_d1);
    temp2_buf_U->i_q1(temp2_buf_i_q1);
    temp2_buf_U->t_address0(Loop_LOOP_12_proc_U0_temp2_buf_address0);
    temp2_buf_U->t_ce0(Loop_LOOP_12_proc_U0_temp2_buf_ce0);
    temp2_buf_U->t_we0(ap_var_for_const1);
    temp2_buf_U->t_d0(ap_var_for_const2);
    temp2_buf_U->t_q0(temp2_buf_t_q0);
    temp2_buf_U->t_address1(Loop_LOOP_12_proc_U0_temp2_buf_address1);
    temp2_buf_U->t_ce1(Loop_LOOP_12_proc_U0_temp2_buf_ce1);
    temp2_buf_U->t_we1(ap_var_for_const1);
    temp2_buf_U->t_d1(ap_var_for_const2);
    temp2_buf_U->t_q1(temp2_buf_t_q1);
    temp2_buf_U->i_ce(ap_var_for_const0);
    temp2_buf_U->t_ce(ap_var_for_const0);
    temp2_buf_U->i_full_n(temp2_buf_i_full_n);
    temp2_buf_U->i_write(ap_channel_done_temp2_buf);
    temp2_buf_U->t_empty_n(temp2_buf_t_empty_n);
    temp2_buf_U->t_read(Loop_LOOP_12_proc_U0_ap_ready);
    Loop_1_proc_U0 = new Loop_1_proc("Loop_1_proc_U0");
    Loop_1_proc_U0->ap_clk(ap_clk);
    Loop_1_proc_U0->ap_rst(ap_rst_n_inv);
    Loop_1_proc_U0->ap_start(Loop_1_proc_U0_ap_start);
    Loop_1_proc_U0->ap_done(Loop_1_proc_U0_ap_done);
    Loop_1_proc_U0->ap_continue(Loop_1_proc_U0_ap_continue);
    Loop_1_proc_U0->ap_idle(Loop_1_proc_U0_ap_idle);
    Loop_1_proc_U0->ap_ready(Loop_1_proc_U0_ap_ready);
    Loop_1_proc_U0->in_stream1_TDATA(in_stream1_TDATA);
    Loop_1_proc_U0->in_stream1_TVALID(in_stream1_TVALID);
    Loop_1_proc_U0->in_stream1_TREADY(Loop_1_proc_U0_in_stream1_TREADY);
    Loop_1_proc_U0->in_stream1_TSTRB(in_stream1_TSTRB);
    Loop_1_proc_U0->in_stream1_TKEEP(in_stream1_TKEEP);
    Loop_1_proc_U0->in_stream1_TUSER(in_stream1_TUSER);
    Loop_1_proc_U0->in_stream1_TLAST(in_stream1_TLAST);
    Loop_1_proc_U0->in_stream1_TID(in_stream1_TID);
    Loop_1_proc_U0->in_stream1_TDEST(in_stream1_TDEST);
    Loop_1_proc_U0->temp_buf_address0(Loop_1_proc_U0_temp_buf_address0);
    Loop_1_proc_U0->temp_buf_ce0(Loop_1_proc_U0_temp_buf_ce0);
    Loop_1_proc_U0->temp_buf_we0(Loop_1_proc_U0_temp_buf_we0);
    Loop_1_proc_U0->temp_buf_d0(Loop_1_proc_U0_temp_buf_d0);
    Loop_1_proc_U0->temp_buf_address1(Loop_1_proc_U0_temp_buf_address1);
    Loop_1_proc_U0->temp_buf_ce1(Loop_1_proc_U0_temp_buf_ce1);
    Loop_1_proc_U0->temp_buf_we1(Loop_1_proc_U0_temp_buf_we1);
    Loop_1_proc_U0->temp_buf_d1(Loop_1_proc_U0_temp_buf_d1);
    Loop_1_proc_U0->in_stream2_TDATA(in_stream2_TDATA);
    Loop_1_proc_U0->in_stream2_TVALID(in_stream2_TVALID);
    Loop_1_proc_U0->in_stream2_TREADY(Loop_1_proc_U0_in_stream2_TREADY);
    Loop_1_proc_U0->in_stream2_TSTRB(in_stream2_TSTRB);
    Loop_1_proc_U0->in_stream2_TKEEP(in_stream2_TKEEP);
    Loop_1_proc_U0->in_stream2_TUSER(in_stream2_TUSER);
    Loop_1_proc_U0->in_stream2_TLAST(in_stream2_TLAST);
    Loop_1_proc_U0->in_stream2_TID(in_stream2_TID);
    Loop_1_proc_U0->in_stream2_TDEST(in_stream2_TDEST);
    Loop_1_proc_U0->temp2_buf_address0(Loop_1_proc_U0_temp2_buf_address0);
    Loop_1_proc_U0->temp2_buf_ce0(Loop_1_proc_U0_temp2_buf_ce0);
    Loop_1_proc_U0->temp2_buf_we0(Loop_1_proc_U0_temp2_buf_we0);
    Loop_1_proc_U0->temp2_buf_d0(Loop_1_proc_U0_temp2_buf_d0);
    Loop_1_proc_U0->temp2_buf_address1(Loop_1_proc_U0_temp2_buf_address1);
    Loop_1_proc_U0->temp2_buf_ce1(Loop_1_proc_U0_temp2_buf_ce1);
    Loop_1_proc_U0->temp2_buf_we1(Loop_1_proc_U0_temp2_buf_we1);
    Loop_1_proc_U0->temp2_buf_d1(Loop_1_proc_U0_temp2_buf_d1);
    Loop_LOOP_12_proc_U0 = new Loop_LOOP_12_proc("Loop_LOOP_12_proc_U0");
    Loop_LOOP_12_proc_U0->ap_clk(ap_clk);
    Loop_LOOP_12_proc_U0->ap_rst(ap_rst_n_inv);
    Loop_LOOP_12_proc_U0->ap_start(Loop_LOOP_12_proc_U0_ap_start);
    Loop_LOOP_12_proc_U0->ap_done(Loop_LOOP_12_proc_U0_ap_done);
    Loop_LOOP_12_proc_U0->ap_continue(Loop_LOOP_12_proc_U0_ap_continue);
    Loop_LOOP_12_proc_U0->ap_idle(Loop_LOOP_12_proc_U0_ap_idle);
    Loop_LOOP_12_proc_U0->ap_ready(Loop_LOOP_12_proc_U0_ap_ready);
    Loop_LOOP_12_proc_U0->temp_buf_address0(Loop_LOOP_12_proc_U0_temp_buf_address0);
    Loop_LOOP_12_proc_U0->temp_buf_ce0(Loop_LOOP_12_proc_U0_temp_buf_ce0);
    Loop_LOOP_12_proc_U0->temp_buf_q0(temp_buf_t_q0);
    Loop_LOOP_12_proc_U0->temp_buf_address1(Loop_LOOP_12_proc_U0_temp_buf_address1);
    Loop_LOOP_12_proc_U0->temp_buf_ce1(Loop_LOOP_12_proc_U0_temp_buf_ce1);
    Loop_LOOP_12_proc_U0->temp_buf_q1(temp_buf_t_q1);
    Loop_LOOP_12_proc_U0->temp2_buf_address0(Loop_LOOP_12_proc_U0_temp2_buf_address0);
    Loop_LOOP_12_proc_U0->temp2_buf_ce0(Loop_LOOP_12_proc_U0_temp2_buf_ce0);
    Loop_LOOP_12_proc_U0->temp2_buf_q0(temp2_buf_t_q0);
    Loop_LOOP_12_proc_U0->temp2_buf_address1(Loop_LOOP_12_proc_U0_temp2_buf_address1);
    Loop_LOOP_12_proc_U0->temp2_buf_ce1(Loop_LOOP_12_proc_U0_temp2_buf_ce1);
    Loop_LOOP_12_proc_U0->temp2_buf_q1(temp2_buf_t_q1);
    Loop_LOOP_12_proc_U0->ap_return(Loop_LOOP_12_proc_U0_ap_return);
    Block_Rbf_kernel_fun_U0 = new Block_Rbf_kernel_fun("Block_Rbf_kernel_fun_U0");
    Block_Rbf_kernel_fun_U0->ap_clk(ap_clk);
    Block_Rbf_kernel_fun_U0->ap_rst(ap_rst_n_inv);
    Block_Rbf_kernel_fun_U0->ap_start(Block_Rbf_kernel_fun_U0_ap_start);
    Block_Rbf_kernel_fun_U0->ap_done(Block_Rbf_kernel_fun_U0_ap_done);
    Block_Rbf_kernel_fun_U0->ap_continue(Block_Rbf_kernel_fun_U0_ap_continue);
    Block_Rbf_kernel_fun_U0->ap_idle(Block_Rbf_kernel_fun_U0_ap_idle);
    Block_Rbf_kernel_fun_U0->ap_ready(Block_Rbf_kernel_fun_U0_ap_ready);
    Block_Rbf_kernel_fun_U0->p_read(sum_3_loc_channel_dout);
    Block_Rbf_kernel_fun_U0->out_stream_TDATA(Block_Rbf_kernel_fun_U0_out_stream_TDATA);
    Block_Rbf_kernel_fun_U0->out_stream_TVALID(Block_Rbf_kernel_fun_U0_out_stream_TVALID);
    Block_Rbf_kernel_fun_U0->out_stream_TREADY(out_stream_TREADY);
    Block_Rbf_kernel_fun_U0->out_stream_TKEEP(Block_Rbf_kernel_fun_U0_out_stream_TKEEP);
    Block_Rbf_kernel_fun_U0->out_stream_TSTRB(Block_Rbf_kernel_fun_U0_out_stream_TSTRB);
    Block_Rbf_kernel_fun_U0->out_stream_TUSER(Block_Rbf_kernel_fun_U0_out_stream_TUSER);
    Block_Rbf_kernel_fun_U0->out_stream_TLAST(Block_Rbf_kernel_fun_U0_out_stream_TLAST);
    Block_Rbf_kernel_fun_U0->out_stream_TID(Block_Rbf_kernel_fun_U0_out_stream_TID);
    Block_Rbf_kernel_fun_U0->out_stream_TDEST(Block_Rbf_kernel_fun_U0_out_stream_TDEST);
    sum_3_loc_channel_U = new fifo_w32_d2_A("sum_3_loc_channel_U");
    sum_3_loc_channel_U->clk(ap_clk);
    sum_3_loc_channel_U->reset(ap_rst_n_inv);
    sum_3_loc_channel_U->if_read_ce(ap_var_for_const0);
    sum_3_loc_channel_U->if_write_ce(ap_var_for_const0);
    sum_3_loc_channel_U->if_din(Loop_LOOP_12_proc_U0_ap_return);
    sum_3_loc_channel_U->if_full_n(sum_3_loc_channel_full_n);
    sum_3_loc_channel_U->if_write(Loop_LOOP_12_proc_U0_ap_done);
    sum_3_loc_channel_U->if_dout(sum_3_loc_channel_dout);
    sum_3_loc_channel_U->if_empty_n(sum_3_loc_channel_empty_n);
    sum_3_loc_channel_U->if_read(Block_Rbf_kernel_fun_U0_ap_ready);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_Block_Rbf_kernel_fun_U0_ap_continue);

    SC_METHOD(thread_Block_Rbf_kernel_fun_U0_ap_start);
    sensitive << ( sum_3_loc_channel_empty_n );

    SC_METHOD(thread_Block_Rbf_kernel_fun_U0_start_full_n);

    SC_METHOD(thread_Block_Rbf_kernel_fun_U0_start_write);

    SC_METHOD(thread_Loop_1_proc_U0_ap_continue);
    sensitive << ( ap_sync_channel_write_temp2_buf );
    sensitive << ( ap_sync_channel_write_temp_buf );

    SC_METHOD(thread_Loop_1_proc_U0_ap_start);
    sensitive << ( ap_start );

    SC_METHOD(thread_Loop_1_proc_U0_start_full_n);

    SC_METHOD(thread_Loop_1_proc_U0_start_write);

    SC_METHOD(thread_Loop_1_proc_U0_temp2_buf_full_n);
    sensitive << ( temp2_buf_i_full_n );

    SC_METHOD(thread_Loop_1_proc_U0_temp_buf_full_n);
    sensitive << ( temp_buf_i_full_n );

    SC_METHOD(thread_Loop_LOOP_12_proc_U0_ap_continue);
    sensitive << ( sum_3_loc_channel_full_n );

    SC_METHOD(thread_Loop_LOOP_12_proc_U0_ap_start);
    sensitive << ( temp_buf_t_empty_n );
    sensitive << ( temp2_buf_t_empty_n );

    SC_METHOD(thread_Loop_LOOP_12_proc_U0_start_full_n);

    SC_METHOD(thread_Loop_LOOP_12_proc_U0_start_write);

    SC_METHOD(thread_ap_channel_done_sum_3_loc_channel);
    sensitive << ( Loop_LOOP_12_proc_U0_ap_done );

    SC_METHOD(thread_ap_channel_done_temp2_buf);
    sensitive << ( Loop_1_proc_U0_ap_done );
    sensitive << ( ap_sync_reg_channel_write_temp2_buf );

    SC_METHOD(thread_ap_channel_done_temp_buf);
    sensitive << ( Loop_1_proc_U0_ap_done );
    sensitive << ( ap_sync_reg_channel_write_temp_buf );

    SC_METHOD(thread_ap_done);
    sensitive << ( Block_Rbf_kernel_fun_U0_ap_done );

    SC_METHOD(thread_ap_idle);
    sensitive << ( Loop_1_proc_U0_ap_idle );
    sensitive << ( Loop_LOOP_12_proc_U0_ap_idle );
    sensitive << ( Block_Rbf_kernel_fun_U0_ap_idle );
    sensitive << ( temp_buf_t_empty_n );
    sensitive << ( temp2_buf_t_empty_n );
    sensitive << ( sum_3_loc_channel_empty_n );

    SC_METHOD(thread_ap_ready);
    sensitive << ( Loop_1_proc_U0_ap_ready );

    SC_METHOD(thread_ap_rst_n_inv);
    sensitive << ( ap_rst_n );

    SC_METHOD(thread_ap_sync_channel_write_temp2_buf);
    sensitive << ( ap_channel_done_temp2_buf );
    sensitive << ( Loop_1_proc_U0_temp2_buf_full_n );
    sensitive << ( ap_sync_reg_channel_write_temp2_buf );

    SC_METHOD(thread_ap_sync_channel_write_temp_buf);
    sensitive << ( ap_channel_done_temp_buf );
    sensitive << ( Loop_1_proc_U0_temp_buf_full_n );
    sensitive << ( ap_sync_reg_channel_write_temp_buf );

    SC_METHOD(thread_ap_sync_continue);

    SC_METHOD(thread_ap_sync_done);
    sensitive << ( Block_Rbf_kernel_fun_U0_ap_done );

    SC_METHOD(thread_ap_sync_ready);
    sensitive << ( Loop_1_proc_U0_ap_ready );

    SC_METHOD(thread_in_stream1_TREADY);
    sensitive << ( Loop_1_proc_U0_in_stream1_TREADY );

    SC_METHOD(thread_in_stream2_TREADY);
    sensitive << ( Loop_1_proc_U0_in_stream2_TREADY );

    SC_METHOD(thread_out_stream_TDATA);
    sensitive << ( Block_Rbf_kernel_fun_U0_out_stream_TDATA );

    SC_METHOD(thread_out_stream_TDEST);
    sensitive << ( Block_Rbf_kernel_fun_U0_out_stream_TDEST );

    SC_METHOD(thread_out_stream_TID);
    sensitive << ( Block_Rbf_kernel_fun_U0_out_stream_TID );

    SC_METHOD(thread_out_stream_TKEEP);
    sensitive << ( Block_Rbf_kernel_fun_U0_out_stream_TKEEP );

    SC_METHOD(thread_out_stream_TLAST);
    sensitive << ( Block_Rbf_kernel_fun_U0_out_stream_TLAST );

    SC_METHOD(thread_out_stream_TSTRB);
    sensitive << ( Block_Rbf_kernel_fun_U0_out_stream_TSTRB );

    SC_METHOD(thread_out_stream_TUSER);
    sensitive << ( Block_Rbf_kernel_fun_U0_out_stream_TUSER );

    SC_METHOD(thread_out_stream_TVALID);
    sensitive << ( Block_Rbf_kernel_fun_U0_out_stream_TVALID );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    SC_THREAD(thread_ap_var_for_const0);

    SC_THREAD(thread_ap_var_for_const2);

    SC_THREAD(thread_ap_var_for_const1);

    ap_sync_reg_channel_write_temp2_buf = SC_LOGIC_0;
    ap_sync_reg_channel_write_temp_buf = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "rbf_kernel_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, s_axi_CONTROL_BUS_AWVALID, "(port)s_axi_CONTROL_BUS_AWVALID");
    sc_trace(mVcdFile, s_axi_CONTROL_BUS_AWREADY, "(port)s_axi_CONTROL_BUS_AWREADY");
    sc_trace(mVcdFile, s_axi_CONTROL_BUS_AWADDR, "(port)s_axi_CONTROL_BUS_AWADDR");
    sc_trace(mVcdFile, s_axi_CONTROL_BUS_WVALID, "(port)s_axi_CONTROL_BUS_WVALID");
    sc_trace(mVcdFile, s_axi_CONTROL_BUS_WREADY, "(port)s_axi_CONTROL_BUS_WREADY");
    sc_trace(mVcdFile, s_axi_CONTROL_BUS_WDATA, "(port)s_axi_CONTROL_BUS_WDATA");
    sc_trace(mVcdFile, s_axi_CONTROL_BUS_WSTRB, "(port)s_axi_CONTROL_BUS_WSTRB");
    sc_trace(mVcdFile, s_axi_CONTROL_BUS_ARVALID, "(port)s_axi_CONTROL_BUS_ARVALID");
    sc_trace(mVcdFile, s_axi_CONTROL_BUS_ARREADY, "(port)s_axi_CONTROL_BUS_ARREADY");
    sc_trace(mVcdFile, s_axi_CONTROL_BUS_ARADDR, "(port)s_axi_CONTROL_BUS_ARADDR");
    sc_trace(mVcdFile, s_axi_CONTROL_BUS_RVALID, "(port)s_axi_CONTROL_BUS_RVALID");
    sc_trace(mVcdFile, s_axi_CONTROL_BUS_RREADY, "(port)s_axi_CONTROL_BUS_RREADY");
    sc_trace(mVcdFile, s_axi_CONTROL_BUS_RDATA, "(port)s_axi_CONTROL_BUS_RDATA");
    sc_trace(mVcdFile, s_axi_CONTROL_BUS_RRESP, "(port)s_axi_CONTROL_BUS_RRESP");
    sc_trace(mVcdFile, s_axi_CONTROL_BUS_BVALID, "(port)s_axi_CONTROL_BUS_BVALID");
    sc_trace(mVcdFile, s_axi_CONTROL_BUS_BREADY, "(port)s_axi_CONTROL_BUS_BREADY");
    sc_trace(mVcdFile, s_axi_CONTROL_BUS_BRESP, "(port)s_axi_CONTROL_BUS_BRESP");
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst_n, "(port)ap_rst_n");
    sc_trace(mVcdFile, interrupt, "(port)interrupt");
    sc_trace(mVcdFile, in_stream1_TDATA, "(port)in_stream1_TDATA");
    sc_trace(mVcdFile, in_stream1_TKEEP, "(port)in_stream1_TKEEP");
    sc_trace(mVcdFile, in_stream1_TSTRB, "(port)in_stream1_TSTRB");
    sc_trace(mVcdFile, in_stream1_TUSER, "(port)in_stream1_TUSER");
    sc_trace(mVcdFile, in_stream1_TLAST, "(port)in_stream1_TLAST");
    sc_trace(mVcdFile, in_stream1_TID, "(port)in_stream1_TID");
    sc_trace(mVcdFile, in_stream1_TDEST, "(port)in_stream1_TDEST");
    sc_trace(mVcdFile, in_stream2_TDATA, "(port)in_stream2_TDATA");
    sc_trace(mVcdFile, in_stream2_TKEEP, "(port)in_stream2_TKEEP");
    sc_trace(mVcdFile, in_stream2_TSTRB, "(port)in_stream2_TSTRB");
    sc_trace(mVcdFile, in_stream2_TUSER, "(port)in_stream2_TUSER");
    sc_trace(mVcdFile, in_stream2_TLAST, "(port)in_stream2_TLAST");
    sc_trace(mVcdFile, in_stream2_TID, "(port)in_stream2_TID");
    sc_trace(mVcdFile, in_stream2_TDEST, "(port)in_stream2_TDEST");
    sc_trace(mVcdFile, out_stream_TDATA, "(port)out_stream_TDATA");
    sc_trace(mVcdFile, out_stream_TKEEP, "(port)out_stream_TKEEP");
    sc_trace(mVcdFile, out_stream_TSTRB, "(port)out_stream_TSTRB");
    sc_trace(mVcdFile, out_stream_TUSER, "(port)out_stream_TUSER");
    sc_trace(mVcdFile, out_stream_TLAST, "(port)out_stream_TLAST");
    sc_trace(mVcdFile, out_stream_TID, "(port)out_stream_TID");
    sc_trace(mVcdFile, out_stream_TDEST, "(port)out_stream_TDEST");
    sc_trace(mVcdFile, in_stream1_TVALID, "(port)in_stream1_TVALID");
    sc_trace(mVcdFile, in_stream1_TREADY, "(port)in_stream1_TREADY");
    sc_trace(mVcdFile, in_stream2_TVALID, "(port)in_stream2_TVALID");
    sc_trace(mVcdFile, in_stream2_TREADY, "(port)in_stream2_TREADY");
    sc_trace(mVcdFile, out_stream_TVALID, "(port)out_stream_TVALID");
    sc_trace(mVcdFile, out_stream_TREADY, "(port)out_stream_TREADY");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_rst_n_inv, "ap_rst_n_inv");
    sc_trace(mVcdFile, ap_start, "ap_start");
    sc_trace(mVcdFile, ap_ready, "ap_ready");
    sc_trace(mVcdFile, ap_done, "ap_done");
    sc_trace(mVcdFile, ap_idle, "ap_idle");
    sc_trace(mVcdFile, temp_buf_i_q0, "temp_buf_i_q0");
    sc_trace(mVcdFile, temp_buf_i_q1, "temp_buf_i_q1");
    sc_trace(mVcdFile, temp_buf_t_q0, "temp_buf_t_q0");
    sc_trace(mVcdFile, temp_buf_t_q1, "temp_buf_t_q1");
    sc_trace(mVcdFile, temp2_buf_i_q0, "temp2_buf_i_q0");
    sc_trace(mVcdFile, temp2_buf_i_q1, "temp2_buf_i_q1");
    sc_trace(mVcdFile, temp2_buf_t_q0, "temp2_buf_t_q0");
    sc_trace(mVcdFile, temp2_buf_t_q1, "temp2_buf_t_q1");
    sc_trace(mVcdFile, Loop_1_proc_U0_ap_start, "Loop_1_proc_U0_ap_start");
    sc_trace(mVcdFile, Loop_1_proc_U0_ap_done, "Loop_1_proc_U0_ap_done");
    sc_trace(mVcdFile, Loop_1_proc_U0_ap_continue, "Loop_1_proc_U0_ap_continue");
    sc_trace(mVcdFile, Loop_1_proc_U0_ap_idle, "Loop_1_proc_U0_ap_idle");
    sc_trace(mVcdFile, Loop_1_proc_U0_ap_ready, "Loop_1_proc_U0_ap_ready");
    sc_trace(mVcdFile, Loop_1_proc_U0_in_stream1_TREADY, "Loop_1_proc_U0_in_stream1_TREADY");
    sc_trace(mVcdFile, Loop_1_proc_U0_temp_buf_address0, "Loop_1_proc_U0_temp_buf_address0");
    sc_trace(mVcdFile, Loop_1_proc_U0_temp_buf_ce0, "Loop_1_proc_U0_temp_buf_ce0");
    sc_trace(mVcdFile, Loop_1_proc_U0_temp_buf_we0, "Loop_1_proc_U0_temp_buf_we0");
    sc_trace(mVcdFile, Loop_1_proc_U0_temp_buf_d0, "Loop_1_proc_U0_temp_buf_d0");
    sc_trace(mVcdFile, Loop_1_proc_U0_temp_buf_address1, "Loop_1_proc_U0_temp_buf_address1");
    sc_trace(mVcdFile, Loop_1_proc_U0_temp_buf_ce1, "Loop_1_proc_U0_temp_buf_ce1");
    sc_trace(mVcdFile, Loop_1_proc_U0_temp_buf_we1, "Loop_1_proc_U0_temp_buf_we1");
    sc_trace(mVcdFile, Loop_1_proc_U0_temp_buf_d1, "Loop_1_proc_U0_temp_buf_d1");
    sc_trace(mVcdFile, Loop_1_proc_U0_in_stream2_TREADY, "Loop_1_proc_U0_in_stream2_TREADY");
    sc_trace(mVcdFile, Loop_1_proc_U0_temp2_buf_address0, "Loop_1_proc_U0_temp2_buf_address0");
    sc_trace(mVcdFile, Loop_1_proc_U0_temp2_buf_ce0, "Loop_1_proc_U0_temp2_buf_ce0");
    sc_trace(mVcdFile, Loop_1_proc_U0_temp2_buf_we0, "Loop_1_proc_U0_temp2_buf_we0");
    sc_trace(mVcdFile, Loop_1_proc_U0_temp2_buf_d0, "Loop_1_proc_U0_temp2_buf_d0");
    sc_trace(mVcdFile, Loop_1_proc_U0_temp2_buf_address1, "Loop_1_proc_U0_temp2_buf_address1");
    sc_trace(mVcdFile, Loop_1_proc_U0_temp2_buf_ce1, "Loop_1_proc_U0_temp2_buf_ce1");
    sc_trace(mVcdFile, Loop_1_proc_U0_temp2_buf_we1, "Loop_1_proc_U0_temp2_buf_we1");
    sc_trace(mVcdFile, Loop_1_proc_U0_temp2_buf_d1, "Loop_1_proc_U0_temp2_buf_d1");
    sc_trace(mVcdFile, ap_channel_done_temp2_buf, "ap_channel_done_temp2_buf");
    sc_trace(mVcdFile, Loop_1_proc_U0_temp2_buf_full_n, "Loop_1_proc_U0_temp2_buf_full_n");
    sc_trace(mVcdFile, ap_sync_reg_channel_write_temp2_buf, "ap_sync_reg_channel_write_temp2_buf");
    sc_trace(mVcdFile, ap_sync_channel_write_temp2_buf, "ap_sync_channel_write_temp2_buf");
    sc_trace(mVcdFile, ap_channel_done_temp_buf, "ap_channel_done_temp_buf");
    sc_trace(mVcdFile, Loop_1_proc_U0_temp_buf_full_n, "Loop_1_proc_U0_temp_buf_full_n");
    sc_trace(mVcdFile, ap_sync_reg_channel_write_temp_buf, "ap_sync_reg_channel_write_temp_buf");
    sc_trace(mVcdFile, ap_sync_channel_write_temp_buf, "ap_sync_channel_write_temp_buf");
    sc_trace(mVcdFile, Loop_LOOP_12_proc_U0_ap_start, "Loop_LOOP_12_proc_U0_ap_start");
    sc_trace(mVcdFile, Loop_LOOP_12_proc_U0_ap_done, "Loop_LOOP_12_proc_U0_ap_done");
    sc_trace(mVcdFile, Loop_LOOP_12_proc_U0_ap_continue, "Loop_LOOP_12_proc_U0_ap_continue");
    sc_trace(mVcdFile, Loop_LOOP_12_proc_U0_ap_idle, "Loop_LOOP_12_proc_U0_ap_idle");
    sc_trace(mVcdFile, Loop_LOOP_12_proc_U0_ap_ready, "Loop_LOOP_12_proc_U0_ap_ready");
    sc_trace(mVcdFile, Loop_LOOP_12_proc_U0_temp_buf_address0, "Loop_LOOP_12_proc_U0_temp_buf_address0");
    sc_trace(mVcdFile, Loop_LOOP_12_proc_U0_temp_buf_ce0, "Loop_LOOP_12_proc_U0_temp_buf_ce0");
    sc_trace(mVcdFile, Loop_LOOP_12_proc_U0_temp_buf_address1, "Loop_LOOP_12_proc_U0_temp_buf_address1");
    sc_trace(mVcdFile, Loop_LOOP_12_proc_U0_temp_buf_ce1, "Loop_LOOP_12_proc_U0_temp_buf_ce1");
    sc_trace(mVcdFile, Loop_LOOP_12_proc_U0_temp2_buf_address0, "Loop_LOOP_12_proc_U0_temp2_buf_address0");
    sc_trace(mVcdFile, Loop_LOOP_12_proc_U0_temp2_buf_ce0, "Loop_LOOP_12_proc_U0_temp2_buf_ce0");
    sc_trace(mVcdFile, Loop_LOOP_12_proc_U0_temp2_buf_address1, "Loop_LOOP_12_proc_U0_temp2_buf_address1");
    sc_trace(mVcdFile, Loop_LOOP_12_proc_U0_temp2_buf_ce1, "Loop_LOOP_12_proc_U0_temp2_buf_ce1");
    sc_trace(mVcdFile, Loop_LOOP_12_proc_U0_ap_return, "Loop_LOOP_12_proc_U0_ap_return");
    sc_trace(mVcdFile, ap_channel_done_sum_3_loc_channel, "ap_channel_done_sum_3_loc_channel");
    sc_trace(mVcdFile, sum_3_loc_channel_full_n, "sum_3_loc_channel_full_n");
    sc_trace(mVcdFile, Block_Rbf_kernel_fun_U0_ap_start, "Block_Rbf_kernel_fun_U0_ap_start");
    sc_trace(mVcdFile, Block_Rbf_kernel_fun_U0_ap_done, "Block_Rbf_kernel_fun_U0_ap_done");
    sc_trace(mVcdFile, Block_Rbf_kernel_fun_U0_ap_continue, "Block_Rbf_kernel_fun_U0_ap_continue");
    sc_trace(mVcdFile, Block_Rbf_kernel_fun_U0_ap_idle, "Block_Rbf_kernel_fun_U0_ap_idle");
    sc_trace(mVcdFile, Block_Rbf_kernel_fun_U0_ap_ready, "Block_Rbf_kernel_fun_U0_ap_ready");
    sc_trace(mVcdFile, Block_Rbf_kernel_fun_U0_out_stream_TDATA, "Block_Rbf_kernel_fun_U0_out_stream_TDATA");
    sc_trace(mVcdFile, Block_Rbf_kernel_fun_U0_out_stream_TVALID, "Block_Rbf_kernel_fun_U0_out_stream_TVALID");
    sc_trace(mVcdFile, Block_Rbf_kernel_fun_U0_out_stream_TKEEP, "Block_Rbf_kernel_fun_U0_out_stream_TKEEP");
    sc_trace(mVcdFile, Block_Rbf_kernel_fun_U0_out_stream_TSTRB, "Block_Rbf_kernel_fun_U0_out_stream_TSTRB");
    sc_trace(mVcdFile, Block_Rbf_kernel_fun_U0_out_stream_TUSER, "Block_Rbf_kernel_fun_U0_out_stream_TUSER");
    sc_trace(mVcdFile, Block_Rbf_kernel_fun_U0_out_stream_TLAST, "Block_Rbf_kernel_fun_U0_out_stream_TLAST");
    sc_trace(mVcdFile, Block_Rbf_kernel_fun_U0_out_stream_TID, "Block_Rbf_kernel_fun_U0_out_stream_TID");
    sc_trace(mVcdFile, Block_Rbf_kernel_fun_U0_out_stream_TDEST, "Block_Rbf_kernel_fun_U0_out_stream_TDEST");
    sc_trace(mVcdFile, ap_sync_continue, "ap_sync_continue");
    sc_trace(mVcdFile, temp_buf_i_full_n, "temp_buf_i_full_n");
    sc_trace(mVcdFile, temp_buf_t_empty_n, "temp_buf_t_empty_n");
    sc_trace(mVcdFile, temp2_buf_i_full_n, "temp2_buf_i_full_n");
    sc_trace(mVcdFile, temp2_buf_t_empty_n, "temp2_buf_t_empty_n");
    sc_trace(mVcdFile, sum_3_loc_channel_dout, "sum_3_loc_channel_dout");
    sc_trace(mVcdFile, sum_3_loc_channel_empty_n, "sum_3_loc_channel_empty_n");
    sc_trace(mVcdFile, ap_sync_done, "ap_sync_done");
    sc_trace(mVcdFile, ap_sync_ready, "ap_sync_ready");
    sc_trace(mVcdFile, Loop_1_proc_U0_start_full_n, "Loop_1_proc_U0_start_full_n");
    sc_trace(mVcdFile, Loop_1_proc_U0_start_write, "Loop_1_proc_U0_start_write");
    sc_trace(mVcdFile, Loop_LOOP_12_proc_U0_start_full_n, "Loop_LOOP_12_proc_U0_start_full_n");
    sc_trace(mVcdFile, Loop_LOOP_12_proc_U0_start_write, "Loop_LOOP_12_proc_U0_start_write");
    sc_trace(mVcdFile, Block_Rbf_kernel_fun_U0_start_full_n, "Block_Rbf_kernel_fun_U0_start_full_n");
    sc_trace(mVcdFile, Block_Rbf_kernel_fun_U0_start_write, "Block_Rbf_kernel_fun_U0_start_write");
#endif

    }
    mHdltvinHandle.open("rbf_kernel.hdltvin.dat");
    mHdltvoutHandle.open("rbf_kernel.hdltvout.dat");
}

rbf_kernel::~rbf_kernel() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete rbf_kernel_CONTROL_BUS_s_axi_U;
    delete temp_buf_U;
    delete temp2_buf_U;
    delete Loop_1_proc_U0;
    delete Loop_LOOP_12_proc_U0;
    delete Block_Rbf_kernel_fun_U0;
    delete sum_3_loc_channel_U;
}

void rbf_kernel::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void rbf_kernel::thread_ap_var_for_const2() {
    ap_var_for_const2 = ap_const_lv32_0;
}

void rbf_kernel::thread_ap_var_for_const1() {
    ap_var_for_const1 = ap_const_logic_0;
}

void rbf_kernel::thread_ap_clk_no_reset_() {
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_temp2_buf = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_1_proc_U0_ap_done.read() & 
             Loop_1_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_temp2_buf = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_temp2_buf = ap_sync_channel_write_temp2_buf.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_sync_reg_channel_write_temp_buf = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (Loop_1_proc_U0_ap_done.read() & 
             Loop_1_proc_U0_ap_continue.read()))) {
            ap_sync_reg_channel_write_temp_buf = ap_const_logic_0;
        } else {
            ap_sync_reg_channel_write_temp_buf = ap_sync_channel_write_temp_buf.read();
        }
    }
}

void rbf_kernel::thread_Block_Rbf_kernel_fun_U0_ap_continue() {
    Block_Rbf_kernel_fun_U0_ap_continue = ap_const_logic_1;
}

void rbf_kernel::thread_Block_Rbf_kernel_fun_U0_ap_start() {
    Block_Rbf_kernel_fun_U0_ap_start = sum_3_loc_channel_empty_n.read();
}

void rbf_kernel::thread_Block_Rbf_kernel_fun_U0_start_full_n() {
    Block_Rbf_kernel_fun_U0_start_full_n = ap_const_logic_1;
}

void rbf_kernel::thread_Block_Rbf_kernel_fun_U0_start_write() {
    Block_Rbf_kernel_fun_U0_start_write = ap_const_logic_0;
}

void rbf_kernel::thread_Loop_1_proc_U0_ap_continue() {
    Loop_1_proc_U0_ap_continue = (ap_sync_channel_write_temp2_buf.read() & ap_sync_channel_write_temp_buf.read());
}

void rbf_kernel::thread_Loop_1_proc_U0_ap_start() {
    Loop_1_proc_U0_ap_start = ap_start.read();
}

void rbf_kernel::thread_Loop_1_proc_U0_start_full_n() {
    Loop_1_proc_U0_start_full_n = ap_const_logic_1;
}

void rbf_kernel::thread_Loop_1_proc_U0_start_write() {
    Loop_1_proc_U0_start_write = ap_const_logic_0;
}

void rbf_kernel::thread_Loop_1_proc_U0_temp2_buf_full_n() {
    Loop_1_proc_U0_temp2_buf_full_n = temp2_buf_i_full_n.read();
}

void rbf_kernel::thread_Loop_1_proc_U0_temp_buf_full_n() {
    Loop_1_proc_U0_temp_buf_full_n = temp_buf_i_full_n.read();
}

void rbf_kernel::thread_Loop_LOOP_12_proc_U0_ap_continue() {
    Loop_LOOP_12_proc_U0_ap_continue = sum_3_loc_channel_full_n.read();
}

void rbf_kernel::thread_Loop_LOOP_12_proc_U0_ap_start() {
    Loop_LOOP_12_proc_U0_ap_start = (temp_buf_t_empty_n.read() & temp2_buf_t_empty_n.read());
}

void rbf_kernel::thread_Loop_LOOP_12_proc_U0_start_full_n() {
    Loop_LOOP_12_proc_U0_start_full_n = ap_const_logic_1;
}

void rbf_kernel::thread_Loop_LOOP_12_proc_U0_start_write() {
    Loop_LOOP_12_proc_U0_start_write = ap_const_logic_0;
}

void rbf_kernel::thread_ap_channel_done_sum_3_loc_channel() {
    ap_channel_done_sum_3_loc_channel = Loop_LOOP_12_proc_U0_ap_done.read();
}

void rbf_kernel::thread_ap_channel_done_temp2_buf() {
    ap_channel_done_temp2_buf = (Loop_1_proc_U0_ap_done.read() & (ap_sync_reg_channel_write_temp2_buf.read() ^ 
  ap_const_logic_1));
}

void rbf_kernel::thread_ap_channel_done_temp_buf() {
    ap_channel_done_temp_buf = (Loop_1_proc_U0_ap_done.read() & (ap_sync_reg_channel_write_temp_buf.read() ^ 
  ap_const_logic_1));
}

void rbf_kernel::thread_ap_done() {
    ap_done = Block_Rbf_kernel_fun_U0_ap_done.read();
}

void rbf_kernel::thread_ap_idle() {
    ap_idle = (Loop_1_proc_U0_ap_idle.read() & Loop_LOOP_12_proc_U0_ap_idle.read() & Block_Rbf_kernel_fun_U0_ap_idle.read() & (temp_buf_t_empty_n.read() ^ 
  ap_const_logic_1) & (temp2_buf_t_empty_n.read() ^ 
  ap_const_logic_1) & (sum_3_loc_channel_empty_n.read() ^ 
  ap_const_logic_1));
}

void rbf_kernel::thread_ap_ready() {
    ap_ready = Loop_1_proc_U0_ap_ready.read();
}

void rbf_kernel::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void rbf_kernel::thread_ap_sync_channel_write_temp2_buf() {
    ap_sync_channel_write_temp2_buf = ((ap_channel_done_temp2_buf.read() & 
  Loop_1_proc_U0_temp2_buf_full_n.read()) | ap_sync_reg_channel_write_temp2_buf.read());
}

void rbf_kernel::thread_ap_sync_channel_write_temp_buf() {
    ap_sync_channel_write_temp_buf = ((ap_channel_done_temp_buf.read() & 
  Loop_1_proc_U0_temp_buf_full_n.read()) | ap_sync_reg_channel_write_temp_buf.read());
}

void rbf_kernel::thread_ap_sync_continue() {
    ap_sync_continue = ap_const_logic_1;
}

void rbf_kernel::thread_ap_sync_done() {
    ap_sync_done = Block_Rbf_kernel_fun_U0_ap_done.read();
}

void rbf_kernel::thread_ap_sync_ready() {
    ap_sync_ready = Loop_1_proc_U0_ap_ready.read();
}

void rbf_kernel::thread_in_stream1_TREADY() {
    in_stream1_TREADY = Loop_1_proc_U0_in_stream1_TREADY.read();
}

void rbf_kernel::thread_in_stream2_TREADY() {
    in_stream2_TREADY = Loop_1_proc_U0_in_stream2_TREADY.read();
}

void rbf_kernel::thread_out_stream_TDATA() {
    out_stream_TDATA = Block_Rbf_kernel_fun_U0_out_stream_TDATA.read();
}

void rbf_kernel::thread_out_stream_TDEST() {
    out_stream_TDEST = Block_Rbf_kernel_fun_U0_out_stream_TDEST.read();
}

void rbf_kernel::thread_out_stream_TID() {
    out_stream_TID = Block_Rbf_kernel_fun_U0_out_stream_TID.read();
}

void rbf_kernel::thread_out_stream_TKEEP() {
    out_stream_TKEEP = Block_Rbf_kernel_fun_U0_out_stream_TKEEP.read();
}

void rbf_kernel::thread_out_stream_TLAST() {
    out_stream_TLAST = Block_Rbf_kernel_fun_U0_out_stream_TLAST.read();
}

void rbf_kernel::thread_out_stream_TSTRB() {
    out_stream_TSTRB = Block_Rbf_kernel_fun_U0_out_stream_TSTRB.read();
}

void rbf_kernel::thread_out_stream_TUSER() {
    out_stream_TUSER = Block_Rbf_kernel_fun_U0_out_stream_TUSER.read();
}

void rbf_kernel::thread_out_stream_TVALID() {
    out_stream_TVALID = Block_Rbf_kernel_fun_U0_out_stream_TVALID.read();
}

void rbf_kernel::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"s_axi_CONTROL_BUS_AWVALID\" :  \"" << s_axi_CONTROL_BUS_AWVALID.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"s_axi_CONTROL_BUS_AWREADY\" :  \"" << s_axi_CONTROL_BUS_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CONTROL_BUS_AWADDR\" :  \"" << s_axi_CONTROL_BUS_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CONTROL_BUS_WVALID\" :  \"" << s_axi_CONTROL_BUS_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CONTROL_BUS_WREADY\" :  \"" << s_axi_CONTROL_BUS_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CONTROL_BUS_WDATA\" :  \"" << s_axi_CONTROL_BUS_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CONTROL_BUS_WSTRB\" :  \"" << s_axi_CONTROL_BUS_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CONTROL_BUS_ARVALID\" :  \"" << s_axi_CONTROL_BUS_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CONTROL_BUS_ARREADY\" :  \"" << s_axi_CONTROL_BUS_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CONTROL_BUS_ARADDR\" :  \"" << s_axi_CONTROL_BUS_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CONTROL_BUS_RVALID\" :  \"" << s_axi_CONTROL_BUS_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CONTROL_BUS_RREADY\" :  \"" << s_axi_CONTROL_BUS_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CONTROL_BUS_RDATA\" :  \"" << s_axi_CONTROL_BUS_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CONTROL_BUS_RRESP\" :  \"" << s_axi_CONTROL_BUS_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CONTROL_BUS_BVALID\" :  \"" << s_axi_CONTROL_BUS_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CONTROL_BUS_BREADY\" :  \"" << s_axi_CONTROL_BUS_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CONTROL_BUS_BRESP\" :  \"" << s_axi_CONTROL_BUS_BRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"interrupt\" :  \"" << interrupt.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_stream1_TDATA\" :  \"" << in_stream1_TDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_stream1_TKEEP\" :  \"" << in_stream1_TKEEP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_stream1_TSTRB\" :  \"" << in_stream1_TSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_stream1_TUSER\" :  \"" << in_stream1_TUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_stream1_TLAST\" :  \"" << in_stream1_TLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_stream1_TID\" :  \"" << in_stream1_TID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_stream1_TDEST\" :  \"" << in_stream1_TDEST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_stream2_TDATA\" :  \"" << in_stream2_TDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_stream2_TKEEP\" :  \"" << in_stream2_TKEEP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_stream2_TSTRB\" :  \"" << in_stream2_TSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_stream2_TUSER\" :  \"" << in_stream2_TUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_stream2_TLAST\" :  \"" << in_stream2_TLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_stream2_TID\" :  \"" << in_stream2_TID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_stream2_TDEST\" :  \"" << in_stream2_TDEST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_stream_TDATA\" :  \"" << out_stream_TDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_stream_TKEEP\" :  \"" << out_stream_TKEEP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_stream_TSTRB\" :  \"" << out_stream_TSTRB.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_stream_TUSER\" :  \"" << out_stream_TUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_stream_TLAST\" :  \"" << out_stream_TLAST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_stream_TID\" :  \"" << out_stream_TID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_stream_TDEST\" :  \"" << out_stream_TDEST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_stream1_TVALID\" :  \"" << in_stream1_TVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"in_stream1_TREADY\" :  \"" << in_stream1_TREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_stream2_TVALID\" :  \"" << in_stream2_TVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"in_stream2_TREADY\" :  \"" << in_stream2_TREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_stream_TVALID\" :  \"" << out_stream_TVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"out_stream_TREADY\" :  \"" << out_stream_TREADY.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

