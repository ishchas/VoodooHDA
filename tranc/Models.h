#include "License.h"

#ifndef _MODELS_H
#define _MODELS_H

#include <IOKit/IOTypes.h>

#define HDA_FLAG_MATCH(fl, v)		(((fl) & (v)) == (v))
#define HDA_DEV_MATCH(fl, v)		((fl) == (v) || (fl) == 0xffffffff || \
		(((fl) & 0xffff0000) == 0xffff0000 && ((fl) & 0x0000ffff) == ((v) & 0x0000ffff)) || \
		(((fl) & 0x0000ffff) == 0x0000ffff && ((fl) & 0xffff0000) == ((v) & 0xffff0000)))
#define HDA_MATCH_ALL				0xffffffff
#define HDAC_INVALID				0xffffffff

#define HDA_MODEL_CONSTRUCT(vendor, model) (((UInt32) (model) << 16) | ((vendor##_VENDORID) & 0xffff))

/* Intel */
#define INTEL_VENDORID				0x8086
#define HDA_INTEL_82801F			HDA_MODEL_CONSTRUCT(INTEL, 0x2668)
#define HDA_INTEL_63XXESB			HDA_MODEL_CONSTRUCT(INTEL, 0x269a)
#define HDA_INTEL_82801G			HDA_MODEL_CONSTRUCT(INTEL, 0x27d8)
#define HDA_INTEL_82801H			HDA_MODEL_CONSTRUCT(INTEL, 0x284b)
#define HDA_INTEL_82801I			HDA_MODEL_CONSTRUCT(INTEL, 0x293e)
#define HDA_INTEL_82801JI			HDA_MODEL_CONSTRUCT(INTEL, 0x3a3e)
#define HDA_INTEL_82801JD			HDA_MODEL_CONSTRUCT(INTEL, 0x3a6e)
#define HDA_INTEL_PCH				HDA_MODEL_CONSTRUCT(INTEL, 0x3b56)
#define HDA_INTEL_SCH				HDA_MODEL_CONSTRUCT(INTEL, 0x811b)
#define HDA_INTEL_ALL				HDA_MODEL_CONSTRUCT(INTEL, 0xffff)

#define INTEL_SCH_HDA_DEVC			0x78
#define INTEL_SCH_HDA_DEVC_NOSNOOP       (0x1<<11)


/* Nvidia */
#define NVIDIA_VENDORID				0x10de
#define HDA_NVIDIA_MCP51			HDA_MODEL_CONSTRUCT(NVIDIA, 0x026c)
#define HDA_NVIDIA_MCP55			HDA_MODEL_CONSTRUCT(NVIDIA, 0x0371)
#define HDA_NVIDIA_MCP61_1			HDA_MODEL_CONSTRUCT(NVIDIA, 0x03e4)
#define HDA_NVIDIA_MCP61_2			HDA_MODEL_CONSTRUCT(NVIDIA, 0x03f0)
#define HDA_NVIDIA_MCP65_1			HDA_MODEL_CONSTRUCT(NVIDIA, 0x044a)
#define HDA_NVIDIA_MCP65_2			HDA_MODEL_CONSTRUCT(NVIDIA, 0x044b)
#define HDA_NVIDIA_MCP67_1			HDA_MODEL_CONSTRUCT(NVIDIA, 0x055c)
#define HDA_NVIDIA_MCP67_2			HDA_MODEL_CONSTRUCT(NVIDIA, 0x055d)
#define HDA_NVIDIA_MCP78_1			HDA_MODEL_CONSTRUCT(NVIDIA, 0x0774)
#define HDA_NVIDIA_MCP78_2			HDA_MODEL_CONSTRUCT(NVIDIA, 0x0775)
#define HDA_NVIDIA_MCP78_3			HDA_MODEL_CONSTRUCT(NVIDIA, 0x0776)
#define HDA_NVIDIA_MCP78_4			HDA_MODEL_CONSTRUCT(NVIDIA, 0x0777)
#define HDA_NVIDIA_MCP73_1			HDA_MODEL_CONSTRUCT(NVIDIA, 0x07fc)
#define HDA_NVIDIA_MCP73_2			HDA_MODEL_CONSTRUCT(NVIDIA, 0x07fd)
#define HDA_NVIDIA_MCP79_1			HDA_MODEL_CONSTRUCT(NVIDIA, 0x0ac0)
#define HDA_NVIDIA_MCP79_2			HDA_MODEL_CONSTRUCT(NVIDIA, 0x0ac1)
#define HDA_NVIDIA_MCP79_3			HDA_MODEL_CONSTRUCT(NVIDIA, 0x0ac2)
#define HDA_NVIDIA_MCP79_4			HDA_MODEL_CONSTRUCT(NVIDIA, 0x0ac3)
#define HDA_NVIDIA_MCP89_1			HDA_MODEL_CONSTRUCT(NVIDIA, 0x0d94)
#define HDA_NVIDIA_MCP89_2			HDA_MODEL_CONSTRUCT(NVIDIA, 0x0d95)
#define HDA_NVIDIA_MCP89_3			HDA_MODEL_CONSTRUCT(NVIDIA, 0x0d96)
#define HDA_NVIDIA_MCP89_4			HDA_MODEL_CONSTRUCT(NVIDIA, 0x0d97)
#define HDA_NVIDIA_ALL				HDA_MODEL_CONSTRUCT(NVIDIA, 0xffff)

