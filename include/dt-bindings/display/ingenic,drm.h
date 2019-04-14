/* SPDX-License-Identifier: GPL-2.0 */
/*
 *  Ingenic JZ47xx KMS driver
 *
 *  Copyright (C) 2019, Paul Cercueil <paul@crapouillou.net>
 */
#ifndef __INCLUDE_DT_BINDINGS_DISPLAY_INGENIC_DRM_H__
#define __INCLUDE_DT_BINDINGS_DISPLAY_INGENIC_DRM_H__

#define JZ_LCD_GENERIC_16BIT			0
#define JZ_LCD_GENERIC_18BIT			16

#define JZ_LCD_SPECIAL_TFT_1			1
#define JZ_LCD_SPECIAL_TFT_2			2
#define JZ_LCD_SPECIAL_TFT_3			3

#define JZ_LCD_NON_INTERLACED_TV_OUT		4
#define JZ_LCD_INTERLACED_TV_OUT		6

#define JZ_LCD_SINGLE_COLOR_STN			8
#define JZ_LCD_SINGLE_MONOCHROME_STN		9
#define JZ_LCD_DUAL_COLOR_STN			10
#define JZ_LCD_DUAL_MONOCHROME_STN		11

#define JZ_LCD_8BIT_SERIAL			12
#define JZ_LCD_LCM				13

#endif /* __INCLUDE_DT_BINDINGS_DISPLAY_INGENIC_DRM_H__ */
