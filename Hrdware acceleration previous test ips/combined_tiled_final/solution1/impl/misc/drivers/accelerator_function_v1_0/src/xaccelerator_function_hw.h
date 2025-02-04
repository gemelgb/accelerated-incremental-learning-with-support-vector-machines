// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

// CONTROL_BUS
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of function_flag
//        bit 31~0 - function_flag[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of length_x_kernel
//        bit 31~0 - length_x_kernel[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of tile_size_kernel
//        bit 31~0 - tile_size_kernel[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of remaining_size_kernel
//        bit 31~0 - remaining_size_kernel[31:0] (Read/Write)
// 0x2c : reserved
// 0x30 : Data signal of tile_count_predict
//        bit 31~0 - tile_count_predict[31:0] (Read/Write)
// 0x34 : reserved
// 0x38 : Data signal of remainder_predict
//        bit 31~0 - remainder_predict[31:0] (Read/Write)
// 0x3c : reserved
// 0x40 : Data signal of dual_coeff_length
//        bit 31~0 - dual_coeff_length[31:0] (Read/Write)
// 0x44 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XACCELERATOR_FUNCTION_CONTROL_BUS_ADDR_AP_CTRL                    0x00
#define XACCELERATOR_FUNCTION_CONTROL_BUS_ADDR_GIE                        0x04
#define XACCELERATOR_FUNCTION_CONTROL_BUS_ADDR_IER                        0x08
#define XACCELERATOR_FUNCTION_CONTROL_BUS_ADDR_ISR                        0x0c
#define XACCELERATOR_FUNCTION_CONTROL_BUS_ADDR_FUNCTION_FLAG_DATA         0x10
#define XACCELERATOR_FUNCTION_CONTROL_BUS_BITS_FUNCTION_FLAG_DATA         32
#define XACCELERATOR_FUNCTION_CONTROL_BUS_ADDR_LENGTH_X_KERNEL_DATA       0x18
#define XACCELERATOR_FUNCTION_CONTROL_BUS_BITS_LENGTH_X_KERNEL_DATA       32
#define XACCELERATOR_FUNCTION_CONTROL_BUS_ADDR_TILE_SIZE_KERNEL_DATA      0x20
#define XACCELERATOR_FUNCTION_CONTROL_BUS_BITS_TILE_SIZE_KERNEL_DATA      32
#define XACCELERATOR_FUNCTION_CONTROL_BUS_ADDR_REMAINING_SIZE_KERNEL_DATA 0x28
#define XACCELERATOR_FUNCTION_CONTROL_BUS_BITS_REMAINING_SIZE_KERNEL_DATA 32
#define XACCELERATOR_FUNCTION_CONTROL_BUS_ADDR_TILE_COUNT_PREDICT_DATA    0x30
#define XACCELERATOR_FUNCTION_CONTROL_BUS_BITS_TILE_COUNT_PREDICT_DATA    32
#define XACCELERATOR_FUNCTION_CONTROL_BUS_ADDR_REMAINDER_PREDICT_DATA     0x38
#define XACCELERATOR_FUNCTION_CONTROL_BUS_BITS_REMAINDER_PREDICT_DATA     32
#define XACCELERATOR_FUNCTION_CONTROL_BUS_ADDR_DUAL_COEFF_LENGTH_DATA     0x40
#define XACCELERATOR_FUNCTION_CONTROL_BUS_BITS_DUAL_COEFF_LENGTH_DATA     32