/* ATI */
#define ATI_VENDORID				0x1002
#define HDA_ATI_SB450				HDA_MODEL_CONSTRUCT(ATI, 0x437b)
#define HDA_ATI_SB600				HDA_MODEL_CONSTRUCT(ATI, 0x4383)
#define HDA_ATI_RS600				HDA_MODEL_CONSTRUCT(ATI, 0x793b)
#define HDA_ATI_RS690				HDA_MODEL_CONSTRUCT(ATI, 0x7919)
#define HDA_ATI_RS780				HDA_MODEL_CONSTRUCT(ATI, 0x960f)
#define HDA_ATI_R600				HDA_MODEL_CONSTRUCT(ATI, 0xaa00)
#define HDA_ATI_RV630				HDA_MODEL_CONSTRUCT(ATI, 0xaa08)
#define HDA_ATI_RV610				HDA_MODEL_CONSTRUCT(ATI, 0xaa10)
#define HDA_ATI_RV670				HDA_MODEL_CONSTRUCT(ATI, 0xaa18)
#define HDA_ATI_RV635				HDA_MODEL_CONSTRUCT(ATI, 0xaa20)
#define HDA_ATI_RV620				HDA_MODEL_CONSTRUCT(ATI, 0xaa28)
#define HDA_ATI_RV770				HDA_MODEL_CONSTRUCT(ATI, 0xaa30)
#define HDA_ATI_RV730				HDA_MODEL_CONSTRUCT(ATI, 0xaa38)
#define HDA_ATI_RV710				HDA_MODEL_CONSTRUCT(ATI, 0xaa40)
#define HDA_ATI_RV740				HDA_MODEL_CONSTRUCT(ATI, 0xaa48)
#define HDA_ATI_ALL					HDA_MODEL_CONSTRUCT(ATI, 0xffff)

/* VIA */
#define VIA_VENDORID				0x1106
#define HDA_VIA_VT82XX				HDA_MODEL_CONSTRUCT(VIA, 0x3288)
#define HDA_VIA_ALL					HDA_MODEL_CONSTRUCT(VIA, 0xffff)

/* SiS */
#define SIS_VENDORID				0x1039
#define HDA_SIS_966					HDA_MODEL_CONSTRUCT(SIS, 0x7502)
#define HDA_SIS_ALL					HDA_MODEL_CONSTRUCT(SIS, 0xffff)

/* ULI */
#define ULI_VENDORID				0x10b9
#define HDA_ULI_M5461				HDA_MODEL_CONSTRUCT(ULI, 0x5461)
#define HDA_ULI_ALL					HDA_MODEL_CONSTRUCT(ULI, 0xffff)

/* OEM/subvendors */

/* Intel */
#define INTEL_D101GGC_SUBVENDOR		HDA_MODEL_CONSTRUCT(INTEL, 0xd600)

/* HP/Compaq */
#define HP_VENDORID					0x103c
#define HP_V3000_SUBVENDOR			HDA_MODEL_CONSTRUCT(HP, 0x30b5)
#define HP_NX7400_SUBVENDOR			HDA_MODEL_CONSTRUCT(HP, 0x30a2)
#define HP_NX6310_SUBVENDOR			HDA_MODEL_CONSTRUCT(HP, 0x30aa)
#define HP_NX6325_SUBVENDOR			HDA_MODEL_CONSTRUCT(HP, 0x30b0)
#define HP_XW4300_SUBVENDOR			HDA_MODEL_CONSTRUCT(HP, 0x3013)
#define HP_3010_SUBVENDOR			HDA_MODEL_CONSTRUCT(HP, 0x3010)
#define HP_DV5000_SUBVENDOR			HDA_MODEL_CONSTRUCT(HP, 0x30a5)
#define HP_DC7700S_SUBVENDOR		HDA_MODEL_CONSTRUCT(HP, 0x2801)
#define HP_DC7700_SUBVENDOR			HDA_MODEL_CONSTRUCT(HP, 0x2802)
#define HP_ALL_SUBVENDOR			HDA_MODEL_CONSTRUCT(HP, 0xffff)
/* What is wrong with XN 2563 anyway? (Got the picture ?) */
#define HP_NX6325_SUBVENDORX		0x103c30b0

