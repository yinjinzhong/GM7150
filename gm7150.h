#ifndef __GM7150_H_
#define __GM7150_H_

#define GM7150_STATUS5_REG		0x8c
#define GM7150_STATUS5_IN_LOCK		0x01
#define GM7150_STATUS5_AUTOD_MASK	0x0f
#define GM7150_STATUS5_AUTOD_SWITCH	0x80
#define GM7150_STATUS5_AUTOD_STD		0x00
#define GM7150_STATUS5_AUTOD_NTSC_M_J	0x01
#define GM7150_STATUS5_AUTOD_PAL_B_D_N 0X03
#define GM7150_STATUS5_AUTOD_PAL_M		0X05
#define GM7150_STATUS5_AUTOD_PAL_NC	0X07
#define GM7150_STATUS5_AUTOD_NTSC_4_43 0x09
#define GM7150_STATUS5_AUTOD_SECAM		0x0b

#define GM7150_VD_IN_SRC_SEL_1	0x00
#define GM7150_STATUS_REG_1		0x88 /* Status register #1 */
#define GM7150_REG_BRIGHTNESS	0x09 /* Brightness control */
#define GM7150_REG_SATURATION	0x0a /* Color saturation control */
#define GM7150_REG_HUE			0x0b /* Hue control */
#define GM7150_REG_CONTRAST		0x0c /* Contrast control */

#endif