/*
 * xrick/data/dat_ents.c
 *
 * Copyright (C) 1998-2002 BigOrno (bigorno@bigorno.net). All rights reserved.
 *
 * The use and distribution terms for this software are contained in the file
 * named README, which can be found in the root of this distribution. By
 * using this software in any fashion, you are agreeing to be bound by the
 * terms of this license.
 *
 * You must not remove this notice, or any other, from this software.
 */

#include "system.h"
#include "ents.h"

entdata_t ent_entdata[ENT_NBR_ENTDATA] = {
  {0000, 0000, 000000, 000000, 0000, 0000, 0x00},
  {0x18, 0x15, 000000, 000000, 0000, 0000, 0x00},
  {0000, 0000, 000000, 000000, 0000, 0000, 0x00},
  {0x18, 0x15, 000000, 000000, 0000, 0000, 0x00},
  {0x18, 0x15, 0x002f, 0x008e, 0000, 0000, 0x00},
  {0x18, 0x15, 0x002f, 0x008e, 0000, 0000, 0x00},
  {0x18, 0x15, 0x002f, 0x008e, 0000, 0000, 0x00},
  {0x18, 0x15, 0x0037, 0x007e, 0000, 0000, 0x00},
  {0x18, 0x15, 0x0037, 0x007e, 0000, 0000, 0x00},
  {0x18, 0x15, 0x0037, 0x007e, 0000, 0000, 0x00},
  {0x18, 0x15, 0x0041, 0x0086, 0000, 0000, 0x00},
  {0x18, 0x15, 0x0041, 0x0086, 0000, 0000, 0x00},
  {0x18, 0x15, 0x0041, 0x0086, 0000, 0000, 0x00},
  {0x18, 0x15, 0x004b, 0x0086, 0000, 0000, 0x00},
  {0x18, 0x15, 0x004b, 0x0086, 0000, 0000, 0x00},
  {0x18, 0x15, 0x004b, 0x0086, 0000, 0000, 0x00},
  {0x18, 0x15, 0x0029, 0x0029, 0000, 0000, 0x00},
  {0x18, 0x15, 0x002a, 0x002a, 0000, 0000, 0x00},
  {0x18, 0x15, 0x002b, 0x002b, 0000, 0000, 0x00},
  {0x18, 0x15, 0x002c, 0x002c, 0000, 0000, 0x00},
  {0x18, 0x15, 0x002e, 0x002e, 0000, 0000, 0x00},
  {0x18, 0x15, 0x002d, 0x002d, 0000, 0000, 0x00},
  {0x18, 0x15, 0x001e, 0x001e, 0x04, 0x04, 0x00},
  {0x18, 0x15, 0x001f, 0x001f, 0x04, 0x04, 0x00},
  {0x18, 0x10, 0x000c, 000000, 0x03, 0x03, 0x14},
  {0x18, 0x06, 0x000e, 0x0005, 0x04, 0x04, 0x14},
  {0x18, 0x06, 0x000e, 0x0007, 0x10, 0x04, 0x14},
  {0x18, 0x12, 0x0011, 0x0009, 0x04, 0x04, 0x18},
  {0x18, 0x10, 0x000c, 0x0007, 0x04, 0x04, 0x14},
  {0x18, 0x15, 0x0014, 0x00a4, 0x04, 0x04, 0x15},
  {0x18, 0x15, 0x0014, 0x00ca, 0x04, 0x04, 0x15},
  {0x18, 0x10, 0x000c, 0x000d, 0x04, 0x04, 0x14},
  {0x04, 0x15, 0x0018, 0x0012, 0x04, 0x07, 0x14},
  {0x18, 0x10, 0x000c, 0x0014, 0x14, 0x04, 0x19},
  {0x10, 0x10, 0x001b, 0x0028, 0x04, 0x04, 0x00},
  {0x10, 0x10, 0x001e, 0x002a, 0x04, 0x04, 0x00},
  {0x18, 0x10, 0x000c, 0x002d, 0x03, 0x03, 0x14},
  {0x20, 0x08, 0x0020, 0x0009, 0x04, 0x04, 0x18},
  {0x18, 0x10, 0x000c, 0x0034, 0x04, 0x04, 0x14},
  {0x20, 0x0d, 0x0023, 0x0009, 0x04, 0x04, 0x18},
  {0x18, 0x15, 0x0026, 0x003a, 0x04, 0x04, 0x18},
  {0x18, 0x15, 0x0026, 0x003c, 0x04, 0x04, 0x18},
  {0x18, 0x15, 0x002c, 0x003e, 0x04, 0x04, 0x14},
  {0x18, 0x10, 0x0030, 0x0048, 0x04, 0x04, 0x14},
  {0x20, 0x10, 0x0008, 0x0007, 0x04, 0x04, 0x14},
  {0x18, 0x15, 0x000a, 0x004c, 0x14, 0x04, 0x14},
  {0x18, 0x15, 0x0036, 0x0009, 0x03, 0x03, 0x17},
  {0x18, 0x15, 0x0039, 0x0053, 0x04, 0x04, 0x16},
  {0x20, 0x10, 0x0008, 0x0055, 0x04, 0x04, 0x14},
  {0x18, 0x15, 0x000a, 0x0061, 0x04, 0x04, 0x14},
  {0x12, 0x15, 0x003c, 0x0067, 0x04, 0x04, 0x1A},
  {0x12, 0x15, 0x0041, 0x006a, 0x18, 0x04, 0x1A},
  {0x18, 0x15, 0x000a, 0x006c, 0x04, 0x04, 0x14},
  {0x18, 0x15, 0x0046, 0x0071, 0x04, 0x04, 0x1A},
  {0x12, 0x10, 0x004b, 0x0074, 0x04, 0x04, 0x17},
  {0x12, 0x10, 0x004f, 0x0074, 0x04, 0x04, 0x17},
  {0x18, 0x15, 0x0053, 0x0076, 0x04, 0x04, 0x13},
  {0x10, 0x08, 0x0057, 0x0007, 0x10, 0x04, 0x1C},
  {0x18, 0x10, 0x005a, 0x007e, 0x04, 0x04, 0x00},
  {0x18, 0x10, 0x005c, 0x0009, 0x03, 0x03, 0x9A},
  {0x18, 0x11, 0x0068, 0x0088, 0x04, 0x04, 0x14},
  {0x12, 0x15, 0x003c, 0x008e, 0x18, 0x04, 0x1A},
  {0x18, 0x15, 0x006a, 0x0009, 0x04, 0x04, 0x1A},
  {0x20, 0x08, 0x0075, 0x0090, 0x14, 0x04, 0x15},
  {0x18, 0x10, 0x006d, 0x0009, 0x03, 0x03, 0x9A},
  {0x18, 0x15, 0x0077, 0x0012, 0x04, 0x06, 0x15},
  {0x18, 0x15, 0x0046, 0x0092, 0x1f, 0x04, 0x1A},
  /*
  {0x18, 0x15, 0xfff4, 0x0094, 0x04, 0x04},
  {0x18, 0x15, 0xfff4, 0x00bf, 0x04, 0x04},
  */
  {0x18, 0x15, 0x0080, 0x0094, 0x04, 0x04, 0x1B},
  {0x18, 0x15, 0x0080, 0x00bf, 0x04, 0x04, 0X00},

  {0x18, 0x11, 0x0068, 0x00e5, 0x04, 0x04, 0x14},
  {0x18, 0x10, 0x005a, 0x00ea, 0x04, 0x04, 0x00},
  {0x12, 0x15, 0x003c, 0x00f4, 0x18, 0x04, 0x1A},
  {0x20, 0x10, 0x0008, 0x0005, 0x04, 0x04, 0x14},
  {0x18, 0x10, 0x000c, 0x0005, 0x04, 0x04, 0x14},
};