/* Dell */
#define DELL_VENDORID				0x1028
#define DELL_D630_SUBVENDOR			HDA_MODEL_CONSTRUCT(DELL, 0x01f9)
#define DELL_D820_SUBVENDOR			HDA_MODEL_CONSTRUCT(DELL, 0x01cc)
#define DELL_V1400_SUBVENDOR		HDA_MODEL_CONSTRUCT(DELL, 0x0227)
#define DELL_V1500_SUBVENDOR		HDA_MODEL_CONSTRUCT(DELL, 0x0228)
#define DELL_I1300_SUBVENDOR		HDA_MODEL_CONSTRUCT(DELL, 0x01c9)
#define DELL_XPSM1210_SUBVENDOR		HDA_MODEL_CONSTRUCT(DELL, 0x01d7)
#define DELL_OPLX745_SUBVENDOR		HDA_MODEL_CONSTRUCT(DELL, 0x01da)
#define DELL_ALL_SUBVENDOR			HDA_MODEL_CONSTRUCT(DELL, 0xffff)

/* Clevo */
#define CLEVO_VENDORID				0x1558
#define CLEVO_D900T_SUBVENDOR		HDA_MODEL_CONSTRUCT(CLEVO, 0x0900)
#define CLEVO_ALL_SUBVENDOR			HDA_MODEL_CONSTRUCT(CLEVO, 0xffff)

/* Acer */
#define ACER_VENDORID				0x1025
#define ACER_A5050_SUBVENDOR		HDA_MODEL_CONSTRUCT(ACER, 0x010f)
#define ACER_A4520_SUBVENDOR		HDA_MODEL_CONSTRUCT(ACER, 0x0127)
#define ACER_A4710_SUBVENDOR		HDA_MODEL_CONSTRUCT(ACER, 0x012f)
#define ACER_A4715_SUBVENDOR		HDA_MODEL_CONSTRUCT(ACER, 0x0133)
#define ACER_3681WXM_SUBVENDOR		HDA_MODEL_CONSTRUCT(ACER, 0x0110)
#define ACER_T6292_SUBVENDOR		HDA_MODEL_CONSTRUCT(ACER, 0x011b)
#define ACER_T5320_SUBVENDOR		HDA_MODEL_CONSTRUCT(ACER, 0x011f)
#define ACER_ALL_SUBVENDOR			HDA_MODEL_CONSTRUCT(ACER, 0xffff)

/* Asus */
#define ASUS_VENDORID				0x1043
#define ASUS_A8X_SUBVENDOR			HDA_MODEL_CONSTRUCT(ASUS, 0x1153)
#define ASUS_U5F_SUBVENDOR			HDA_MODEL_CONSTRUCT(ASUS, 0x1263)
#define ASUS_W6F_SUBVENDOR			HDA_MODEL_CONSTRUCT(ASUS, 0x1263)
#define ASUS_A7M_SUBVENDOR			HDA_MODEL_CONSTRUCT(ASUS, 0x1323)
#define ASUS_F3JC_SUBVENDOR			HDA_MODEL_CONSTRUCT(ASUS, 0x1338)
#define ASUS_G2K_SUBVENDOR			HDA_MODEL_CONSTRUCT(ASUS, 0x1339)
#define ASUS_A7T_SUBVENDOR			HDA_MODEL_CONSTRUCT(ASUS, 0x13c2)
#define ASUS_W2J_SUBVENDOR			HDA_MODEL_CONSTRUCT(ASUS, 0x1971)
#define ASUS_M5200_SUBVENDOR		HDA_MODEL_CONSTRUCT(ASUS, 0x1993)
#define ASUS_P5PL2_SUBVENDOR		HDA_MODEL_CONSTRUCT(ASUS, 0x817f)
#define ASUS_P1AH2_SUBVENDOR		HDA_MODEL_CONSTRUCT(ASUS, 0x81cb)
#define ASUS_M2NPVMX_SUBVENDOR		HDA_MODEL_CONSTRUCT(ASUS, 0x81cb)
#define ASUS_M2V_SUBVENDOR			HDA_MODEL_CONSTRUCT(ASUS, 0x81e7)
#define ASUS_P5BWD_SUBVENDOR		HDA_MODEL_CONSTRUCT(ASUS, 0x81ec)
#define ASUS_M2N_SUBVENDOR			HDA_MODEL_CONSTRUCT(ASUS, 0x8234)
#define ASUS_A8NVMCSM_SUBVENDOR		HDA_MODEL_CONSTRUCT(NVIDIA, 0xcb84)
#define ASUS_ALL_SUBVENDOR			HDA_MODEL_CONSTRUCT(ASUS, 0xffff)

