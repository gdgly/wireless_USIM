/* -------------------------------------------------------------------------- 
Copyright (c) 2018, Jiacheng Wang
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
--------------------------------------------------------------------------- */
#ifndef FILE_DATA_USIM_H__
#define FILE_DATA_USIM_H__

#include "stdint.h"
#include "define_config.h"

/* file control parameters for each file */
uint8_t M_FILE_CONTROL_PARAMETER_3F00[0x2c] =
        {0xff,  0x62,  0x29,  0x82,  0x2,  0x78,  0x21,  0x83,  0x2,  0x3f,  0x0,  0xa5,
         0x9,  0x80,  0x1,  0x71,  0x83,  0x4,  0x0,  0x0,  0xb,  0xc4,  0x8a,  0x1,  0x5,
         0x8b,  0x3,  0x2f,  0x6,  0x9,  0xc6,  0xc,  0x90,  0x1,  0x60,  0x83,  0x1,  0x1,
         0x83,  0x1,  0xa,  0x83,  0x1,  0xd};
uint8_t M_FILE_CONTROL_PARAMETER_2FE2[0x26] =
        {0xff,  0x62,  0x23,  0x82,  0x2,  0x41,  0x21,  0x83,  0x2,  0x2f,  0xe2,  0xa5,
         0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,  0x5,  0x8b,  0x3,  0x2f,
         0x6,  0x2,  0x80,  0x2,  0x0,  0xa,  0x81,  0x2,  0x0,  0x17,  0x88,  0x1,  0x10};
uint8_t M_FILE_CONTROL_PARAMETER_2F05[0x26] =
        {0xff,  0x62,  0x23,  0x82,  0x2,  0x41,  0x21,  0x83,  0x2,  0x2f,  0x5,  0xa5,
         0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,  0x5,  0x8b,  0x3,  0x2f,
         0x6,  0x1,  0x80,  0x2,  0x0,  0x4,  0x81,  0x2,  0x0,  0x11,  0x88,  0x1,  0x28};
uint8_t M_FILE_CONTROL_PARAMETER_2F00[0x29] =
        {0xff,  0x62,  0x26,  0x82,  0x5,  0x42,  0x21,  0x0,  0x20,  0x1,   0x83,  0x2,
         0x2f,  0x0,  0xa5,  0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,  0x5,
         0x8b,  0x3, 0x2f,  0x6,  0x2,  0x80,  0x2,  0x0,  0x20,  0x81,  0x2,  0x0,  0x2d,
         0x88,  0x1,  0xf0};
uint8_t M_FILE_CONTROL_PARAMETER_ADF[0x3a] =
        {0x39,  0x62,  0x37,  0x82,  0x2,  0x78,  0x21,  0x84,  0x10,  0xa0,  0x0,  0x0,
         0x0,  0x87,  0x10,  0x2,  0xff,  0x86,  0xff,  0xff,  0x89,  0xff,  0xff,  0xff,
         0xff,  0xa5,   0xc,  0x80,  0x1,  0x71,  0x82,  0x1,  0xff,  0x83,  0x4,  0x0,
         0x0,  0xb,  0xc4,  0x8a,  0x1,  0x5,  0x8b,  0x3,  0x2f,  0x6,  0x9,  0xc6,  0x9,
         0x90,  0x1,  0x40,  0x83,  0x1,  0x1,  0x83,  0x1,  0x81};
uint8_t M_FILE_CONTROL_PARAMETER_7FFF_6F38[0x26] =
        {0xff,  0x62,  0x23,  0x82,  0x2,  0x41,  0x21,  0x83,  0x2,  0x6f,   0x38,  0xa5,
         0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,  0x5,  0x8b,  0x3,  0x6f,
         0x6,  0x3,  0x80,  0x2,  0x0,  0xa,  0x81,  0x2,  0x0,  0x17,  0x88,  0x1,  0x20};
uint8_t M_FILE_CONTROL_PARAMETER_7FFF_6F07[0x26] =
        {0xff,  0x62,  0x23,  0x82,  0x2,  0x41,  0x21,  0x83,  0x2,  0x6f,   0x7,  0xa5,
         0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,  0x5,  0x8b,  0x3,  0x6f,
				 0x6,  0x3,   0x80,  0x2,  0x0,  0x9,  0x81,  0x2,  0x0,  0x16,  0x88,  0x1,  0x38};