U8 ent_sprseq[ENT_NBR_SPRSEQ] = {
  0000, 0x01, 0000, 0x02, 0x05, 0x03, 0x04, 0x03,
  0x65, 0xff, 0x66, 0xff, 0x55, 0xff, 0000, 0x56,
  0xff, 0000, 0x57, 0xff, 0000, 0x58, 0x59, 0xff,
  0000, 0x5a, 0xff, 0x5b, 0000, 0xff, 0x5c, 0xff,
  0x5d, 0000, 0xff, 0000, 0x79, 0xff, 0000, 0x5e,
  0x5f, 0x60, 0x5f, 0xff, 0000, 0x61, 0x69, 0xff,
  0x64, 0x62, 0x62, 0x63, 0x63, 0xff, 0x67, 0x68,
  0xff, 0000, 0000, 0xff, 0x6a, 0x6a, 0x6b, 0x6b,
  0xff, 0x6b, 0x6b, 0x6a, 0x6a, 0xff, 0x6d, 0x6e,
  0x6f, 0x70, 0xff, 0x71, 0000, 0000, 0xff, 0x72,
  0000, 0000, 0xff, 0x73, 0x47, 0x48, 0xff, 0000,
  0x74, 0xff, 0x75, 0xff, 0000, 0x7c, 0x7c, 0x7a,
  0x7a, 0x7b, 0x7b, 0x7a, 0x7a, 0x7c, 0x7c, 0xff,
  0x78, 0xff, 0x6d, 0x6e, 0xff, 0000, 0x7a, 0x7a,
  0x7b, 0x7b, 0x7c, 0x7c, 0xff, 0x6c, 0xff, 0x2d,
  0xff, 0x10, 0000, 0000, 0x0c, 0000, 0x04, 0xfa,
  /* xtra */
  0xff, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xff, 0x00,
};

