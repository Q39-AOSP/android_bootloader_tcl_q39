/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*---------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = "1.0"
 *---------------------------------------------------------------------------*/

#ifndef _PANEL_NT35521_720P_VIDEO_H_

#define _PANEL_NT35521_720P_VIDEO_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/

static struct panel_config nt35521_720p_video_panel_data = {
  "nt35521 720p video mode dsi panel", "mdss_dsi0", "qcom,mdss-dsi-panel",
  10, 0, "DISPLAY_1", 0, 424000000, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution nt35521_720p_video_panel_res = {
  720, 1280, 44, 55, 11, 0, 14, 15, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Color Information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info nt35521_720p_video_color = {
  24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Command information                                                 */
/*---------------------------------------------------------------------------*/
static char nt35521_720p_video_on_cmd0[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x00, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd1[] = {
0x03, 0x00, 0x29, 0xC0,
0xB1, 0x68, 0x21, 0xFF,  };


static char nt35521_720p_video_on_cmd2[] = {
0xB5, 0xC8, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd3[] = {
0x02, 0x00, 0x29, 0xC0,
0xB6, 0x0F, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd4[] = {
0x05, 0x00, 0x29, 0xC0,
0xB8, 0x00, 0x00, 0x0A,
0x00, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd5[] = {
0xB9, 0x00, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd6[] = {
0xBA, 0x02, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd7[] = {
0x03, 0x00, 0x29, 0xC0,
0xBB, 0x63, 0x63, 0xFF,  };


static char nt35521_720p_video_on_cmd8[] = {
0x03, 0x00, 0x29, 0xC0,
0xBC, 0x00, 0x00, 0xFF,  };


static char nt35521_720p_video_on_cmd9[] = {
0x06, 0x00, 0x29, 0xC0,
0xBD, 0x02, 0x7F, 0x0D,
0x0B, 0x00, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd10[] = {
0x11, 0x00, 0x29, 0xC0,
0xCC, 0x41, 0x36, 0x87,
0x54, 0x46, 0x65, 0x10,
0x12, 0x14, 0x10, 0x12,
0x14, 0x40, 0x08, 0x15,
0x05, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd11[] = {
0xD0, 0x00, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd12[] = {
0x11, 0x00, 0x29, 0xC0,
0xD1, 0x00, 0x04, 0x08,
0x0C, 0x10, 0x14, 0x18,
0x1C, 0x20, 0x24, 0x28,
0x2C, 0x30, 0x34, 0x38,
0x3C, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd13[] = {
0xD3, 0x00, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd14[] = {
0x03, 0x00, 0x29, 0xC0,
0xD6, 0x44, 0x44, 0xFF,  };


static char nt35521_720p_video_on_cmd15[] = {
0x0D, 0x00, 0x29, 0xC0,
0xD7, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00,
0x00, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd16[] = {
0x0E, 0x00, 0x29, 0xC0,
0xD8, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd17[] = {
0x03, 0x00, 0x29, 0xC0,
0xD9, 0x00, 0x28, 0xFF,  };


static char nt35521_720p_video_on_cmd18[] = {
0x03, 0x00, 0x29, 0xC0,
0xE5, 0x00, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd19[] = {
0x05, 0x00, 0x29, 0xC0,
0xE6, 0xF3, 0xEC, 0xE7,
0xDF, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd20[] = {
0x0B, 0x00, 0x29, 0xC0,
0xE7, 0xF3, 0xD9, 0xCC,
0xCD, 0xB3, 0xA6, 0x99,
0x99, 0x99, 0x95, 0xFF,  };


static char nt35521_720p_video_on_cmd21[] = {
0x0B, 0x00, 0x29, 0xC0,
0xE8, 0xF3, 0xD9, 0xCC,
0xCD, 0xB3, 0xA6, 0x99,
0x99, 0x99, 0x95, 0xFF,  };


static char nt35521_720p_video_on_cmd22[] = {
0x03, 0x00, 0x29, 0xC0,
0xE9, 0x00, 0x04, 0xFF,  };


static char nt35521_720p_video_on_cmd23[] = {
0xEA, 0x00, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd24[] = {
0x05, 0x00, 0x29, 0xC0,
0xEE, 0x87, 0x78, 0x00,
0x00, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd25[] = {
0x03, 0x00, 0x29, 0xC0,
0xEF, 0x07, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd26[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x01, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd27[] = {
0x03, 0x00, 0x29, 0xC0,
0xB0, 0x0D, 0x0D, 0xFF,  };


static char nt35521_720p_video_on_cmd28[] = {
0x03, 0x00, 0x29, 0xC0,
0xB1, 0x0D, 0x0D, 0xFF,  };


static char nt35521_720p_video_on_cmd29[] = {
0x03, 0x00, 0x29, 0xC0,
0xB3, 0x2D, 0x2D, 0xFF,  };


static char nt35521_720p_video_on_cmd30[] = {
0x03, 0x00, 0x29, 0xC0,
0xB4, 0x19, 0x19, 0xFF,  };


static char nt35521_720p_video_on_cmd31[] = {
0x03, 0x00, 0x29, 0xC0,
0xB5, 0x06, 0x06, 0xFF,  };


static char nt35521_720p_video_on_cmd32[] = {
0x03, 0x00, 0x29, 0xC0,
0xB6, 0x05, 0x05, 0xFF,  };


static char nt35521_720p_video_on_cmd33[] = {
0x03, 0x00, 0x29, 0xC0,
0xB7, 0x05, 0x05, 0xFF,  };


static char nt35521_720p_video_on_cmd34[] = {
0x03, 0x00, 0x29, 0xC0,
0xB8, 0x05, 0x05, 0xFF,  };


static char nt35521_720p_video_on_cmd35[] = {
0x03, 0x00, 0x29, 0xC0,
0xB9, 0x44, 0x44, 0xFF,  };


static char nt35521_720p_video_on_cmd36[] = {
0x03, 0x00, 0x29, 0xC0,
0xBA, 0x36, 0x36, 0xFF,  };


static char nt35521_720p_video_on_cmd37[] = {
0x03, 0x00, 0x29, 0xC0,
0xBC, 0x50, 0x00, 0xFF,  };


static char nt35521_720p_video_on_cmd38[] = {
0x03, 0x00, 0x29, 0xC0,
0xBD, 0x50, 0x00, 0xFF,  };


static char nt35521_720p_video_on_cmd39[] = {
0xBE, 0x39, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd40[] = {
0xBF, 0x39, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd41[] = {
0xC0, 0x0C, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd42[] = {
0xC1, 0x00, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd43[] = {
0x03, 0x00, 0x29, 0xC0,
0xC2, 0x19, 0x19, 0xFF,  };


static char nt35521_720p_video_on_cmd44[] = {
0x03, 0x00, 0x29, 0xC0,
0xC3, 0x0A, 0x0A, 0xFF,  };


static char nt35521_720p_video_on_cmd45[] = {
0x03, 0x00, 0x29, 0xC0,
0xC4, 0x23, 0x23, 0xFF,  };


static char nt35521_720p_video_on_cmd46[] = {
0x04, 0x00, 0x29, 0xC0,
0xC7, 0x00, 0x80, 0x00,
 };


static char nt35521_720p_video_on_cmd47[] = {
0x07, 0x00, 0x29, 0xC0,
0xC9, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xFF,  };


static char nt35521_720p_video_on_cmd48[] = {
0xCA, 0x01, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd49[] = {
0x03, 0x00, 0x29, 0xC0,
0xCB, 0x0B, 0x53, 0xFF,  };


static char nt35521_720p_video_on_cmd50[] = {
0xCC, 0x00, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd51[] = {
0x04, 0x00, 0x29, 0xC0,
0xCD, 0x0B, 0x52, 0x53,
 };


static char nt35521_720p_video_on_cmd52[] = {
0xCE, 0x44, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd53[] = {
0x04, 0x00, 0x29, 0xC0,
0xCF, 0x00, 0x50, 0x50,
 };


static char nt35521_720p_video_on_cmd54[] = {
0x03, 0x00, 0x29, 0xC0,
0xD0, 0x50, 0x50, 0xFF,  };


static char nt35521_720p_video_on_cmd55[] = {
0x03, 0x00, 0x29, 0xC0,
0xD1, 0x50, 0x50, 0xFF,  };


static char nt35521_720p_video_on_cmd56[] = {
0xD2, 0x39, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd57[] = {
0xD3, 0x39, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd58[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x02, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd59[] = {
0x11, 0x00, 0x29, 0xC0,
0xB0, 0x00, 0xAC, 0x00,
0xBA, 0x00, 0xD9, 0x00,
0xED, 0x01, 0x01, 0x01,
0x1E, 0x01, 0x3A, 0x01,
0x62, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd60[] = {
0x11, 0x00, 0x29, 0xC0,
0xB1, 0x01, 0x85, 0x01,
0xB8, 0x01, 0xE4, 0x02,
0x27, 0x02, 0x5B, 0x02,
0x5D, 0x02, 0x8C, 0x02,
0xBE, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd61[] = {
0x11, 0x00, 0x29, 0xC0,
0xB2, 0x02, 0xDF, 0x03,
0x0C, 0x03, 0x2A, 0x03,
0x51, 0x03, 0x6D, 0x03,
0x8D, 0x03, 0xA4, 0x03,
0xBE, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd62[] = {
0x05, 0x00, 0x29, 0xC0,
0xB3, 0x03, 0xCC, 0x03,
0xCC, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd63[] = {
0x11, 0x00, 0x29, 0xC0,
0xB4, 0x00, 0xAC, 0x00,
0xBA, 0x00, 0xD9, 0x00,
0xED, 0x01, 0x01, 0x01,
0x1E, 0x01, 0x3A, 0x01,
0x62, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd64[] = {
0x11, 0x00, 0x29, 0xC0,
0xB5, 0x01, 0x85, 0x01,
0xB8, 0x01, 0xE4, 0x02,
0x27, 0x02, 0x5B, 0x02,
0x5D, 0x02, 0x8C, 0x02,
0xBE, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd65[] = {
0x11, 0x00, 0x29, 0xC0,
0xB6, 0x02, 0xDF, 0x03,
0x0C, 0x03, 0x2A, 0x03,
0x51, 0x03, 0x6D, 0x03,
0x8D, 0x03, 0xA4, 0x03,
0xBE, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd66[] = {
0x05, 0x00, 0x29, 0xC0,
0xB7, 0x03, 0xCC, 0x03,
0xCC, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd67[] = {
0x11, 0x00, 0x29, 0xC0,
0xB8, 0x00, 0xAC, 0x00,
0xBA, 0x00, 0xD9, 0x00,
0xED, 0x01, 0x01, 0x01,
0x1E, 0x01, 0x3A, 0x01,
0x62, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd68[] = {
0x11, 0x00, 0x29, 0xC0,
0xB9, 0x01, 0x85, 0x01,
0xB8, 0x01, 0xE4, 0x02,
0x27, 0x02, 0x5B, 0x02,
0x5D, 0x02, 0x8C, 0x02,
0xBE, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd69[] = {
0x11, 0x00, 0x29, 0xC0,
0xBA, 0x02, 0xDF, 0x03,
0x0C, 0x03, 0x2A, 0x03,
0x51, 0x03, 0x6D, 0x03,
0x8D, 0x03, 0xA4, 0x03,
0xBE, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd70[] = {
0x05, 0x00, 0x29, 0xC0,
0xBB, 0x03, 0xCC, 0x03,
0xCC, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd71[] = {
0x11, 0x00, 0x29, 0xC0,
0xBC, 0x00, 0xAC, 0x00,
0xBA, 0x00, 0xD9, 0x00,
0xED, 0x01, 0x01, 0x01,
0x1E, 0x01, 0x3A, 0x01,
0x62, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd72[] = {
0x11, 0x00, 0x29, 0xC0,
0xBD, 0x01, 0x85, 0x01,
0xB8, 0x01, 0xE4, 0x02,
0x27, 0x02, 0x5B, 0x02,
0x5D, 0x02, 0x8C, 0x02,
0xBE, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd73[] = {
0x11, 0x00, 0x29, 0xC0,
0xBE, 0x02, 0xDF, 0x03,
0x0C, 0x03, 0x2A, 0x03,
0x51, 0x03, 0x6D, 0x03,
0x8D, 0x03, 0xA4, 0x03,
0xBE, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd74[] = {
0x05, 0x00, 0x29, 0xC0,
0xBF, 0x03, 0xCC, 0x03,
0xCC, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd75[] = {
0x11, 0x00, 0x29, 0xC0,
0xC0, 0x00, 0xAC, 0x00,
0xBA, 0x00, 0xD9, 0x00,
0xED, 0x01, 0x01, 0x01,
0x1E, 0x01, 0x3A, 0x01,
0x62, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd76[] = {
0x11, 0x00, 0x29, 0xC0,
0xC1, 0x01, 0x85, 0x01,
0xB8, 0x01, 0xE4, 0x02,
0x27, 0x02, 0x5B, 0x02,
0x5D, 0x02, 0x8C, 0x02,
0xBE, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd77[] = {
0x11, 0x00, 0x29, 0xC0,
0xC2, 0x02, 0xDF, 0x03,
0x0C, 0x03, 0x2A, 0x03,
0x51, 0x03, 0x6D, 0x03,
0x8D, 0x03, 0xA4, 0x03,
0xBE, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd78[] = {
0x05, 0x00, 0x29, 0xC0,
0xC3, 0x03, 0xCC, 0x03,
0xCC, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd79[] = {
0x11, 0x00, 0x29, 0xC0,
0xC4, 0x00, 0xAC, 0x00,
0xBA, 0x00, 0xD9, 0x00,
0xED, 0x01, 0x01, 0x01,
0x1E, 0x01, 0x3A, 0x01,
0x62, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd80[] = {
0x11, 0x00, 0x29, 0xC0,
0xC5, 0x01, 0x85, 0x01,
0xB8, 0x01, 0xE4, 0x02,
0x27, 0x02, 0x5B, 0x02,
0x5D, 0x02, 0x8C, 0x02,
0xBE, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd81[] = {
0x11, 0x00, 0x29, 0xC0,
0xC6, 0x02, 0xDF, 0x03,
0x0C, 0x03, 0x2A, 0x03,
0x51, 0x03, 0x6D, 0x03,
0x8D, 0x03, 0xA4, 0x03,
0xBE, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd82[] = {
0x05, 0x00, 0x29, 0xC0,
0xC7, 0x03, 0xCC, 0x03,
0xCC, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd83[] = {
0xEE, 0x00, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd84[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x03, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd85[] = {
0x03, 0x00, 0x29, 0xC0,
0xB0, 0x00, 0x00, 0xFF,  };


static char nt35521_720p_video_on_cmd86[] = {
0x03, 0x00, 0x29, 0xC0,
0xB1, 0x00, 0x00, 0xFF,  };


static char nt35521_720p_video_on_cmd87[] = {
0x06, 0x00, 0x29, 0xC0,
0xB2, 0x03, 0x00, 0x00,
0x00, 0x00, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd88[] = {
0x06, 0x00, 0x29, 0xC0,
0xB3, 0x03, 0x00, 0x00,
0x00, 0x00, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd89[] = {
0x06, 0x00, 0x29, 0xC0,
0xB4, 0x03, 0x00, 0x00,
0x00, 0x00, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd90[] = {
0x06, 0x00, 0x29, 0xC0,
0xB5, 0x03, 0x00, 0x00,
0x00, 0x00, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd91[] = {
0x06, 0x00, 0x29, 0xC0,
0xB6, 0x03, 0x00, 0x00,
0x00, 0x00, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd92[] = {
0x06, 0x00, 0x29, 0xC0,
0xB7, 0x03, 0x00, 0x00,
0x00, 0x00, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd93[] = {
0x06, 0x00, 0x29, 0xC0,
0xB8, 0x03, 0x00, 0x00,
0x00, 0x00, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd94[] = {
0x06, 0x00, 0x29, 0xC0,
0xB9, 0x03, 0x00, 0x00,
0x00, 0x00, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd95[] = {
0x06, 0x00, 0x29, 0xC0,
0xBA, 0x35, 0x10, 0x00,
0x00, 0x00, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd96[] = {
0x06, 0x00, 0x29, 0xC0,
0xBB, 0x35, 0x10, 0x00,
0x00, 0x00, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd97[] = {
0x06, 0x00, 0x29, 0xC0,
0xBC, 0x35, 0x10, 0x00,
0x00, 0x00, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd98[] = {
0x06, 0x00, 0x29, 0xC0,
0xBD, 0x35, 0x10, 0x00,
0x00, 0x00, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd99[] = {
0x05, 0x00, 0x29, 0xC0,
0xC0, 0x00, 0x34, 0x00,
0x00, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd100[] = {
0x05, 0x00, 0x29, 0xC0,
0xC1, 0x00, 0x34, 0x00,
0x00, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd101[] = {
0x05, 0x00, 0x29, 0xC0,
0xC2, 0x00, 0x34, 0x00,
0x00, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd102[] = {
0x05, 0x00, 0x29, 0xC0,
0xC3, 0x00, 0x34, 0x00,
0x00, 0xFF, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd103[] = {
0xC4, 0x40, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd104[] = {
0xC5, 0x40, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd105[] = {
0xC6, 0x40, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd106[] = {
0xC7, 0x40, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd107[] = {
0xEF, 0x00, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd108[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x05, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd109[] = {
0x03, 0x00, 0x29, 0xC0,
0xB0, 0x1B, 0x10, 0xFF,  };


static char nt35521_720p_video_on_cmd110[] = {
0x03, 0x00, 0x29, 0xC0,
0xB1, 0x1B, 0x10, 0xFF,  };


static char nt35521_720p_video_on_cmd111[] = {
0x03, 0x00, 0x29, 0xC0,
0xB2, 0x1B, 0x10, 0xFF,  };


static char nt35521_720p_video_on_cmd112[] = {
0x03, 0x00, 0x29, 0xC0,
0xB3, 0x1B, 0x10, 0xFF,  };


static char nt35521_720p_video_on_cmd113[] = {
0x03, 0x00, 0x29, 0xC0,
0xB4, 0x1B, 0x10, 0xFF,  };


static char nt35521_720p_video_on_cmd114[] = {
0x03, 0x00, 0x29, 0xC0,
0xB5, 0x1B, 0x10, 0xFF,  };


static char nt35521_720p_video_on_cmd115[] = {
0x03, 0x00, 0x29, 0xC0,
0xB6, 0x1B, 0x10, 0xFF,  };


static char nt35521_720p_video_on_cmd116[] = {
0x03, 0x00, 0x29, 0xC0,
0xB7, 0x1B, 0x10, 0xFF,  };


static char nt35521_720p_video_on_cmd117[] = {
0xB8, 0x00, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd118[] = {
0xB9, 0x00, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd119[] = {
0xBA, 0x00, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd120[] = {
0xBB, 0x00, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd121[] = {
0xBC, 0x00, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd122[] = {
0x06, 0x00, 0x29, 0xC0,
0xBD, 0x03, 0x03, 0x03,
0x00, 0x01, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd123[] = {
0xC0, 0x03, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd124[] = {
0xC1, 0x05, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd125[] = {
0xC2, 0x03, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd126[] = {
0xC3, 0x05, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd127[] = {
0xC4, 0x80, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd128[] = {
0xC5, 0xA2, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd129[] = {
0xC6, 0x80, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd130[] = {
0xC7, 0xA2, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd131[] = {
0x03, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x20, 0xFF,  };


static char nt35521_720p_video_on_cmd132[] = {
0x03, 0x00, 0x29, 0xC0,
0xC9, 0x00, 0x20, 0xFF,  };


static char nt35521_720p_video_on_cmd133[] = {
0x03, 0x00, 0x29, 0xC0,
0xCA, 0x01, 0x00, 0xFF,  };


static char nt35521_720p_video_on_cmd134[] = {
0x03, 0x00, 0x29, 0xC0,
0xCB, 0x00, 0x00, 0xFF,  };


static char nt35521_720p_video_on_cmd135[] = {
0x04, 0x00, 0x29, 0xC0,
0xCC, 0x00, 0x00, 0x01,
 };


static char nt35521_720p_video_on_cmd136[] = {
0x04, 0x00, 0x29, 0xC0,
0xCD, 0x00, 0x00, 0x01,
 };


static char nt35521_720p_video_on_cmd137[] = {
0x04, 0x00, 0x29, 0xC0,
0xCE, 0x00, 0x00, 0x01,
 };


static char nt35521_720p_video_on_cmd138[] = {
0x04, 0x00, 0x29, 0xC0,
0xCF, 0x00, 0x00, 0x01,
 };


static char nt35521_720p_video_on_cmd139[] = {
0xD0, 0x00, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd140[] = {
0x06, 0x00, 0x29, 0xC0,
0xD1, 0x03, 0x00, 0x00,
0x07, 0x10, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd141[] = {
0x06, 0x00, 0x29, 0xC0,
0xD2, 0x13, 0x00, 0x00,
0x07, 0x11, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd142[] = {
0x06, 0x00, 0x29, 0xC0,
0xD3, 0x23, 0x00, 0x00,
0x07, 0x10, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd143[] = {
0x06, 0x00, 0x29, 0xC0,
0xD4, 0x33, 0x00, 0x00,
0x07, 0x11, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd144[] = {
0xE5, 0x06, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd145[] = {
0xE6, 0x06, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd146[] = {
0xE7, 0x06, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd147[] = {
0xE8, 0x06, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd148[] = {
0xE9, 0x06, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd149[] = {
0xEA, 0x06, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd150[] = {
0xEB, 0x06, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd151[] = {
0xEC, 0x06, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd152[] = {
0xED, 0x31, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd153[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x06, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd154[] = {
0x03, 0x00, 0x29, 0xC0,
0xB0, 0x10, 0x11, 0xFF,  };


static char nt35521_720p_video_on_cmd155[] = {
0x03, 0x00, 0x29, 0xC0,
0xB1, 0x12, 0x13, 0xFF,  };


static char nt35521_720p_video_on_cmd156[] = {
0x03, 0x00, 0x29, 0xC0,
0xB2, 0x08, 0x00, 0xFF,  };


static char nt35521_720p_video_on_cmd157[] = {
0x03, 0x00, 0x29, 0xC0,
0xB3, 0x2D, 0x2D, 0xFF,  };


static char nt35521_720p_video_on_cmd158[] = {
0x03, 0x00, 0x29, 0xC0,
0xB4, 0x2D, 0x34, 0xFF,  };


static char nt35521_720p_video_on_cmd159[] = {
0x03, 0x00, 0x29, 0xC0,
0xB5, 0x34, 0x2D, 0xFF,  };


static char nt35521_720p_video_on_cmd160[] = {
0x03, 0x00, 0x29, 0xC0,
0xB6, 0x2D, 0x34, 0xFF,  };


static char nt35521_720p_video_on_cmd161[] = {
0x03, 0x00, 0x29, 0xC0,
0xB7, 0x34, 0x34, 0xFF,  };


static char nt35521_720p_video_on_cmd162[] = {
0x03, 0x00, 0x29, 0xC0,
0xB8, 0x02, 0x0A, 0xFF,  };


static char nt35521_720p_video_on_cmd163[] = {
0x03, 0x00, 0x29, 0xC0,
0xB9, 0x00, 0x08, 0xFF,  };


static char nt35521_720p_video_on_cmd164[] = {
0x03, 0x00, 0x29, 0xC0,
0xBA, 0x09, 0x01, 0xFF,  };


static char nt35521_720p_video_on_cmd165[] = {
0x03, 0x00, 0x29, 0xC0,
0xBB, 0x0B, 0x03, 0xFF,  };


static char nt35521_720p_video_on_cmd166[] = {
0x03, 0x00, 0x29, 0xC0,
0xBC, 0x34, 0x34, 0xFF,  };


static char nt35521_720p_video_on_cmd167[] = {
0x03, 0x00, 0x29, 0xC0,
0xBD, 0x34, 0x2D, 0xFF,  };


static char nt35521_720p_video_on_cmd168[] = {
0x03, 0x00, 0x29, 0xC0,
0xBE, 0x2D, 0x34, 0xFF,  };


static char nt35521_720p_video_on_cmd169[] = {
0x03, 0x00, 0x29, 0xC0,
0xBF, 0x34, 0x2D, 0xFF,  };


static char nt35521_720p_video_on_cmd170[] = {
0x03, 0x00, 0x29, 0xC0,
0xC0, 0x2D, 0x2D, 0xFF,  };


static char nt35521_720p_video_on_cmd171[] = {
0x03, 0x00, 0x29, 0xC0,
0xC1, 0x01, 0x09, 0xFF,  };


static char nt35521_720p_video_on_cmd172[] = {
0x03, 0x00, 0x29, 0xC0,
0xC2, 0x19, 0x18, 0xFF,  };


static char nt35521_720p_video_on_cmd173[] = {
0x03, 0x00, 0x29, 0xC0,
0xC3, 0x17, 0x16, 0xFF,  };


static char nt35521_720p_video_on_cmd174[] = {
0x03, 0x00, 0x29, 0xC0,
0xC4, 0x19, 0x18, 0xFF,  };


static char nt35521_720p_video_on_cmd175[] = {
0x03, 0x00, 0x29, 0xC0,
0xC5, 0x17, 0x16, 0xFF,  };


static char nt35521_720p_video_on_cmd176[] = {
0x03, 0x00, 0x29, 0xC0,
0xC6, 0x01, 0x09, 0xFF,  };


static char nt35521_720p_video_on_cmd177[] = {
0x03, 0x00, 0x29, 0xC0,
0xC7, 0x2D, 0x2D, 0xFF,  };


static char nt35521_720p_video_on_cmd178[] = {
0x03, 0x00, 0x29, 0xC0,
0xC8, 0x2D, 0x34, 0xFF,  };


static char nt35521_720p_video_on_cmd179[] = {
0x03, 0x00, 0x29, 0xC0,
0xC9, 0x34, 0x2D, 0xFF,  };


static char nt35521_720p_video_on_cmd180[] = {
0x03, 0x00, 0x29, 0xC0,
0xCA, 0x2D, 0x34, 0xFF,  };


static char nt35521_720p_video_on_cmd181[] = {
0x03, 0x00, 0x29, 0xC0,
0xCB, 0x34, 0x34, 0xFF,  };


static char nt35521_720p_video_on_cmd182[] = {
0x03, 0x00, 0x29, 0xC0,
0xCC, 0x0B, 0x03, 0xFF,  };


static char nt35521_720p_video_on_cmd183[] = {
0x03, 0x00, 0x29, 0xC0,
0xCD, 0x09, 0x01, 0xFF,  };


static char nt35521_720p_video_on_cmd184[] = {
0x03, 0x00, 0x29, 0xC0,
0xCE, 0x00, 0x08, 0xFF,  };


static char nt35521_720p_video_on_cmd185[] = {
0x03, 0x00, 0x29, 0xC0,
0xCF, 0x02, 0x0A, 0xFF,  };


static char nt35521_720p_video_on_cmd186[] = {
0x03, 0x00, 0x29, 0xC0,
0xD0, 0x34, 0x34, 0xFF,  };


static char nt35521_720p_video_on_cmd187[] = {
0x03, 0x00, 0x29, 0xC0,
0xD1, 0x34, 0x2D, 0xFF,  };


static char nt35521_720p_video_on_cmd188[] = {
0x03, 0x00, 0x29, 0xC0,
0xD2, 0x2D, 0x34, 0xFF,  };


static char nt35521_720p_video_on_cmd189[] = {
0x03, 0x00, 0x29, 0xC0,
0xD3, 0x34, 0x2D, 0xFF,  };


static char nt35521_720p_video_on_cmd190[] = {
0x03, 0x00, 0x29, 0xC0,
0xD4, 0x2D, 0x2D, 0xFF,  };


static char nt35521_720p_video_on_cmd191[] = {
0x03, 0x00, 0x29, 0xC0,
0xD5, 0x08, 0x00, 0xFF,  };


static char nt35521_720p_video_on_cmd192[] = {
0x03, 0x00, 0x29, 0xC0,
0xD6, 0x10, 0x11, 0xFF,  };


static char nt35521_720p_video_on_cmd193[] = {
0x03, 0x00, 0x29, 0xC0,
0xD7, 0x12, 0x13, 0xFF,  };


static char nt35521_720p_video_on_cmd194[] = {
0x06, 0x00, 0x29, 0xC0,
0xD8, 0x55, 0x55, 0x55,
0x55, 0x55, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd195[] = {
0x06, 0x00, 0x29, 0xC0,
0xD9, 0x55, 0x55, 0x55,
0x55, 0x55, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd196[] = {
0x03, 0x00, 0x29, 0xC0,
0xE5, 0x34, 0x34, 0xFF,  };


static char nt35521_720p_video_on_cmd197[] = {
0x03, 0x00, 0x29, 0xC0,
0xE6, 0x34, 0x34, 0xFF,  };


static char nt35521_720p_video_on_cmd198[] = {
0xE7, 0x05, 0x23, 0x80 };


static char nt35521_720p_video_on_cmd199[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x00, 0x00, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd200[] = {
0x11, 0x00, 0x05, 0x80 };


static char nt35521_720p_video_on_cmd201[] = {
0x29, 0x00, 0x05, 0x80 };


static char nt35521_720p_video_on_cmd202[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x08, 0x01, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd203[] = {
0x06, 0x00, 0x29, 0xC0,
0xF0, 0x55, 0xAA, 0x52,
0x00, 0x00, 0xFF, 0xFF,  };


static char nt35521_720p_video_on_cmd204[] = {
0x02, 0x00, 0x29, 0xC0,
0x53, 0x2C, 0xFF, 0xFF,  };




static struct mipi_dsi_cmd nt35521_720p_video_on_command[] = {
{ 0xc , nt35521_720p_video_on_cmd0},
{ 0x8 , nt35521_720p_video_on_cmd1},
{ 0x4 , nt35521_720p_video_on_cmd2},
{ 0x8 , nt35521_720p_video_on_cmd3},
{ 0xc , nt35521_720p_video_on_cmd4},
{ 0x4 , nt35521_720p_video_on_cmd5},
{ 0x4 , nt35521_720p_video_on_cmd6},
{ 0x8 , nt35521_720p_video_on_cmd7},
{ 0x8 , nt35521_720p_video_on_cmd8},
{ 0xc , nt35521_720p_video_on_cmd9},
{ 0x18 , nt35521_720p_video_on_cmd10},
{ 0x4 , nt35521_720p_video_on_cmd11},
{ 0x18 , nt35521_720p_video_on_cmd12},
{ 0x4 , nt35521_720p_video_on_cmd13},
{ 0x8 , nt35521_720p_video_on_cmd14},
{ 0x14 , nt35521_720p_video_on_cmd15},
{ 0x14 , nt35521_720p_video_on_cmd16},
{ 0x8 , nt35521_720p_video_on_cmd17},
{ 0x8 , nt35521_720p_video_on_cmd18},
{ 0xc , nt35521_720p_video_on_cmd19},
{ 0x10 , nt35521_720p_video_on_cmd20},
{ 0x10 , nt35521_720p_video_on_cmd21},
{ 0x8 , nt35521_720p_video_on_cmd22},
{ 0x4 , nt35521_720p_video_on_cmd23},
{ 0xc , nt35521_720p_video_on_cmd24},
{ 0x8 , nt35521_720p_video_on_cmd25},
{ 0xc , nt35521_720p_video_on_cmd26},
{ 0x8 , nt35521_720p_video_on_cmd27},
{ 0x8 , nt35521_720p_video_on_cmd28},
{ 0x8 , nt35521_720p_video_on_cmd29},
{ 0x8 , nt35521_720p_video_on_cmd30},
{ 0x8 , nt35521_720p_video_on_cmd31},
{ 0x8 , nt35521_720p_video_on_cmd32},
{ 0x8 , nt35521_720p_video_on_cmd33},
{ 0x8 , nt35521_720p_video_on_cmd34},
{ 0x8 , nt35521_720p_video_on_cmd35},
{ 0x8 , nt35521_720p_video_on_cmd36},
{ 0x8 , nt35521_720p_video_on_cmd37},
{ 0x8 , nt35521_720p_video_on_cmd38},
{ 0x4 , nt35521_720p_video_on_cmd39},
{ 0x4 , nt35521_720p_video_on_cmd40},
{ 0x4 , nt35521_720p_video_on_cmd41},
{ 0x4 , nt35521_720p_video_on_cmd42},
{ 0x8 , nt35521_720p_video_on_cmd43},
{ 0x8 , nt35521_720p_video_on_cmd44},
{ 0x8 , nt35521_720p_video_on_cmd45},
{ 0x8 , nt35521_720p_video_on_cmd46},
{ 0xc , nt35521_720p_video_on_cmd47},
{ 0x4 , nt35521_720p_video_on_cmd48},
{ 0x8 , nt35521_720p_video_on_cmd49},
{ 0x4 , nt35521_720p_video_on_cmd50},
{ 0x8 , nt35521_720p_video_on_cmd51},
{ 0x4 , nt35521_720p_video_on_cmd52},
{ 0x8 , nt35521_720p_video_on_cmd53},
{ 0x8 , nt35521_720p_video_on_cmd54},
{ 0x8 , nt35521_720p_video_on_cmd55},
{ 0x4 , nt35521_720p_video_on_cmd56},
{ 0x4 , nt35521_720p_video_on_cmd57},
{ 0xc , nt35521_720p_video_on_cmd58},
{ 0x18 , nt35521_720p_video_on_cmd59},
{ 0x18 , nt35521_720p_video_on_cmd60},
{ 0x18 , nt35521_720p_video_on_cmd61},
{ 0xc , nt35521_720p_video_on_cmd62},
{ 0x18 , nt35521_720p_video_on_cmd63},
{ 0x18 , nt35521_720p_video_on_cmd64},
{ 0x18 , nt35521_720p_video_on_cmd65},
{ 0xc , nt35521_720p_video_on_cmd66},
{ 0x18 , nt35521_720p_video_on_cmd67},
{ 0x18 , nt35521_720p_video_on_cmd68},
{ 0x18 , nt35521_720p_video_on_cmd69},
{ 0xc , nt35521_720p_video_on_cmd70},
{ 0x18 , nt35521_720p_video_on_cmd71},
{ 0x18 , nt35521_720p_video_on_cmd72},
{ 0x18 , nt35521_720p_video_on_cmd73},
{ 0xc , nt35521_720p_video_on_cmd74},
{ 0x18 , nt35521_720p_video_on_cmd75},
{ 0x18 , nt35521_720p_video_on_cmd76},
{ 0x18 , nt35521_720p_video_on_cmd77},
{ 0xc , nt35521_720p_video_on_cmd78},
{ 0x18 , nt35521_720p_video_on_cmd79},
{ 0x18 , nt35521_720p_video_on_cmd80},
{ 0x18 , nt35521_720p_video_on_cmd81},
{ 0xc , nt35521_720p_video_on_cmd82},
{ 0x4 , nt35521_720p_video_on_cmd83},
{ 0xc , nt35521_720p_video_on_cmd84},
{ 0x8 , nt35521_720p_video_on_cmd85},
{ 0x8 , nt35521_720p_video_on_cmd86},
{ 0xc , nt35521_720p_video_on_cmd87},
{ 0xc , nt35521_720p_video_on_cmd88},
{ 0xc , nt35521_720p_video_on_cmd89},
{ 0xc , nt35521_720p_video_on_cmd90},
{ 0xc , nt35521_720p_video_on_cmd91},
{ 0xc , nt35521_720p_video_on_cmd92},
{ 0xc , nt35521_720p_video_on_cmd93},
{ 0xc , nt35521_720p_video_on_cmd94},
{ 0xc , nt35521_720p_video_on_cmd95},
{ 0xc , nt35521_720p_video_on_cmd96},
{ 0xc , nt35521_720p_video_on_cmd97},
{ 0xc , nt35521_720p_video_on_cmd98},
{ 0xc , nt35521_720p_video_on_cmd99},
{ 0xc , nt35521_720p_video_on_cmd100},
{ 0xc , nt35521_720p_video_on_cmd101},
{ 0xc , nt35521_720p_video_on_cmd102},
{ 0x4 , nt35521_720p_video_on_cmd103},
{ 0x4 , nt35521_720p_video_on_cmd104},
{ 0x4 , nt35521_720p_video_on_cmd105},
{ 0x4 , nt35521_720p_video_on_cmd106},
{ 0x4 , nt35521_720p_video_on_cmd107},
{ 0xc , nt35521_720p_video_on_cmd108},
{ 0x8 , nt35521_720p_video_on_cmd109},
{ 0x8 , nt35521_720p_video_on_cmd110},
{ 0x8 , nt35521_720p_video_on_cmd111},
{ 0x8 , nt35521_720p_video_on_cmd112},
{ 0x8 , nt35521_720p_video_on_cmd113},
{ 0x8 , nt35521_720p_video_on_cmd114},
{ 0x8 , nt35521_720p_video_on_cmd115},
{ 0x8 , nt35521_720p_video_on_cmd116},
{ 0x4 , nt35521_720p_video_on_cmd117},
{ 0x4 , nt35521_720p_video_on_cmd118},
{ 0x4 , nt35521_720p_video_on_cmd119},
{ 0x4 , nt35521_720p_video_on_cmd120},
{ 0x4 , nt35521_720p_video_on_cmd121},
{ 0xc , nt35521_720p_video_on_cmd122},
{ 0x4 , nt35521_720p_video_on_cmd123},
{ 0x4 , nt35521_720p_video_on_cmd124},
{ 0x4 , nt35521_720p_video_on_cmd125},
{ 0x4 , nt35521_720p_video_on_cmd126},
{ 0x4 , nt35521_720p_video_on_cmd127},
{ 0x4 , nt35521_720p_video_on_cmd128},
{ 0x4 , nt35521_720p_video_on_cmd129},
{ 0x4 , nt35521_720p_video_on_cmd130},
{ 0x8 , nt35521_720p_video_on_cmd131},
{ 0x8 , nt35521_720p_video_on_cmd132},
{ 0x8 , nt35521_720p_video_on_cmd133},
{ 0x8 , nt35521_720p_video_on_cmd134},
{ 0x8 , nt35521_720p_video_on_cmd135},
{ 0x8 , nt35521_720p_video_on_cmd136},
{ 0x8 , nt35521_720p_video_on_cmd137},
{ 0x8 , nt35521_720p_video_on_cmd138},
{ 0x4 , nt35521_720p_video_on_cmd139},
{ 0xc , nt35521_720p_video_on_cmd140},
{ 0xc , nt35521_720p_video_on_cmd141},
{ 0xc , nt35521_720p_video_on_cmd142},
{ 0xc , nt35521_720p_video_on_cmd143},
{ 0x4 , nt35521_720p_video_on_cmd144},
{ 0x4 , nt35521_720p_video_on_cmd145},
{ 0x4 , nt35521_720p_video_on_cmd146},
{ 0x4 , nt35521_720p_video_on_cmd147},
{ 0x4 , nt35521_720p_video_on_cmd148},
{ 0x4 , nt35521_720p_video_on_cmd149},
{ 0x4 , nt35521_720p_video_on_cmd150},
{ 0x4 , nt35521_720p_video_on_cmd151},
{ 0x4 , nt35521_720p_video_on_cmd152},
{ 0xc , nt35521_720p_video_on_cmd153},
{ 0x8 , nt35521_720p_video_on_cmd154},
{ 0x8 , nt35521_720p_video_on_cmd155},
{ 0x8 , nt35521_720p_video_on_cmd156},
{ 0x8 , nt35521_720p_video_on_cmd157},
{ 0x8 , nt35521_720p_video_on_cmd158},
{ 0x8 , nt35521_720p_video_on_cmd159},
{ 0x8 , nt35521_720p_video_on_cmd160},
{ 0x8 , nt35521_720p_video_on_cmd161},
{ 0x8 , nt35521_720p_video_on_cmd162},
{ 0x8 , nt35521_720p_video_on_cmd163},
{ 0x8 , nt35521_720p_video_on_cmd164},
{ 0x8 , nt35521_720p_video_on_cmd165},
{ 0x8 , nt35521_720p_video_on_cmd166},
{ 0x8 , nt35521_720p_video_on_cmd167},
{ 0x8 , nt35521_720p_video_on_cmd168},
{ 0x8 , nt35521_720p_video_on_cmd169},
{ 0x8 , nt35521_720p_video_on_cmd170},
{ 0x8 , nt35521_720p_video_on_cmd171},
{ 0x8 , nt35521_720p_video_on_cmd172},
{ 0x8 , nt35521_720p_video_on_cmd173},
{ 0x8 , nt35521_720p_video_on_cmd174},
{ 0x8 , nt35521_720p_video_on_cmd175},
{ 0x8 , nt35521_720p_video_on_cmd176},
{ 0x8 , nt35521_720p_video_on_cmd177},
{ 0x8 , nt35521_720p_video_on_cmd178},
{ 0x8 , nt35521_720p_video_on_cmd179},
{ 0x8 , nt35521_720p_video_on_cmd180},
{ 0x8 , nt35521_720p_video_on_cmd181},
{ 0x8 , nt35521_720p_video_on_cmd182},
{ 0x8 , nt35521_720p_video_on_cmd183},
{ 0x8 , nt35521_720p_video_on_cmd184},
{ 0x8 , nt35521_720p_video_on_cmd185},
{ 0x8 , nt35521_720p_video_on_cmd186},
{ 0x8 , nt35521_720p_video_on_cmd187},
{ 0x8 , nt35521_720p_video_on_cmd188},
{ 0x8 , nt35521_720p_video_on_cmd189},
{ 0x8 , nt35521_720p_video_on_cmd190},
{ 0x8 , nt35521_720p_video_on_cmd191},
{ 0x8 , nt35521_720p_video_on_cmd192},
{ 0x8 , nt35521_720p_video_on_cmd193},
{ 0xc , nt35521_720p_video_on_cmd194},
{ 0xc , nt35521_720p_video_on_cmd195},
{ 0x8 , nt35521_720p_video_on_cmd196},
{ 0x8 , nt35521_720p_video_on_cmd197},
{ 0x4 , nt35521_720p_video_on_cmd198},
{ 0xc , nt35521_720p_video_on_cmd199},
{ 0x4 , nt35521_720p_video_on_cmd200},
{ 0x4 , nt35521_720p_video_on_cmd201},
{ 0xc , nt35521_720p_video_on_cmd202},
{ 0xc , nt35521_720p_video_on_cmd203},
{ 0x8 , nt35521_720p_video_on_cmd204}
};
#define NT35521_720P_VIDEO_ON_COMMAND 205


static char nt35521_720p_videooff_cmd0[] = {
0x28, 0x00, 0x05, 0x80 };


static char nt35521_720p_videooff_cmd1[] = {
0x10, 0x00, 0x05, 0x80 };




static struct mipi_dsi_cmd nt35521_720p_video_off_command[] = {
{ 0x4 , nt35521_720p_videooff_cmd0},
{ 0x4 , nt35521_720p_videooff_cmd1}
};
#define NT35521_720P_VIDEO_OFF_COMMAND 2


static struct command_state nt35521_720p_video_state = {
  0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/

static struct commandpanel_info nt35521_720p_video_command_panel = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/

static struct videopanel_info nt35521_720p_video_video_panel = {
  1, 0, 0, 0, 1, 1, 2, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane Configuration                                                        */
/*---------------------------------------------------------------------------*/

static struct lane_configuration nt35521_720p_video_lane_config = {
  4, 0, 1, 1, 1, 1
};


/*---------------------------------------------------------------------------*/
/* Panel Timing                                                              */
/*---------------------------------------------------------------------------*/
const uint32_t nt35521_720p_video_timings[] = {
  0x93, 0x1F, 0x17, 0x00, 0x2F, 0x2E, 0x1C, 0x21, 0x26, 0x03, 0x04, 0x00
};



static struct mipi_dsi_cmd nt35521_720p_video_rotation[] = {

};
#define NT35521_720P_VIDEO_ROTATION 0


static struct panel_timing nt35521_720p_video_timing_info = {
  0, 4, 0x20, 0x2D
};

/*---------------------------------------------------------------------------*/
/* Backlight Settings                                                        */
/*---------------------------------------------------------------------------*/

static struct backlight nt35521_720p_video_backlight = {
  1, 1, 255, 100, 2, "PMIC_8941"
};


#endif /*_NT35521_720P_VIDEO_H_*/