/* IBM / Lenovo */
#define IBM_VENDORID				0x1014
#define IBM_M52_SUBVENDOR			HDA_MODEL_CONSTRUCT(IBM, 0x02f6)
#define IBM_ALL_SUBVENDOR			HDA_MODEL_CONSTRUCT(IBM, 0xffff)

/* Lenovo */
#define LENOVO_VENDORID				0x17aa
#define LENOVO_3KN100_SUBVENDOR		HDA_MODEL_CONSTRUCT(LENOVO, 0x2066)
#define LENOVO_3KN200_SUBVENDOR		HDA_MODEL_CONSTRUCT(LENOVO, 0x384e)
#define LENOVO_TCA55_SUBVENDOR		HDA_MODEL_CONSTRUCT(LENOVO, 0x1015)
#define LENOVO_ALL_SUBVENDOR		HDA_MODEL_CONSTRUCT(LENOVO, 0xffff)

/* Samsung */
#define SAMSUNG_VENDORID			0x144d
#define SAMSUNG_Q1_SUBVENDOR		HDA_MODEL_CONSTRUCT(SAMSUNG, 0xc027)
#define SAMSUNG_ALL_SUBVENDOR		HDA_MODEL_CONSTRUCT(SAMSUNG, 0xffff)

/* Medion ? */
#define MEDION_VENDORID				0x161f
#define MEDION_MD95257_SUBVENDOR	HDA_MODEL_CONSTRUCT(MEDION, 0x203d)
#define MEDION_ALL_SUBVENDOR		HDA_MODEL_CONSTRUCT(MEDION, 0xffff)

/* Apple Computer Inc. */
#define APPLE_VENDORID				0x106b
#define APPLE_MB3_SUBVENDOR			HDA_MODEL_CONSTRUCT(APPLE, 0x00a1)

/* Sony */
#define SONY_VENDORID				0x104d
#define SONY_S5_SUBVENDOR			HDA_MODEL_CONSTRUCT(SONY, 0x81cc)
#define SONY_ALL_SUBVENDOR			HDA_MODEL_CONSTRUCT(SONY, 0xffff)

/*
 * Apple Intel MacXXXX seems using Sigmatel codec/vendor id
 * instead of their own, which is beyond my comprehension
 * (see HDA_CODEC_STAC9221 below).
 */
#define APPLE_INTEL_MAC				0x76808384
#define APPLE_MACBOOKPRO55			0xcb7910de


/* LG Electronics */
#define LG_VENDORID					0x1854
#define LG_LW20_SUBVENDOR			HDA_MODEL_CONSTRUCT(LG, 0x0018)
#define LG_ALL_SUBVENDOR			HDA_MODEL_CONSTRUCT(LG, 0xffff)

/* Fujitsu Siemens */
#define FS_VENDORID					0x1734
#define FS_PA1510_SUBVENDOR			HDA_MODEL_CONSTRUCT(FS, 0x10b8)
#define FS_SI1848_SUBVENDOR			HDA_MODEL_CONSTRUCT(FS, 0x10cd)
#define FS_ALL_SUBVENDOR			HDA_MODEL_CONSTRUCT(FS, 0xffff)

/* Fujitsu Limited */
#define FL_VENDORID					0x10cf
#define FL_S7020D_SUBVENDOR			HDA_MODEL_CONSTRUCT(FL, 0x1326)
#define FL_U1010_SUBVENDOR			HDA_MODEL_CONSTRUCT(FL, 0x142d)
#define FL_ALL_SUBVENDOR			HDA_MODEL_CONSTRUCT(FL, 0xffff)

/* Toshiba */
#define TOSHIBA_VENDORID			0x1179
#define TOSHIBA_U200_SUBVENDOR		HDA_MODEL_CONSTRUCT(TOSHIBA, 0x0001)
#define TOSHIBA_A135_SUBVENDOR		HDA_MODEL_CONSTRUCT(TOSHIBA, 0xff01)
#define TOSHIBA_ALL_SUBVENDOR		HDA_MODEL_CONSTRUCT(TOSHIBA, 0xffff)

/* Micro-Star International (MSI) */
#define MSI_VENDORID				0x1462
#define MSI_MS1034_SUBVENDOR		HDA_MODEL_CONSTRUCT(MSI, 0x0349)
#define MSI_MS034A_SUBVENDOR		HDA_MODEL_CONSTRUCT(MSI, 0x034a)
#define MSI_ALL_SUBVENDOR			HDA_MODEL_CONSTRUCT(MSI, 0xffff)

/* Giga-Byte Technology */
#define GB_VENDORID					0x1458
#define GB_G33S2H_SUBVENDOR			HDA_MODEL_CONSTRUCT(GB, 0xa022)
#define GP_ALL_SUBVENDOR			HDA_MODEL_CONSTRUCT(GB, 0xffff)