mvstep_t ent_mvstep[ENT_NBR_MVSTEP] = {
  { 0x10, 0, 0 } ,
  { 0x0c, 0, 4 } ,
  { 0xfa, 0, 0 } ,
  { 0x30, 0, -1 } ,
  { 0xff, 0, 0 } ,
  { 0x46, 8, 0 } ,
  { 0xff, 0, 0 } ,
  { 0x46, -8, 0 } ,
  { 0xff, 0, 0 } ,
  { 0xf8, 0, 0 } ,
  { 0xf8, 0, 0 } ,
  { 0xf8, 0, 0 } ,
  { 0xff, 0, 0 } ,
  { 0xfa, 0, 0 } ,
  { 0x08, 0, 4 } ,
  { 0x22, 0, 0 } ,
  { 0x08, 0, -4 } ,
  { 0xff, 0, 0 } ,
  { 0x46, 0, -8 } ,
  { 0xff, 0, 0 } ,
  { 0x09, 0, 0 } ,
  { 0x08, 0, 1 } ,
  { 0x05, 0, 0 } ,
  { 0x08, 0, 1 } ,
  { 0x05, 0, 0 } ,
  { 0x08, 0, 1 } ,
  { 0x05, 0, 0 } ,
  { 0x08, 0, 1 } ,
  { 0x05, 0, 0 } ,
  { 0x08, 0, 1 } ,
  { 0x05, 0, 0 } ,
  { 0x08, 0, 1 } ,
  { 0xfa, 0, 0 } ,
  { 0xfa, 0, 0 } ,
  { 0xfa, 0, 0 } ,
  { 0xfa, 0, 0 } ,
  { 0xfa, 0, 0 } ,
  { 0xfa, 0, 0 } ,
  { 0x06, 0, -8 } ,
  { 0xff, 0, 0 } ,
  { 0x01, 0, 0 } ,
  { 0xff, 0, 0 } ,
  { 0x23, 0, 0 } ,
  { 0x46, 0, 8 } ,
  { 0xff, 0, 0 } ,
  { 0x10, 0, 0 } ,
  { 0x0c, 0, 4 } ,
  { 0xfa, 0, 0 } ,
  { 0x04, 0, 8 } ,
  { 0x19, 0, 0 } ,
  { 0x0a, 0, -8 } ,
  { 0xff, 0, 0 } ,
  { 0x22, 2, 0 } ,
  { 0x96, 0, 0 } ,
  { 0x22, 2, 0 } ,
  { 0x19, 0, 0 } ,
  { 0x11, -8, 0 } ,
  { 0xff, 0, 0 } ,
  { 0x80, 2, 0 } ,
  { 0xff, 0, 0 } ,
  { 0x80, 1, 0 } ,
  { 0xff, 0, 0 } ,
  { 0x60, 2, 0 } ,
  { 0x08, 0, 4 } ,
  { 0x0c, 0, 8 } ,
  { 0x2c, -2, 0 } ,
  { 0x08, 0, 4 } ,
  { 0x20, -2, 0 } ,
  { 0x08, 0, 4 } ,
  { 0x0c, 0, 8 } ,
  { 0x46, -2, 0 } ,
  { 0xff, 0, 0 } ,
  { 0x20, 1, 2 } ,
  { 0x19, 0, 0 } ,
  { 0x20, -1, -2 } ,
  { 0xff, 0, 0 } ,
  { 0x08, 0, 2 } ,
  { 0x04, 0, 4 } ,
  { 0x25, 0, 0 } ,
  { 0x04, 0, -4 } ,
  { 0x08, 0, -2 } ,
  { 0x0c, 0, 0 } ,
  { 0xff, 0, 0 } ,
  { 0x18, 0, 0 } ,
  { 0xff, 0, 0 } ,
  { 0x08, -4, 0 } ,
  { 0x08, 0, 4 } ,
  { 0x10, -8, 0 } ,
  { 0x19, 0, 0 } ,
  { 0x08, 8, 0 } ,
  { 0x04, 0, -4 } ,
  { 0x96, 0, 0 } ,
  { 0x08, 8, 0 } ,
  { 0xfa, 0, 0 } ,
  { 0x04, 0, -4 } ,
  { 0x08, 4, 0 } ,
  { 0xff, 0, 0 } ,
  { 0x04, 0, 4 } ,
  { 0x04, 0, 8 } ,
  { 0x32, 0, 0 } ,
  { 0x30, 0, -1 } ,
  { 0x4b, 0, 0 } ,
  { 0xff, 0, 0 } ,
  { 0x04, -4, 0 } ,
  { 0x1c, -2, 2 } ,
  { 0xff, 0, 0 } ,
  { 0x80, 3, 0 } ,
  { 0xff, 0, 0 } ,
  { 0x20, 0, -1 } ,
  { 0x24, 0, 0 } ,
  { 0x04, 0, 4 } ,
  { 0x02, 0, 8 } ,
  { 0xff, 0, 0 } ,
  { 0x04, 0, 0 } ,
  { 0xfe, -2, 0 } ,
  { 0xff, 0, 0 } ,
  { 0x08, 0, 0 } ,
  { 0xff, 0, 0 } ,
  { 0x02, 0, -4 } ,
  { 0x02, 0, -2 } ,
  { 0x01, 0, -1 } ,
  { 0x01, 0, 1 } ,
  { 0x02, 0, 2 } ,
  { 0x04, 0, 4 } ,
  { 0xfe, 0, 8 } ,
  { 0xff, 0, 0 } ,
  { 0x0c, 4, 0 } ,
  { 0x04, 2, 0 } ,
  { 0x02, 0, 0 } ,
  { 0x04, -2, 0 } ,
  { 0x30, -4, 0 } ,
  { 0x04, -2, 0 } ,
  { 0x2e, 0, 0 } ,
  { 0x04, 2, 0 } ,
  { 0x23, 4, 0 } ,
  { 0xff, 0, 0 } ,
  { 0x10, 0, 0 } ,
  { 0x20, 1, 0 } ,
  { 0x10, 3, 0 } ,
  { 0x2c, 2, 0 } ,
  { 0x2a, -4, 0 } ,
  { 0xff, 0, 0 } ,
  { 0x80, -3, 0 } ,
  { 0xff, 0, 0 } ,
  { 0x80, -12, 0 } ,
  { 0xff, 0, 0 } ,
  { 0x46, -6, 0 } ,
  { 0xff, 0, 0 } ,
  { 0x06, 0, 0 } ,
  { 0x01, 64, -64 } ,
  { 0x06, 0, 0 } ,
  { 0x01, -80, -32 } ,
  { 0x06, 0, 0 } ,
  { 0x01, -80, 8 } ,
  { 0x06, 0, 0 } ,
  { 0x01, 32, 32 } ,
  { 0x06, 0, 0 } ,
  { 0x01, 0, 88 } ,
  { 0x06, 0, 0 } ,
  { 0x01, 64, -96 } ,
  { 0x06, 0, 0 } ,
  { 0x46, 6, 3 } ,
  { 0x06, 0, 0 } ,
  { 0xff, 0, 0 } ,
  { 0x03, -8, 0 } ,
  { 0x01, -10, -2 } ,
  { 0x01, -6, -2 } ,
  { 0x01, -6, -5 } ,
  { 0x01, -5, -6 } ,
  { 0x01, -2, -6 } ,
  { 0x01, -2, -10 } ,
  { 0x01, 2, -10 } ,
  { 0x01, 2, -6 } ,
  { 0x01, 5, -6 } ,
  { 0x01, 6, -5 } ,
  { 0x01, 6, -2 } ,
  { 0x01, 10, -2 } ,
  { 0x01, 10, 2 } ,
  { 0x01, 6, 2 } ,
  { 0x01, 6, 5 } ,
  { 0x01, 5, 6 } ,
  { 0x01, 2, 6 } ,
  { 0x01, 2, 10 } ,
  { 0x01, -2, 10 } ,
  { 0x01, -2, 6 } ,
  { 0x01, -5, 6 } ,
  { 0x01, -6, 5 } ,
  { 0x01, -6, 2 } ,
  { 0x01, -10, 2 } ,
  { 0x46, -8, 0 } ,
  { 0xff, 0, 0 } ,
  { 0x06, 0, 0 } ,
  { 0x01, 0, -128 } ,
  { 0x06, 0, 0 } ,
  { 0x01, -64, 64 } ,
  { 0x06, 0, 0 } ,
  { 0x01, -128, -32 } ,
  { 0x06, 0, 0 } ,
  { 0x01, -32, -32 } ,
  { 0x06, 0, 0 } ,
  { 0x01, 112, 64 } ,
  { 0x06, 0, 0 } ,
  { 0x03, 8, 0 } ,
  { 0x01, 10, -2 } ,
  { 0x01, 6, -2 } ,
  { 0x01, 6, -5 } ,
  { 0x01, 5, -6 } ,
  { 0x01, 2, -6 } ,
  { 0x01, 2, -10 } ,
  { 0x01, -2, -10 } ,
  { 0x01, -2, -6 } ,
  { 0x01, -5, -6 } ,
  { 0x01, -6, -5 } ,
  { 0x01, -6, -2 } ,
  { 0x01, -10, -2 } ,
  { 0x01, -10, 2 } ,
  { 0x01, -6, 2 } ,
  { 0x01, -6, 5 } ,
  { 0x01, -5, 6 } ,
  { 0x01, -2, 6 } ,
  { 0x01, -2, 10 } ,
  { 0x01, 2, 10 } ,
  { 0x01, 2, 6 } ,
  { 0x01, 5, 6 } ,
  { 0x01, 6, 5 } ,
  { 0x01, 6, 2 } ,
  { 0x01, 10, 2 } ,
  { 0x46, 8, 0 } ,
  { 0xff, 0, 0 } ,
  { 0x40, 2, 0 } ,
  { 0x20, -2, 0 } ,
  { 0x36, 2, 0 } ,
  { 0x56, -2, 0 } ,
  { 0xff, 0, 0 } ,
  { 0x18, 0, 0 } ,
  { 0x04, -2, 0 } ,
  { 0x20, -4, 0 } ,
  { 0x04, -2, 0 } ,
  { 0x28, 0, 0 } ,
  { 0x04, 2, 0 } ,
  { 0x20, 4, 0 } ,
  { 0x04, 2, 0 } ,
  { 0x02, 0, 0 } ,
  { 0xff, 0, 0 } ,
  { 0x02, -1, 0 } ,
  { 0x34, -3, 0 } ,
  { 0x02, -1, 0 } ,
  { 0x02, 0, 0 } ,
  { 0x02, 1, 0 } ,
  { 0x34, 3, 0 } ,
  { 0x02, 1, 0 } ,
  { 0x02, 0, 0 } ,
  { 0x02, -1, 0 } ,
  { 0x34, -3, 0 } ,
  { 0x02, -1, 0 } ,
  { 0x02, 0, 0 } ,
  { 0x02, 1, 0 } ,
  { 0x34, 3, 0 } ,
  { 0x02, 1, 0 } ,
  { 0x02, 0, 0 } ,
  { 0xff, 0, 0 } ,
  { 0000, 0, -128 } ,
  { 0x42, -118, 118 } ,
  { 0x35, 121, 0 } ,
  { 0000, -8, 66 } ,
  { 0x97, 118, 78 } ,
  { 0x79, 0, 0 } ,
  { 0xd0, 67, -92 } ,
  { 0x76, -118, 121 } ,
  { 0000, 0, 24 } ,
  { 0x44, -79, 118 } ,
  { 0xad, 121, 0 } ,
  { 0000, 32, 69 } ,
  { 0xbe, 118, 12 } ,
  { 0x7a, 0, 0 } ,
  { 0xc8, 69, -53 } ,
  { 0x76, 62, 122 } ,
  { 0000, 0, 24 } ,
  { 0x46, -40, 118 } ,
  { 0x52, 122, 0 } ,
  { 0000, 40, 71 } ,
  { 0xe5, 118, -99 } ,
  { 0x7a, 0, 0 } ,
  { 0x38, 72, -14 } ,
  { 0x76, -24, 122 } ,
  { 0000, 0, -128 } ,
  { 0x4a, -1, 118 } ,
  { 0x2e, 123, 0 } ,
  { 0000, -128, 75 } ,
  { 0x0c, 119, -110 } ,
  { 0x7b, 0, 0 } ,
  { 0x48, 76, 25 } ,
  { 0x77, -45, 123 } ,
  { 0000, 0, -64 } ,
  { 0x4c, 38, 119 } ,
  { 0x0a, 124, 0 } ,
  { 0000, 40, 77 } ,
  { 0x33, 119, 60 } ,
  { 0x7c, 0, 0 } ,
  { 0x98, 77, 64 } ,
  { 0x77, 105, 124 } ,
  { 0000, 0, 104 } ,
  { 0x4e, 77, 119 } ,
  { 0xaa, 124, 0 } ,
  { 0000, 104, 79 } ,
  { 0x5a, 119, -6 } ,
  { 0x7c, 0, 0 } ,
  { 0x78, 80, 103 } ,
  { 0x77, 74, 125 } ,
  { 0000, 0, -8 } ,
  { 0x50, 116, 119 } ,
  { 0x6d, 125, 0 } ,
  { 0000, -40, 81 } ,
  { 0x81, 119, -82 } ,
  { 0x7d, 1, 0 } ,
  { 0xe0, 82, -114 } ,
  { 0x77, -17, 125 } ,
  { 0x01, 0, 112 } ,
  { 0x53, -101, 119 } ,
  { 0x17, 126, 1 } ,
  { 0000, -64, 83 } ,
  { 0xb4, 119, 68 } ,
  { 0x7e, 1, 0 } ,
  { 0x10, 84, -51 } ,
  { 0x77, 103, 126 } ,
  { 0x01, 0, -64 } ,
  { 0x54, -38, 119 } ,
  { 0xa8, 126, 1 } ,
  { 0000, 64, 85 } ,
  { 0xe7, 119, -33 } ,
  { 0x7e, 1, 0 } ,
  { 0x90, 85, -6 } ,
  { 0x77, 2, 127 } ,
  { 0x01, 0, 64 } ,
  { 0x56, 13, 120 } ,
  { 0x2f, 127, 1 } ,
  { 0000, -112, 86 } ,
  { 0x26, 120, 77 } ,
  { 0x7f, 1, 0 } ,
  { 0x40, 87, 63 } ,
  { 0x78, -114, 127 } ,
  { 0x01, 0, -112 } ,
  { 0x57, 82, 120 } ,
  { 0xac, 127, 1 } ,
  { 0000, 16, 88 } ,
  { 0x65, 120, -19 } ,
  { 0x7f, 1, 0 } ,
  { 0x60, 88, 114 } ,
  { 0x78, 16, -128 } ,
  { 0x01, 0, 16 } ,
  { 0x59, 127, 120 } ,
  { 0x47, -128, 1 } ,
  { 0000, -64, 89 } ,
  { 0x8c, 120, -125 } ,
  { 0x80, 1, 0 } ,
  { 0xd0, 90, -103 } ,
  { 0x78, -50, -128 } ,
  { 0x01, 0, -128 } ,
  { 0x5b, -90, 120 } ,
  { 0xf6, -128, 1 } ,
  { 0000, 48, 92 } ,
  { 0xb3, 120, 30 } ,
  { 0x81, 1, 0 } ,
  { 0x0a, 93, -64 } ,
  { 0x78, 85, -127 } ,
  { 0x01, 0, 106 } ,
  { 0x5d, -51, 120 } ,
  { 0x82, -127, 1 } ,
  { 0000, 74, 94 } ,
  { 0xda, 120, -41 } ,
  { 0x81, 1, 0 } ,
  { 0x9a, 94, -25 } ,
  { 0x78, -6, -127 } ,
  { 0x01, 0, 122 } ,
  { 0x5f, -12, 120 } ,
  { 0x54, -126, 1 } ,
  { 0000, -54, 95 } ,
  { 0x01, 121, -127 } ,
  { 0x82, 1, 0 } ,
  { 0xaa, 96, 14 } ,
  { 0x79, -52, -126 } ,
  { 0x01, 0, -6 } ,
  { 0x60, 27, 121 } ,
  { 0xea, -126, 1 } ,
  { 0000, -38, 97 } ,
  { 0x28, 121, 63 } ,
  { 0x83, 0, 24 } ,
  { 0xff, 0, 0 } ,
  { 0000, 1, 56 } ,
  { 0x1a, 117, 24 } ,
  { 0000, -1, 0 } ,
  { 0x18, 18, 117 } ,
  { 0x38, 0, 1 } ,
  { 0x68, 34, 117 } ,
  { 0x20, 0, -1 } ,
  { 0000, 32, 26 } ,
  { 0x75, 104, 0 } ,
  { 0x01, 24, 42 } ,
  { 0x75, 24, 0 } ,
  { 0xff, 0, 24 } ,
  { 0x22, 117, 24 } ,
  { 0000, 1, -128 } ,
  { 0x32, 117, 24 } ,
  { 0000, -1, 0 } ,
  { 0x18, 42, 117 } ,
  { 0x80, 0, 1 } ,
  { 0x50, 58, 117 } ,
  { 0x18, 0, -1 } ,
  { 0000, 24, 50 } ,
  { 0x75, 80, 0 } ,
  { 0x01, 32, 66 } ,
  { 0x75, -128, 0 } ,
  { 0xff, 1, 24 } ,
  { 0x4a, 117, -128 } ,
  { 0000, 0, -128 } ,
  { 0x3a, 117, 32 } ,
  { 0000, -1, 1 } ,
  { 0x18, 82, 117 } ,
  { 0x18, 0, 0 } ,
  { 0x80, 66, 117 } ,
  { 0x18, 0, -1 } ,
  { 0000, 24, 74 } ,
  { 0x75, 24, 0 } ,
  { 0x01, -128, -1 } ,
  { 0000, 0, 0 } ,
  { 0xff, 1, 24 } ,
  { 0x62, 117, 96 } ,
  { 0000, 0, 120 } ,
  { 0xff, 0, 0 } ,
  { 0000, -1, 1 } ,
  { 0x18, 106, 117 } ,
  { 0x30, 0, 0 } ,
  { 0x60, 90, 117 } ,
  { 0x18, 0, -1 } ,
  { 0x01, 24, 114 } ,
  { 0x75, 48, 0 } ,
  { 0000, 48, 98 } ,
  { 0x75, 24, 0 } ,
  { 0xff, 1, 48 } ,
  { 0x7a, 117, 24 } ,
  { 0000, 0, 48 } ,
  { 0x6a, 117, 24 } ,
  { 0000, -1, 0 } ,
  { 0x18, 114, 117 } ,
  { 0x30, 0, 1 } ,
  { 0x30, -126, 117 } ,
  { 0x18, 0, -1 } ,
  { 0000, 24, 122 } ,
  { 0x75, 48, 0 } ,
  { 0x01, 96, -118 } ,
  { 0x75, 24, 0 } ,
  { 0xff, 0, 24 } ,
  { 0x82, 117, 96 } ,
  { 0000, 1, 120 } ,
  { 0x92, 117, -128 } ,
  { 0000, -1, 1 } ,
  { 0x18, -102, 117 } ,
  { 0x18, 0, 0 } ,
  { 0x80, -118, 117 } ,
  { 0x78, 0, -1 } ,
  { 0000, 24, -110 } ,
  { 0x75, 24, 0 } ,
  { 0x01, 56, -86 } ,
  { 0x75, 104, 0 } ,
  { 0xff, 0, 24 } ,
  { 0x9a, 117, 56 } ,
  { 0000, 1, 104 } ,
  { 0xaa, 117, 104 } ,
  { 0000, -1, 1 } ,
  { 0x18, -1, 0 } ,
  { 0000, 0, 0 } ,
  { 0x68, -94, 117 } ,
  { 0x68, 0, -1 } ,
  { 0000, 32, -1 } ,
  { 0000, 0, 0 } ,
  { 0x01, 64, -70 } ,
  { 0x75, 24, 0 } ,
  { 0xff, 0, 24 } ,
  { 0xb2, 117, 64 } ,
  { 0000, 1, 24 } ,
  { 0xc2, 117, 24 } ,
  { 0000, 0, 32 } ,
  { 0xc2, 117, 24 } ,
  { 0000, 1, 32 } ,
  { 0xc2, 117, 32 } ,
  { 0000, -1, 1 } ,
  { 0x18, -70, 117 } ,
  { 0x20, 0, 0 } ,
  { 0x18, -70, 117 } ,
  { 0x18, 0, 1 } ,
  { 0x20, -54, 117 } ,
  { 0x20, 0, 0 } ,
  { 0x20, -70, 117 } ,
  { 0x20, 0, -1 } ,
  { 0000, 32, -62 } ,
  { 0x75, 32, 0 } ,
  { 0x01, 80, -46 } ,
  { 0x75, 24, 0 } ,
  { 0xff, 0, 24 } ,
  { 0xca, 117, 80 } ,
  { 0000, 1, 56 } ,
  { 0xda, 117, 24 } ,
  { 0000, -1, 0 } ,
  { 0x18, -46, 117 } ,
  { 0x38, 0, 1 } ,
  { 0x18, -46, 117 } ,
  { 0x20, 0, 1 } ,
  { 0x20, -30, 117 } ,
  { 0x18, 0, -1 } ,
  { 0000, 24, -38 } ,
  { 0x75, 32, 0 } ,
  { 0x01, 72, -22 } ,
  { 0x75, 32, 0 } ,
  { 0x01, 80, -38 } ,
  { 0x75, 32, 0 } ,
  { 0xff, 1, 24 } ,
  { 0xea, 117, 24 } ,
  { 0000, 0, 24 } ,
  { 0xea, 117, 24 } ,
  { 0000, 0, 32 } ,
  { 0xe2, 117, 72 } ,
  { 0000, 1, 32 } ,
  { 0xf2, 117, 48 } ,
  { 0000, -1, 0 } ,
  { 0x18, -30, 117 } ,
  { 0x18, 0, 0 } ,
  { 0x30, -22, 117 } ,
  { 0x20, 0, 1 } ,
  { 0x48, -6, 117 } ,
  { 0x20, 0, 1 } ,
  { 0x50, -38, 117 } ,
  { 0x20, 0, -1 } ,
  { 0x01, 24, -6 } ,
  { 0x75, 24, 0 } ,
  { 0000, 32, -14 } ,
  { 0x75, 72, 0 } ,
  { 0x01, 32, 2 } ,
  { 0x76, 24, 0 } ,
  { 0xff, 0, 24 } ,
  { 0xfa, 117, 32 } ,
  { 0000, 1, 24 } ,
  { 0xca, 117, 24 } ,
  { 0000, 1, 56 } ,
  { 0x0a, 118, 32 } ,
  { 0000, -1, 0 } ,
  { 0x20, 2, 118 } ,
  { 0x38, 0, 1 } ,
  { 0x20, 18, 118 } ,
  { 0x50, 0, -1 } ,
  { 0x01, 24, 26 } ,
  { 0x76, 80, 0 } ,
  { 0000, 80, 10 } ,
  { 0x76, 32, 0 } ,
  { 0xff, 1, 24 } ,
  { 0x22, 118, 24 } ,
  { 0000, 0, 80 } ,
  { 0x12, 118, 24 } ,
  { 0000, -1, 0 } ,
  { 0x18, 26, 118 } ,
  { 0x18, 0, 1 } ,
  { 0x80, 42, 118 } ,
  { 0x50, 0, -1 } ,
  { 0x01, 24, 50 } ,
  { 0x76, 80, 0 } ,
  { 0000, 80, 34 } ,
  { 0x76, -128, 0 } ,
  { 0xff, 1, 24 } ,
  { 0x3a, 118, 24 } ,
  { 0000, 0, 80 } ,
  { 0x2a, 118, 24 } ,
  { 0000, -1, 0 } ,
  { 0x18, 50, 118 } ,
  { 0x18, 0, 1 } ,
  { 0x50, -1, 0 } ,
  { 0000, 0, -1 } ,
  { 0000, 32, -1 } ,
  { 0000, 0, 0 } ,
  { 0x01, 40, 74 } ,
  { 0x76, 104, 0 } ,
  { 0xff, 1, 24 } ,
  { 0x52, 118, 24 } ,
  { 0000, 0, 104 } ,
  { 0x42, 118, 40 } ,
  { 0000, -1, 0 } ,
  { 0x18, 74, 118 } ,
  { 0x18, 0, 1 } ,
  { 0x20, 90, 118 } ,
  { 0x18, 0, -1 } ,
  { 0000, 24, 82 } ,
  { 0x76, 32, 0 } ,
  { 0x01, 104, 98 } ,
  { 0x76, 24, 0 } ,
  { 0xff, 0, 24 } ,
  { 0x5a, 118, 104 } ,
  { 0000, 1, 24 } ,
  { 0x6a, 118, 104 } ,
  { 0000, -1, 1 } ,
  { 0x18, 114, 118 } ,
  { 0x20, 0, 0 } ,
  { 0x68, 98, 118 } ,
  { 0x18, 0, -1 } ,
  { 0x01, 24, 122 } ,
  { 0x76, 24, 0 } ,
  { 0000, 32, 106 } ,
  { 0x76, 24, 0 } ,
  { 0xff, 0, 24 } ,
  { 0x72, 118, 24 } ,
  { 0000, 1, 96 } ,
  { 0x82, 118, 32 } ,
  { 0000, -1, 0 } ,
  { 0x20, 122, 118 } ,
  { 0x60, 0, 1 } ,
  { 0x24, -1, 0 } ,
  { 0000, 0, -1 } ,
  { 0x18, 22, 0 } ,
  { 0x08, 8, 24 } ,
  { 0x2a, -120, 1 } ,
  { 0x28, 56, 4 } ,
  { 0xf0, 21, 41 } ,
  { 0x38, 23, 1 } ,
  { 0xe0, -32, -1 } ,
  { 0000, 0, 0 } ,
  { 0000, 24, 18 } ,
  { 0000, -59, 0 } ,
  { 0x18, 25, -120 } ,
  { 0x95, -61, 32 } ,
  { 0x04, 0, 101 } ,
  { 0x71, 40, 4 } ,
  { 0xf0, -123, -126 } ,
  { 0x30, 4, 0 } ,
  { 0x45, 96, 56 } ,
  { 0x19, -120, 17 } ,
  { 0x63, 72, 18 } ,
  { 0000, 77, 0 } ,
  { 0x60, 27, -120 } ,
  { 0xc2, -62, 104 } ,
  { 0x04, -16, -75 } ,
  { 0x61, 104, 25 } ,
  { 0x88, 17, 34 } ,
  { 0x68, 18, 0 } ,
  { 0x55, 0, -1 } ,
  { 0000, 0, 0 } ,
  { 0000, 24, 5 } ,
  { 0000, 73, 3 } ,
  { 0x18, 5, -16 } ,
  { 0xc1, 1, 24 } ,
  { 0x06, 0, -119 } ,
  { 0000, 32, 22 } ,
  { 0x01, 36, 36 } ,
  { 0x20, 23, 1 } ,
  { 0xc4, -60, 32 } ,
  { 0x12, 0, 117 } ,
  { 0000, -1, 0 } ,
  { 0000, 0, 0 } ,
  { 0x18, 22, 0 } ,
  { 0000, 0, 24 } ,
  { 0x04, 0, -127 } ,
  { 0x40, 24, 17 } ,
  { 0000, -103, 0 } ,
  { 0x38, 47, -127 } ,
  { 0x2d, -115, 56 } ,
  { 0x1b, -120, 37 } ,
  { 0x25, 64, 45 } ,
  { 0x8c, 114, 116 } ,
  { 0x40, 45, -114 } ,
  { 0x8a, 116, 72 } ,
  { 0x2b, -4, 105 } ,
  { 0x69, 80, 4 } ,
  { 0000, -127, 40 } ,
  { 0x50, 25, -120 } ,
  { 0x11, 64, 96 } ,
  { 0x12, 0, 85 } ,
  { 0000, 104, 44 } ,
  { 0x1f, -122, -108 } ,
  { 0x78, 46, 21 } ,
  { 0x7a, 106, 120 } ,
  { 0x2e, 21, -118 } ,
  { 0x7a, -128, 23 } ,
  { 0x01, -32, -32 } ,
  { 0x80, 18, 0 } ,
  { 0x35, 0, -128 } ,
  { 0x04, -16, 53 } ,
  { 0x61, -128, 4 } ,
  { 0000, -123, 48 } ,
  { 0xff, 0, 0 } ,
  { 0000, 0, 24 } ,
  { 0x12, 0, -82 } ,
  { 0000, 48, 25 } ,
  { 0x88, 21, -124 } ,
  { 0x38, 49, -116 } ,
  { 0x80, -92, 64 } ,
  { 0x10, 0, 13 } ,
  { 0000, 64, 4 } ,
  { 0xf0, 85, 96 } ,
  { 0x48, 25, 72 } ,
  { 0x15, -60, 72 } ,
  { 0x04, 0, -123 } ,
  { 0x40, 72, 4 } ,
  { 0000, 117, 56 } ,
  { 0x50, 46, 21 } ,
  { 0xc6, -74, -1 } ,
  { 0000, 0, 0 } ,
  { 0000, 24, 37 } ,
  { 0x84, 99, -124 } ,
  { 0x18, 37, -124 } ,
  { 0xa3, 64, 32 } ,
  { 0x30, -114, -30 } ,
  { 0x44, -1, 0 } ,
  { 0000, 0, 0 } ,
  { 0x20, 16, 0 } ,
  { 0xa1, 0, 40 } ,
  { 0x48, 31, 98 } ,
  { 0x80, 48, 4 } ,
  { 0x80, 69, -128 } ,
  { 0x30, 17, 0 } ,
  { 0x65, 0, 56 } ,
  { 0x1a, -120, -27 } ,
  { 0x84, 64, 5 } ,
  { 0000, 101, 3 } ,
  { 0x50, 25, -120 } ,
  { 0x11, 32, 80 } ,
  { 0x05, -16, 33 } ,
  { 0x07, 88, 5 } ,
  { 0000, -127, 5 } ,
  { 0x68, 4, 0 } ,
  { 0xa5, 64, 112 } ,
  { 0x12, 0, -51 } ,
  { 0000, 112, 25 } ,
  { 0x88, 21, 100 } ,
  { 0x78, 4, -16 } ,
  { 0x45, 96, -128 } ,
  { 0x04, -16, 69 } ,
  { 0x80, -1, 0 } ,
  { 0000, 0, 0 } ,
  { 0x18, 44, 31 } ,
  { 0xe2, -64, 24 } ,
  { 0x19, -120, 21 } ,
  { 0x24, 40, 17 } ,
  { 0000, -59, 0 } ,
  { 0x28, 26, -120 } ,
  { 0xd1, 32, 56 } ,
  { 0x04, 0, 33 } ,
  { 0x70, 64, 4 } ,
  { 0xf0, -127, 96 } ,
  { 0x40, 27, -120 } ,
  { 0x25, 36, 80 } ,
  { 0x12, 0, 33 } ,
  { 0000, 80, 25 } ,
  { 0x88, 17, 96 } ,
  { 0x60, 26, -120 } ,
  { 0xe1, -96, 96 } ,
  { 0x19, -120, 21 } ,
  { 0xc4, 104, 4 } ,
  { 0000, 33, 96 } ,
  { 0x70, 25, -120 } ,
  { 0x15, -124, 120 } ,
  { 0x05, 0, 69 } ,
  { 0000, -1, 0 } ,
  { 0000, 0, 0 } ,
  { 0x18, 39, -120 } ,
  { 0x62, 96, 24 } ,
  { 0x1b, -120, 37 } ,
  { 0x24, 24, 27 } ,
  { 0x88, -123, -124 } ,
  { 0x30, 26, -120 } ,
  { 0xe1, 64, 48 } ,
  { 0x19, -120, 17 } ,
  { 0x40, 56, 4 } ,
  { 0xf0, 85, 96 } ,
  { 0x58, 27, -120 } ,
  { 0x81, -128, 88 } ,
  { 0x04, -16, -123 } ,
  { 0x40, 104, 39 } ,
  { 0x88, 98, 96 } ,
  { 0x68, 18, 0 } ,
  { 0x25, 0, 120 } ,
  { 0x1a, -120, -31 } ,
  { 0000, -128, 44 } ,
  { 0x1f, -124, -128 } ,
  { 0x80, 44, 29 } ,
  { 0xe2, -64, -1 } ,
  { 0000, 0, 0 } ,
  { 0000, 24, 23 } ,
  { 0x01, -32, -32 } ,
};

/* eof */