uint8_t M_FILE_CONTROL_PARAMETER_7FFF_6F08[0x26] =
        {0xff,  0x62,  0x23,  0x82,  0x2,  0x41,  0x21,  0x83,  0x2,  0x6f,   0x8,  0xa5,
					0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,  0x5,  0x8b,  0x3,  0x6f,
					0x6,  0x4,   0x80,  0x2,  0x0,  0x21,  0x81,  0x2,  0x0,  0x2e,  0x88,  0x1,  0x40};
uint8_t M_FILE_CONTROL_PARAMETER_7FFF_6F09[0x26] =
        {0xff,  0x62,  0x23,  0x82,  0x2,  0x41,  0x21,  0x83,  0x2,  0x6f,   0x9,  0xa5,
					0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,  0x5,  0x8b,  0x3,  0x6f,
					0x6,  0x4,   0x80,  0x2,  0x0,  0x21,  0x81,  0x2,  0x0,  0x2e,  0x88,  0x1,  0x48};
uint8_t M_FILE_CONTROL_PARAMETER_7FFF_6F31[0x26] =
        {0xff,  0x62,  0x23,  0x82,  0x2,  0x41,  0x21,  0x83,  0x2,  0x6f,   0x31,  0xa5,
					0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,  0x5,  0x8b,  0x3,  0x6f,
					0x6,  0x3,  0x80,  0x2,  0x0,  0x1,  0x81,  0x2,  0x0,  0xe,  0x88,  0x1,  0x90};
uint8_t M_FILE_CONTROL_PARAMETER_7FFF_6F78[0x26] =
        {0xff,  0x62,  0x23,  0x82,  0x2,  0x41,  0x21,  0x83,  0x2,  0x6f,   0x78,  0xa5,
					0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,  0x5,  0x8b,  0x3,  0x6f,
					0x6,  0x3,  0x80,  0x2,  0x0,  0x2,  0x81,  0x2,  0x0,  0xf,  0x88,  0x1,  0x30};
uint8_t M_FILE_CONTROL_PARAMETER_7FFF_6F7E[0x26] =
        {0xff,  0x62,  0x23,  0x82,  0x2,  0x41,  0x21,  0x83,  0x2,  0x6f,   0x7e,  0xa5,
					0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,  0x5,  0x8b,  0x3,  0x6f,
					0x6,  0x4,  0x80,  0x2,  0x0,  0xb,  0x81,  0x2,  0x0,  0x18,  0x88,  0x1,  0x58};
uint8_t M_FILE_CONTROL_PARAMETER_7FFF_6F73[0x26] =
        {0xff,  0x62,  0x23,  0x82,  0x2,  0x41,  0x21,  0x83,  0x2,  0x6f,   0x73,  0xa5,
					0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,  0x5,  0x8b,  0x3,  0x6f,
					0x6,  0x4,  0x80,  0x2,  0x0,  0xe,  0x81,  0x2,  0x0,  0x1b,  0x88,  0x1,  0x60};
uint8_t M_FILE_CONTROL_PARAMETER_7FFF_6F7B[0x26] =
        {0xff,  0x62,  0x23,  0x82,  0x2,  0x41,  0x21,  0x83,  0x2,  0x6f,  0x7b,  0xa5,
					0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,  0x5,  0x8b,  0x3,  0x6f,
					0x6,  0x4,  0x80,  0x2,  0x0,  0xc,  0x81,  0x2,  0x0,  0x25,  0x88,  0x1,  0x68};
uint8_t M_FILE_CONTROL_PARAMETER_7FFF_6F5B[0x26] =
        {0xff,  0x62,  0x23,  0x82,  0x2,  0x41,  0x21,  0x83,  0x2,  0x6f,  0x5b,  0xa5,
					0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,  0x5,  0x8b,  0x3,  0x6f,
					0x6,  0x4,  0x80,  0x2,  0x0,  0x6,  0x81,  0x2,  0x0,  0x13,  0x88,  0x1,  0x78};
uint8_t M_FILE_CONTROL_PARAMETER_7FFF_6F5C[0x26] =
        {0xff,  0x62,  0x23,  0x82,  0x2,  0x41,  0x21,  0x83,  0x2,  0x6f,  0x5c,  0xa5,
					0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,  0x5,  0x8b,  0x3,  0x6f,
					0x6,  0x3,  0x80,  0x2,  0x0,  0x3,  0x81,  0x2,  0x0,  0x10,  0x88,  0x1,  0x80};