/* Uniwill ? */
#define UNIWILL_VENDORID			0x1584
#define UNIWILL_9075_SUBVENDOR		HDA_MODEL_CONSTRUCT(UNIWILL, 0x9075)
#define UNIWILL_9080_SUBVENDOR		HDA_MODEL_CONSTRUCT(UNIWILL, 0x9080)

/********************************************************************************/
/********************************************************************************/

/* All codecs you can eat... */
#define HDA_CODEC_CONSTRUCT(vendor, id) (((UInt32) (vendor##_VENDORID) << 16) | ((id) & 0xffff))

/* Cirrus Logic */
#define CIRRUSLOGIC_VENDORID	0x1013
#define HDA_CODEC_CS4206	HDA_CODEC_CONSTRUCT(CIRRUSLOGIC, 0x4206)
#define HDA_CODEC_CS4207	HDA_CODEC_CONSTRUCT(CIRRUSLOGIC, 0x4207)
#define HDA_CODEC_CSXXXX	HDA_CODEC_CONSTRUCT(CIRRUSLOGIC, 0xffff)


/* Realtek */
#define REALTEK_VENDORID			0x10ec
#define HDA_CODEC_ALC260			HDA_CODEC_CONSTRUCT(REALTEK, 0x0260)
#define HDA_CODEC_ALC262			HDA_CODEC_CONSTRUCT(REALTEK, 0x0262)
#define HDA_CODEC_ALC267			HDA_CODEC_CONSTRUCT(REALTEK, 0x0267)
#define HDA_CODEC_ALC268			HDA_CODEC_CONSTRUCT(REALTEK, 0x0268)
#define HDA_CODEC_ALC269			HDA_CODEC_CONSTRUCT(REALTEK, 0x0269)
#define HDA_CODEC_ALC270			HDA_CODEC_CONSTRUCT(REALTEK, 0x0270)
#define HDA_CODEC_ALC272			HDA_CODEC_CONSTRUCT(REALTEK, 0x0272)
#define HDA_CODEC_ALC273			HDA_CODEC_CONSTRUCT(REALTEK, 0x0273)
#define HDA_CODEC_ALC275			HDA_CODEC_CONSTRUCT(REALTEK, 0x0275)
#define HDA_CODEC_ALC660			HDA_CODEC_CONSTRUCT(REALTEK, 0x0660)
#define HDA_CODEC_ALC662			HDA_CODEC_CONSTRUCT(REALTEK, 0x0662)
#define HDA_CODEC_ALC663			HDA_CODEC_CONSTRUCT(REALTEK, 0x0663)
#define HDA_CODEC_ALC665			HDA_CODEC_CONSTRUCT(REALTEK, 0x0665)
#define HDA_CODEC_ALC861			HDA_CODEC_CONSTRUCT(REALTEK, 0x0861)
#define HDA_CODEC_ALC861VD			HDA_CODEC_CONSTRUCT(REALTEK, 0x0862)
#define HDA_CODEC_ALC880			HDA_CODEC_CONSTRUCT(REALTEK, 0x0880)
#define HDA_CODEC_ALC882			HDA_CODEC_CONSTRUCT(REALTEK, 0x0882)
#define HDA_CODEC_ALC883			HDA_CODEC_CONSTRUCT(REALTEK, 0x0883)
#define HDA_CODEC_ALC885			HDA_CODEC_CONSTRUCT(REALTEK, 0x0885)
#define HDA_CODEC_ALC887			HDA_CODEC_CONSTRUCT(REALTEK, 0x0887)
#define HDA_CODEC_ALC888			HDA_CODEC_CONSTRUCT(REALTEK, 0x0888)
#define HDA_CODEC_ALC889			HDA_CODEC_CONSTRUCT(REALTEK, 0x0889)
#define HDA_CODEC_ALC892			HDA_CODEC_CONSTRUCT(REALTEK, 0x0892)
#define HDA_CODEC_ALCXXXX			HDA_CODEC_CONSTRUCT(REALTEK, 0xffff)

/* Analog Devices */
#define ANALOGDEVICES_VENDORID		0x11d4
#define HDA_CODEC_AD1884A			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x184a)
#define HDA_CODEC_AD1882			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x1882)
#define HDA_CODEC_AD1883			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x1883)
#define HDA_CODEC_AD1884			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x1884)
#define HDA_CODEC_AD1984A			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x194a)
#define HDA_CODEC_AD1984B			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x194b)
#define HDA_CODEC_AD1981HD			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x1981)
#define HDA_CODEC_AD1983			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x1983)
#define HDA_CODEC_AD1984			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x1984)
#define HDA_CODEC_AD1986A			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x1986)
#define HDA_CODEC_AD1987			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x1987)
#define HDA_CODEC_AD1988			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x1988)
#define HDA_CODEC_AD1988B			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x198b)
#define HDA_CODEC_AD1882A			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x882a)
#define HDA_CODEC_AD1989B			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x989b)
#define HDA_CODEC_ADXXXX			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0xffff)

