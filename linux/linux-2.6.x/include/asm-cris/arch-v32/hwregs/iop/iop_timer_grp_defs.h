#ifndef __iop_timer_grp_defs_h
#define __iop_timer_grp_defs_h

/*
 * This file is autogenerated from
 *   file:           ../../inst/io_proc/rtl/iop_timer_grp.r
 *     id:           iop_timer_grp.r,v 1.29 2005/02/16 09:13:27 niklaspa Exp
 *     last modfied: Mon Apr 11 16:08:46 2005
 *
 *   by /n/asic/design/tools/rdesc/src/rdes2c --outfile iop_timer_grp_defs.h ../../inst/io_proc/rtl/iop_timer_grp.r
 *      id: $Id$
 * Any changes here will be lost.
 *
 * -*- buffer-read-only: t -*-
 */
/* Main access macros */
#ifndef REG_RD
#define REG_RD( scope, inst, reg ) \
  REG_READ( reg_##scope##_##reg, \
            (inst) + REG_RD_ADDR_##scope##_##reg )
#endif

#ifndef REG_WR
#define REG_WR( scope, inst, reg, val ) \
  REG_WRITE( reg_##scope##_##reg, \
             (inst) + REG_WR_ADDR_##scope##_##reg, (val) )
#endif

#ifndef REG_RD_VECT
#define REG_RD_VECT( scope, inst, reg, index ) \
  REG_READ( reg_##scope##_##reg, \
            (inst) + REG_RD_ADDR_##scope##_##reg + \
	    (index) * STRIDE_##scope##_##reg )
#endif

#ifndef REG_WR_VECT
#define REG_WR_VECT( scope, inst, reg, index, val ) \
  REG_WRITE( reg_##scope##_##reg, \
             (inst) + REG_WR_ADDR_##scope##_##reg + \
	     (index) * STRIDE_##scope##_##reg, (val) )
#endif

#ifndef REG_RD_INT
#define REG_RD_INT( scope, inst, reg ) \
  REG_READ( int, (inst) + REG_RD_ADDR_##scope##_##reg )
#endif

#ifndef REG_WR_INT
#define REG_WR_INT( scope, inst, reg, val ) \
  REG_WRITE( int, (inst) + REG_WR_ADDR_##scope##_##reg, (val) )
#endif

#ifndef REG_RD_INT_VECT
#define REG_RD_INT_VECT( scope, inst, reg, index ) \
  REG_READ( int, (inst) + REG_RD_ADDR_##scope##_##reg + \
	    (index) * STRIDE_##scope##_##reg )
#endif

#ifndef REG_WR_INT_VECT
#define REG_WR_INT_VECT( scope, inst, reg, index, val ) \
  REG_WRITE( int, (inst) + REG_WR_ADDR_##scope##_##reg + \
	     (index) * STRIDE_##scope##_##reg, (val) )
#endif

#ifndef REG_TYPE_CONV
#define REG_TYPE_CONV( type, orgtype, val ) \
  ( { union { orgtype o; type n; } r; r.o = val; r.n; } )
#endif

#ifndef reg_page_size
#define reg_page_size 8192
#endif

#ifndef REG_ADDR
#define REG_ADDR( scope, inst, reg ) \
  ( (inst) + REG_RD_ADDR_##scope##_##reg )
#endif

#ifndef REG_ADDR_VECT
#define REG_ADDR_VECT( scope, inst, reg, index ) \
  ( (inst) + REG_RD_ADDR_##scope##_##reg + \
    (index) * STRIDE_##scope##_##reg )
#endif

/* C-code for register scope iop_timer_grp */

/* Register rw_cfg, scope iop_timer_grp, type rw */
typedef struct {
  unsigned int clk_src     : 1;
  unsigned int trig        : 2;
  unsigned int clk_gen_div : 8;
  unsigned int clk_div     : 8;
  unsigned int dummy1      : 13;
} reg_iop_timer_grp_rw_cfg;
#define REG_RD_ADDR_iop_timer_grp_rw_cfg 0
#define REG_WR_ADDR_iop_timer_grp_rw_cfg 0

/* Register rw_half_period, scope iop_timer_grp, type rw */
typedef struct {
  unsigned int quota_lo     : 15;
  unsigned int quota_hi     : 15;
  unsigned int quota_hi_sel : 1;
  unsigned int dummy1       : 1;
} reg_iop_timer_grp_rw_half_period;
#define REG_RD_ADDR_iop_timer_grp_rw_half_period 4
#define REG_WR_ADDR_iop_timer_grp_rw_half_period 4

/* Register rw_half_period_len, scope iop_timer_grp, type rw */
typedef unsigned int reg_iop_timer_grp_rw_half_period_len;
#define REG_RD_ADDR_iop_timer_grp_rw_half_period_len 8
#define REG_WR_ADDR_iop_timer_grp_rw_half_period_len 8

#define STRIDE_iop_timer_grp_rw_tmr_cfg 4
/* Register rw_tmr_cfg, scope iop_timer_grp, type rw */
typedef struct {
  unsigned int clk_src         : 3;
  unsigned int strb            : 2;
  unsigned int run_mode        : 2;
  unsigned int out_mode        : 1;
  unsigned int active_on_tmr   : 2;
  unsigned int inv             : 1;
  unsigned int en_by_tmr       : 2;
  unsigned int dis_by_tmr      : 2;
  unsigned int en_only_by_reg  : 1;
  unsigned int dis_only_by_reg : 1;
  unsigned int rst_at_en_strb  : 1;
  unsigned int dummy1          : 14;
} reg_iop_timer_grp_rw_tmr_cfg;
#define REG_RD_ADDR_iop_timer_grp_rw_tmr_cfg 12
#define REG_WR_ADDR_iop_timer_grp_rw_tmr_cfg 12

#define STRIDE_iop_timer_grp_rw_tmr_len 4
/* Register rw_tmr_len, scope iop_timer_grp, type rw */
typedef struct {
  unsigned int val : 16;
  unsigned int dummy1 : 16;
} reg_iop_timer_grp_rw_tmr_len;
#define REG_RD_ADDR_iop_timer_grp_rw_tmr_len 44
#define REG_WR_ADDR_iop_timer_grp_rw_tmr_len 44

/* Register rw_cmd, scope iop_timer_grp, type rw */
typedef struct {
  unsigned int rst  : 4;
  unsigned int en   : 4;
  unsigned int dis  : 4;
  unsigned int strb : 4;
  unsigned int dummy1 : 16;
} reg_iop_timer_grp_rw_cmd;
#define REG_RD_ADDR_iop_timer_grp_rw_cmd 60
#define REG_WR_ADDR_iop_timer_grp_rw_cmd 60

/* Register r_clk_gen_cnt, scope iop_timer_grp, type r */
typedef unsigned int reg_iop_timer_grp_r_clk_gen_cnt;
#define REG_RD_ADDR_iop_timer_grp_r_clk_gen_cnt 64

#define STRIDE_iop_timer_grp_rs_tmr_cnt 8
/* Register rs_tmr_cnt, scope iop_timer_grp, type rs */
typedef struct {
  unsigned int val : 16;
  unsigned int dummy1 : 16;
} reg_iop_timer_grp_rs_tmr_cnt;
#define REG_RD_ADDR_iop_timer_grp_rs_tmr_cnt 68

#define STRIDE_iop_timer_grp_r_tmr_cnt 8
/* Register r_tmr_cnt, scope iop_timer_grp, type r */
typedef struct {
  unsigned int val : 16;
  unsigned int dummy1 : 16;
} reg_iop_timer_grp_r_tmr_cnt;
#define REG_RD_ADDR_iop_timer_grp_r_tmr_cnt 72

/* Register rw_intr_mask, scope iop_timer_grp, type rw */
typedef struct {
  unsigned int tmr0 : 1;
  unsigned int tmr1 : 1;
  unsigned int tmr2 : 1;
  unsigned int tmr3 : 1;
  unsigned int dummy1 : 28;
} reg_iop_timer_grp_rw_intr_mask;
#define REG_RD_ADDR_iop_timer_grp_rw_intr_mask 100
#define REG_WR_ADDR_iop_timer_grp_rw_intr_mask 100

/* Register rw_ack_intr, scope iop_timer_grp, type rw */
typedef struct {
  unsigned int tmr0 : 1;
  unsigned int tmr1 : 1;
  unsigned int tmr2 : 1;
  unsigned int tmr3 : 1;
  unsigned int dummy1 : 28;
} reg_iop_timer_grp_rw_ack_intr;
#define REG_RD_ADDR_iop_timer_grp_rw_ack_intr 104
#define REG_WR_ADDR_iop_timer_grp_rw_ack_intr 104

/* Register r_intr, scope iop_timer_grp, type r */
typedef struct {
  unsigned int tmr0 : 1;
  unsigned int tmr1 : 1;
  unsigned int tmr2 : 1;
  unsigned int tmr3 : 1;
  unsigned int dummy1 : 28;
} reg_iop_timer_grp_r_intr;
#define REG_RD_ADDR_iop_timer_grp_r_intr 108

/* Register r_masked_intr, scope iop_timer_grp, type r */
typedef struct {
  unsigned int tmr0 : 1;
  unsigned int tmr1 : 1;
  unsigned int tmr2 : 1;
  unsigned int tmr3 : 1;
  unsigned int dummy1 : 28;
} reg_iop_timer_grp_r_masked_intr;
#define REG_RD_ADDR_iop_timer_grp_r_masked_intr 112


/* Constants */
enum {
  regk_iop_timer_grp_clk200                = 0x00000000,
  regk_iop_timer_grp_clk_gen               = 0x00000002,
  regk_iop_timer_grp_complete              = 0x00000002,
  regk_iop_timer_grp_div_clk200            = 0x00000001,
  regk_iop_timer_grp_div_clk_gen           = 0x00000003,
  regk_iop_timer_grp_ext                   = 0x00000001,
  regk_iop_timer_grp_hi                    = 0x00000000,
  regk_iop_timer_grp_long_period           = 0x00000001,
  regk_iop_timer_grp_neg                   = 0x00000002,
  regk_iop_timer_grp_no                    = 0x00000000,
  regk_iop_timer_grp_once                  = 0x00000003,
  regk_iop_timer_grp_pause                 = 0x00000001,
  regk_iop_timer_grp_pos                   = 0x00000001,
  regk_iop_timer_grp_pos_neg               = 0x00000003,
  regk_iop_timer_grp_pulse                 = 0x00000000,
  regk_iop_timer_grp_r_tmr_cnt_size        = 0x00000004,
  regk_iop_timer_grp_rs_tmr_cnt_size       = 0x00000004,
  regk_iop_timer_grp_rw_cfg_default        = 0x00000002,
  regk_iop_timer_grp_rw_intr_mask_default  = 0x00000000,
  regk_iop_timer_grp_rw_tmr_cfg_default0   = 0x00018000,
  regk_iop_timer_grp_rw_tmr_cfg_default1   = 0x0001a900,
  regk_iop_timer_grp_rw_tmr_cfg_default2   = 0x0001d200,
  regk_iop_timer_grp_rw_tmr_cfg_default3   = 0x0001fb00,
  regk_iop_timer_grp_rw_tmr_cfg_size       = 0x00000004,
  regk_iop_timer_grp_rw_tmr_len_default    = 0x00000000,
  regk_iop_timer_grp_rw_tmr_len_size       = 0x00000004,
  regk_iop_timer_grp_short_period          = 0x00000000,
  regk_iop_timer_grp_stop                  = 0x00000000,
  regk_iop_timer_grp_tmr                   = 0x00000004,
  regk_iop_timer_grp_toggle                = 0x00000001,
  regk_iop_timer_grp_yes                   = 0x00000001
};
#endif /* __iop_timer_grp_defs_h */