uint8_t M_FILE_CONTROL_PARAMETER_7FFF_6FC4[0x25] =
        {0xff,  0x62,  0x22,  0x82,  0x2,  0x41,  0x21,  0x83,  0x2,  0x6f,  0xc4,  0xa5,
					0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,  0x5,  0x8b,  0x3,  0x6f,
					0x6,  0x4,  0x80,  0x2,  0x0,  0x2e,  0x81,  0x2,  0x0,  0x3f,  0x88,  0x0};
uint8_t M_FILE_CONTROL_PARAMETER_7FFF_6FAD[0x26] =
        {0xff,  0x62,  0x23,  0x82,  0x2,  0x41,  0x21,  0x83,  0x2,  0x6f,  0xad,  0xa5,
					0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,  0x5,  0x8b,  0x3,  0x6f,
					0x6,  0x1,  0x80,  0x2,  0x0,  0x4,  0x81,  0x2,  0x0,  0x11,  0x88,  0x1,  0x18};
uint8_t M_FILE_CONTROL_PARAMETER_7FFF_6FB7[0x29] =
        {0xff,  0x62,  0x26,  0x82,  0x5,  0x42,  0x21,  0x0,  0x14,  0x4,  0x83,  0x2,
         0x6f,  0xb7,  0xa5,  0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,
         0x5,  0x8b,  0x3,  0x6f,  0x6,  0x1,  0x80,  0x2,  0x0,  0x50,  0x81,  0x2,  0x0,
         0x5d,  0x88,  0x1,  0x8};
uint8_t M_FILE_CONTROL_PARAMETER_7FFF_6F06[0x29] =
        {0xff,  0x62,  0x26,  0x82,  0x5,  0x42,  0x21,  0x0,  0x2c,  0x9,  0x83,  0x2,
         0x6f,  0x6,  0xa5,  0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,  0x5,
         0x8b,  0x3,  0x6f,  0x6,  0x1,  0x80,  0x2,  0x1,  0x8c,  0x81,  0x2,  0x1,  0x99,
         0x88,  0x1,  0xb8};
uint8_t M_FILE_CONTROL_PARAMETER_7FFF_5F3B_4F20[0x26] =
        {0xff,  0x62,  0x23,  0x82,  0x2,  0x41,  0x21,  0x83,  0x2,  0x4f,  0x20,  0xa5,
         0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,  0x5,  0x8b,  0x3,  0x6f,
         0x6,  0x4,  0x80,  0x2,  0x0,  0x9,  0x81,  0x2,  0x0,  0x16,  0x88,  0x1,  0x8};
uint8_t M_FILE_CONTROL_PARAMETER_7FFF_5F3B_4F52[0x26] =
        {0xff,  0x62,  0x23,  0x82,  0x2,  0x41,  0x21,  0x83,  0x2,  0x4f,  0x52,  0xa5,
         0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,  0x5,  0x8b,  0x3,  0x6f,
         0x6,  0x4,  0x80,  0x2,  0x0,  0x9,  0x81,  0x2,  0x0,  0x16,  0x88,  0x1,  0x10};
uint8_t M_FILE_CONTROL_PARAMETER_7FFF_6F56[0x26] =
        {0xff,  0x62,  0x23,  0x82,  0x2,  0x41,  0x21,  0x83,  0x2,  0x6f,  0x56,  0xa5,
         0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,  0x5,  0x8b,  0x3,  0x6f,
         0x6,  0x5,  0x80,  0x2,  0x0,  0x1,  0x81,  0x2,  0x0,  0xe,  0x88,  0x1,  0x28};
uint8_t M_FILE_CONTROL_PARAMETER_7FFF_6F4B[0x28] =
        {0xff,  0x62,  0x25,  0x82,  0x5,  0x42,  0x21,  0x0,  0xd,  0x3,  0x83,  0x2,  0x6f,
         0x4b,  0xa5,  0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,  0x5,  0x8b,
         0x3,  0x6f,  0x6,  0x5,  0x80,  0x2,  0x0,  0x27,  0x81,  0x2,  0x0,  0x34,  0x88,  0x0};