/* CMedia */
#define CMEDIA_VENDORID				0x434d
#define HDA_CODEC_CMI9880			HDA_CODEC_CONSTRUCT(CMEDIA, 0x4980)
#define HDA_CODEC_CMIXXXX			HDA_CODEC_CONSTRUCT(CMEDIA, 0xffff)

/* Sigmatel */
#define SIGMATEL_VENDORID			0x8384
#define HDA_CODEC_STAC9230X			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7612)
#define HDA_CODEC_STAC9230D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7613)
#define HDA_CODEC_STAC9229X			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7614)
#define HDA_CODEC_STAC9229D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7615)
#define HDA_CODEC_STAC9228X			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7616)
#define HDA_CODEC_STAC9228D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7617)
#define HDA_CODEC_STAC9227X			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7618)
#define HDA_CODEC_STAC9227D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7619)
#define HDA_CODEC_STAC9274			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7620)
#define HDA_CODEC_STAC9274D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7621)
#define HDA_CODEC_STAC9273X			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7622)
#define HDA_CODEC_STAC9273D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7623)
#define HDA_CODEC_STAC9272X			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7624)
#define HDA_CODEC_STAC9272D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7625)
#define HDA_CODEC_STAC9271X			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7626)
#define HDA_CODEC_STAC9271D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7627)
#define HDA_CODEC_STAC9274X5NH		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7628)
#define HDA_CODEC_STAC9274D5NH		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7629)
#define HDA_CODEC_STAC9250			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7634)
#define HDA_CODEC_STAC9251			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7636)
#define HDA_CODEC_IDT92HD700X		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7638)
#define HDA_CODEC_IDT92HD700D		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7639)
#define HDA_CODEC_IDT92HD206X		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7645)
#define HDA_CODEC_IDT92HD206D		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7646)
#define HDA_CODEC_CXD9872RDK		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7661)
#define HDA_CODEC_STAC9872AK		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7662)
#define HDA_CODEC_CXD9872AKD		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7664)
#define HDA_CODEC_STAC9221			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7680)
#define HDA_CODEC_STAC922XD			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7681)
#define HDA_CODEC_STAC9221_A2		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7682)
#define HDA_CODEC_STAC9221D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7683)
#define HDA_CODEC_STAC9220			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7690)
#define HDA_CODEC_STAC9200D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7691)
#define HDA_CODEC_IDT92HD005		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7698)
#define HDA_CODEC_IDT92HD005D		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7699)
#define HDA_CODEC_STAC9205X			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x76a0)
#define HDA_CODEC_STAC9205D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x76a1)
#define HDA_CODEC_STAC9204X			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x76a2)
#define HDA_CODEC_STAC9204D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x76a3)
#define HDA_CODEC_STAC9220_A2		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7880)
#define HDA_CODEC_STAC9220_A1		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7882)
#define HDA_CODEC_STACXXXX			HDA_CODEC_CONSTRUCT(SIGMATEL, 0xffff)

/* IDT */
#define IDT_VENDORID				0x111d
#define HDA_CODEC_IDT92HD75BX		HDA_CODEC_CONSTRUCT(IDT, 0x7603)
#define HDA_CODEC_IDT92HD83C1X		HDA_CODEC_CONSTRUCT(IDT, 0x7604)
#define HDA_CODEC_IDT92HD81B1X		HDA_CODEC_CONSTRUCT(IDT, 0x7605)
#define HDA_CODEC_IDT92HD75B3		HDA_CODEC_CONSTRUCT(IDT, 0x7608)
#define HDA_CODEC_IDT92HD73D1		HDA_CODEC_CONSTRUCT(IDT, 0x7674)
#define HDA_CODEC_IDT92HD73C1		HDA_CODEC_CONSTRUCT(IDT, 0x7675)
#define HDA_CODEC_IDT92HD73E1		HDA_CODEC_CONSTRUCT(IDT, 0x7676)
#define HDA_CODEC_IDT92HD71B8		HDA_CODEC_CONSTRUCT(IDT, 0x76b0)
#define HDA_CODEC_IDT92HD71B7		HDA_CODEC_CONSTRUCT(IDT, 0x76b2)
#define HDA_CODEC_IDT92HD71B5		HDA_CODEC_CONSTRUCT(IDT, 0x76b6)
#define HDA_CODEC_IDT92HD83C1C		HDA_CODEC_CONSTRUCT(IDT, 0x76d4)
#define HDA_CODEC_IDT92HD81B1C		HDA_CODEC_CONSTRUCT(IDT, 0x76d5)
#define HDA_CODEC_IDTXXXX			HDA_CODEC_CONSTRUCT(IDT, 0xffff)

