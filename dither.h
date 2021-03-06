//
// Dither matrices for LPrint, a Label Printer Application
//
// Copyright © 2020 by Michael R Sweet.
//
// Licensed under Apache License v2.0.  See the file "LICENSE" for more
// information.
//

#ifndef _DITHER_H_
#  define _DITHER_H_

//
// Include necessary headers...
//

#  include "driver.h"


//
// Dither matrices...
//

static const lprint_dither_t ditherc[16] =
{					// Clustered-Dot Dither Matrix
  {  96,  40,  48, 104, 140, 188, 196, 148,  97,  41,  49, 105, 141, 189, 197, 149 },
  {  32,   0,   8,  56, 180, 236, 244, 204,  33,   1,   9,  57, 181, 237, 245, 205 },
  {  88,  24,  16,  64, 172, 228, 252, 212,  89,  25,  17,  65, 173, 229, 253, 213 },
  { 120,  80,  72, 112, 132, 164, 220, 156, 121,  81,  73, 113, 133, 165, 221, 157 },
  { 136, 184, 192, 144, 100,  44,  52, 108, 137, 185, 193, 145, 101,  45,  53, 109 },
  { 176, 232, 240, 200,  36,   4,  12,  60, 177, 233, 241, 201,  37,   5,  13,  61 },
  { 168, 224, 248, 208,  92,  28,  20,  68, 169, 225, 249, 209,  93,  29,  21,  69 },
  { 128, 160, 216, 152, 124,  84,  76, 116, 129, 161, 217, 153, 125,  85,  77, 117 },
  {  98,  42,  50, 106, 142, 190, 198, 150,  99,  43,  51, 107, 143, 191, 199, 151 },
  {  34,   2,  10,  58, 182, 238, 246, 206,  35,   3,  11,  59, 183, 239, 247, 207 },
  {  90,  26,  18,  66, 174, 230, 254, 214,  91,  27,  19,  67, 175, 231, 254, 215 },
  { 122,  82,  74, 114, 134, 166, 222, 158, 123,  83,  75, 115, 135, 167, 223, 159 },
  { 138, 186, 194, 146, 102,  46,  54, 110, 139, 187, 195, 147, 103,  47,  55, 111 },
  { 178, 234, 242, 202,  38,   6,  14,  62, 179, 235, 243, 203,  39,   7,  15,  63 },
  { 170, 226, 250, 210,  94,  30,  22,  70, 171, 227, 251, 211,  95,  31,  23,  71 },
  { 130, 162, 218, 154, 126,  86,  78, 118, 131, 163, 219, 155, 127,  87,  79, 119 }
};

static const lprint_dither_t dithert[16] =
{					// Threshold Dither Matrix
  { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 },
  { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 },
  { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 },
  { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 },
  { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 },
  { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 },
  { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 },
  { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 },
  { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 },
  { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 },
  { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 },
  { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 },
  { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 },
  { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 },
  { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 },
  { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 }
};

#endif // !_DITHER_H_