uint8_t M_FILE_CONTROL_PARAMETER_7FFF_6F49[0x28] =
        {0xff,  0x62,  0x25,  0x82,  0x5,  0x42,  0x21,  0x0,  0x18,  0xa,  0x83,  0x2,  0x6f,
         0x49,  0xa5,  0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,  0x5,  0x8b,
         0x3,  0x6f,  0x6,  0x3,  0x80,  0x2,  0x0,  0xf0,  0x81,  0x2,  0x0,  0xfd,  0x88,  0x0};
uint8_t M_FILE_CONTROL_PARAMETER_7FFF_6F3C[0x28] =
        {0xff,  0x62,  0x25,  0x82,  0x5,  0x42,  0x21,  0x0,  0xb0,  0x32,  0x83,  0x2,  0x6f,
         0x3c,  0xa5,  0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,  0x5,  0x8b,
         0x3,  0x6f,  0x6,  0x4,  0x80,  0x2,  0x22,  0x60,  0x81,  0x2,  0x22,  0x6d,  0x88,  0x0};
uint8_t M_FILE_CONTROL_PARAMETER_7FFF_6F43[0x25] =
        {0xff,  0x62,  0x22,  0x82,  0x2,  0x41,  0x21,  0x83,  0x2,  0x6f,  0x43,  0xa5,
         0x6,  0x80,  0x1,  0x71,  0xc0,  0x1,  0x0,  0x8a,  0x1,  0x5,  0x8b,  0x3,  0x6f,
         0x6,  0x4,  0x80,  0x2,  0x0,  0x2,  0x81,  0x2,  0x0,  0xf,  0x88,  0x0};
uint8_t M_FILE_CONTROL_PARAMETER_7FFF_6F42[0x1f] =
        {0xff,  0x62,  0x1c,  0x82,  0x5,  0x42,  0x21,  0x0,  0x28,  0x1,  0x83,  0x2,
         0x6f,  0x42,  0x8a,  0x1,  0x5,  0x8b,  0x6,  0x6f,  0x6,  0x1,  0x4,  0x0,  0x4,
         0x80,  0x2,  0x0,  0xc8,  0x88,  0x0};
uint8_t M_FILE_CONTROL_PARAMETER_7FFF_6F46[0x19] =
        {0xff,  0x62,  0x16,  0x82,  0x2,  0x41,  0x21,  0x83,  0x2,  0x6f,  0x46,  0x8a,
         0x1,  0x5,  0x8b,  0x3,  0x6f,  0x6,  0x4,  0x80,  0x2,  0x0,  0x11,  0x88,  0x0};

/************************************************************************************************/
/************************************************************************************************/
/************************************************************************************************/
uint8_t UPDATED_BYTES_2F00[0x21] =
        {0, 0x61,  0x1d,  0x4f,  0x10,  0xa0,  0x0,  0x0,  0x0,  0x87,  0x10,  0x2,  0xff,
         0x86,  0xff,  0xff,  0x89,  0xff,  0xff,  0xff,  0xff,  0x50,  0x9,  0x55,  0x6e,
         0x69,  0x76,  0x65,  0x72,  0x53,  0x49,  0x4d,  0xff}; 
uint8_t UPDATED_BYTES_7FFF_6F38[0xb] = {0, 0x9e,  0x08,  0x4,  0x4,  0x00,  0x0,  0x0,  0x0,  0x0,  0x0};
uint8_t UPDATED_BYTES_7FFF_6F43[0x3] = {0, 0xa,  0xff};
uint8_t UPDATED_BYTES_7FFF_6F46[0x12] =
        {0, 0x0,  'W',  'i',  'r',  'e',  'l',  'e',  's',  's',  ' ',  'U',  'S',  'I',  'M',
         0xff,  0xff,  0xff};
/* record size: 0x2c=44, record number: 0x9 */
uint8_t UPDATED_BYTES_7FFF_6F06[0x2c] =
        {0x80,  0x1,  0x18,  0xa4,  0x6,  0x83,  0x1,  0xa,  0x95,  0x1,  0x8,  0x80,  0x1,
         0x3,  0xa4,  0x6,  0x83,  0x1,  0x1,  0x95,  0x1,  0x8,  0xff,  0xff,  0xff,  0xff,
         0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,
         0xff,  0xff,  0xff,  0xff,  0xff,  0xff};
/************************************************************************************************/

#endif