/* Silicon Image */
#define SII_VENDORID				0x1095
#define HDA_CODEC_SII1390			HDA_CODEC_CONSTRUCT(SII, 0x1390)
#define HDA_CODEC_SII1392			HDA_CODEC_CONSTRUCT(SII, 0x1392)
#define HDA_CODEC_SIIXXXX			HDA_CODEC_CONSTRUCT(SII, 0xffff)

/* Lucent/Agere */
#define AGERE_VENDORID				0x11c1
#define HDA_CODEC_AGEREXXXX			HDA_CODEC_CONSTRUCT(AGERE, 0xffff)

/* Conexant */
#define CONEXANT_VENDORID			0x14f1
#define HDA_CODEC_CX20549			HDA_CODEC_CONSTRUCT(CONEXANT, 0x5045)
#define HDA_CODEC_CX20551			HDA_CODEC_CONSTRUCT(CONEXANT, 0x5047)
#define HDA_CODEC_CX20561			HDA_CODEC_CONSTRUCT(CONEXANT, 0x5051)
#define HDA_CODEC_CX20582			HDA_CODEC_CONSTRUCT(CONEXANT, 0x5066)
#define HDA_CODEC_CX20583			HDA_CODEC_CONSTRUCT(CONEXANT, 0x5067)
#define HDA_CODEC_CXXXXX			HDA_CODEC_CONSTRUCT(CONEXANT, 0xffff)

/* VIA */
#define HDA_CODEC_VT1708_8			HDA_CODEC_CONSTRUCT(VIA, 0x1708)
#define HDA_CODEC_VT1708_9			HDA_CODEC_CONSTRUCT(VIA, 0x1709)
#define HDA_CODEC_VT1708_A			HDA_CODEC_CONSTRUCT(VIA, 0x170a)
#define HDA_CODEC_VT1708_B			HDA_CODEC_CONSTRUCT(VIA, 0x170b)
#define HDA_CODEC_VT1709_0			HDA_CODEC_CONSTRUCT(VIA, 0xe710)
#define HDA_CODEC_VT1709_1			HDA_CODEC_CONSTRUCT(VIA, 0xe711)
#define HDA_CODEC_VT1709_2			HDA_CODEC_CONSTRUCT(VIA, 0xe712)
#define HDA_CODEC_VT1709_3			HDA_CODEC_CONSTRUCT(VIA, 0xe713)
#define HDA_CODEC_VT1709_4			HDA_CODEC_CONSTRUCT(VIA, 0xe714)
#define HDA_CODEC_VT1709_5			HDA_CODEC_CONSTRUCT(VIA, 0xe715)
#define HDA_CODEC_VT1709_6			HDA_CODEC_CONSTRUCT(VIA, 0xe716)
#define HDA_CODEC_VT1709_7			HDA_CODEC_CONSTRUCT(VIA, 0xe717)
#define HDA_CODEC_VT1708B_0			HDA_CODEC_CONSTRUCT(VIA, 0xe720)
#define HDA_CODEC_VT1708B_1			HDA_CODEC_CONSTRUCT(VIA, 0xe721)
#define HDA_CODEC_VT1708B_2			HDA_CODEC_CONSTRUCT(VIA, 0xe722)
#define HDA_CODEC_VT1708B_3			HDA_CODEC_CONSTRUCT(VIA, 0xe723)
#define HDA_CODEC_VT1708B_4			HDA_CODEC_CONSTRUCT(VIA, 0xe724)
#define HDA_CODEC_VT1708B_5			HDA_CODEC_CONSTRUCT(VIA, 0xe725)
#define HDA_CODEC_VT1708B_6			HDA_CODEC_CONSTRUCT(VIA, 0xe726)
#define HDA_CODEC_VT1708B_7			HDA_CODEC_CONSTRUCT(VIA, 0xe727)
#define HDA_CODEC_VT1708S_0			HDA_CODEC_CONSTRUCT(VIA, 0x0397)
#define HDA_CODEC_VT1708S_1			HDA_CODEC_CONSTRUCT(VIA, 0x1397)
#define HDA_CODEC_VT1708S_2			HDA_CODEC_CONSTRUCT(VIA, 0x2397)
#define HDA_CODEC_VT1708S_3			HDA_CODEC_CONSTRUCT(VIA, 0x3397)
#define HDA_CODEC_VT1708S_4			HDA_CODEC_CONSTRUCT(VIA, 0x4397)
#define HDA_CODEC_VT1708S_5			HDA_CODEC_CONSTRUCT(VIA, 0x5397)
#define HDA_CODEC_VT1708S_6			HDA_CODEC_CONSTRUCT(VIA, 0x6397)
#define HDA_CODEC_VT1708S_7			HDA_CODEC_CONSTRUCT(VIA, 0x7397)
#define HDA_CODEC_VT1702_0			HDA_CODEC_CONSTRUCT(VIA, 0x0398)
#define HDA_CODEC_VT1702_1			HDA_CODEC_CONSTRUCT(VIA, 0x1398)
#define HDA_CODEC_VT1702_2			HDA_CODEC_CONSTRUCT(VIA, 0x2398)
#define HDA_CODEC_VT1702_3			HDA_CODEC_CONSTRUCT(VIA, 0x3398)
#define HDA_CODEC_VT1702_4			HDA_CODEC_CONSTRUCT(VIA, 0x4398)
#define HDA_CODEC_VT1702_5			HDA_CODEC_CONSTRUCT(VIA, 0x5398)
#define HDA_CODEC_VT1702_6			HDA_CODEC_CONSTRUCT(VIA, 0x6398)
#define HDA_CODEC_VT1702_7			HDA_CODEC_CONSTRUCT(VIA, 0x7398)
#define HDA_CODEC_VT1716S_0			HDA_CODEC_CONSTRUCT(VIA, 0x0433)
#define HDA_CODEC_VT1716S_1			HDA_CODEC_CONSTRUCT(VIA, 0xa721)
#define HDA_CODEC_VT1718S_0			HDA_CODEC_CONSTRUCT(VIA, 0x0428)
#define HDA_CODEC_VT1718S_1			HDA_CODEC_CONSTRUCT(VIA, 0x4428)
#define HDA_CODEC_VT1812			HDA_CODEC_CONSTRUCT(VIA, 0x0448)
#define HDA_CODEC_VT1818S			HDA_CODEC_CONSTRUCT(VIA, 0x0440)
#define HDA_CODEC_VT1828S			HDA_CODEC_CONSTRUCT(VIA, 0x4441)
#define HDA_CODEC_VT2002P_0			HDA_CODEC_CONSTRUCT(VIA, 0x0438)
#define HDA_CODEC_VT2002P_1			HDA_CODEC_CONSTRUCT(VIA, 0x4438)
#define HDA_CODEC_VT2020			HDA_CODEC_CONSTRUCT(VIA, 0x0441)
#define HDA_CODEC_VTXXXX			HDA_CODEC_CONSTRUCT(VIA, 0xffff)

/* ATI */
#define HDA_CODEC_ATIRS600_1		HDA_CODEC_CONSTRUCT(ATI, 0x793c)
#define HDA_CODEC_ATIRS600_2		HDA_CODEC_CONSTRUCT(ATI, 0x7919)
#define HDA_CODEC_ATIRS690			HDA_CODEC_CONSTRUCT(ATI, 0x791a)
#define HDA_CODEC_ATIR6XX			HDA_CODEC_CONSTRUCT(ATI, 0xaa01)
#define HDA_CODEC_ATIXXXX			HDA_CODEC_CONSTRUCT(ATI, 0xffff)

/* NVIDIA */
#define HDA_CODEC_NVIDIAMCP78		HDA_CODEC_CONSTRUCT(NVIDIA, 0x0002)
#define HDA_CODEC_NVIDIAMCP78_2		HDA_CODEC_CONSTRUCT(NVIDIA, 0x0006)
#define HDA_CODEC_NVIDIAMCP7A		HDA_CODEC_CONSTRUCT(NVIDIA, 0x0007)
#define HDA_CODEC_NVIDIAMCP67		HDA_CODEC_CONSTRUCT(NVIDIA, 0x0067)
#define HDA_CODEC_NVIDIAMCP73		HDA_CODEC_CONSTRUCT(NVIDIA, 0x8001)
#define HDA_CODEC_NVIDIAXXXX		HDA_CODEC_CONSTRUCT(NVIDIA, 0xffff)

/* INTEL */
#define HDA_CODEC_INTELG45_1		HDA_CODEC_CONSTRUCT(INTEL, 0x2801)
#define HDA_CODEC_INTELG45_2		HDA_CODEC_CONSTRUCT(INTEL, 0x2802)
#define HDA_CODEC_INTELG45_3		HDA_CODEC_CONSTRUCT(INTEL, 0x2803)
#define HDA_CODEC_INTELG45_4		HDA_CODEC_CONSTRUCT(INTEL, 0x2804)
#define HDA_CODEC_INTELG45_5		HDA_CODEC_CONSTRUCT(INTEL, 0x29fb)
#define HDA_CODEC_INTELQ57			HDA_CODEC_CONSTRUCT(INTEL, 0x0054)
#define HDA_CODEC_INTELXXXX			HDA_CODEC_CONSTRUCT(INTEL, 0xffff)

#endif