// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (c) 2026
 * Author: Burst_Caster <swer15l23@gmail.com>
 */

#ifndef _DT_BINDINGS_CLK_MT6582_H
#define _DT_BINDINGS_CLK_MT6582_H

/* TOPCKGEN */

/*fixed factor*/
#define CLK_TOP_SYSPLL_D2			0
#define CLK_TOP_SYSPLL_D3			1
#define CLK_TOP_SYSPLL_D5			2
#define CLK_TOP_SYSPLL_D7			3

#define CLK_TOP_SYSPLL1_D2			4
#define CLK_TOP_SYSPLL1_D4			5
#define CLK_TOP_SYSPLL1_D8			6
#define CLK_TOP_SYSPLL1_D16			7
#define CLK_TOP_SYSPLL2_D2			8
#define CLK_TOP_SYSPLL2_D4			9
#define CLK_TOP_SYSPLL2_D8			10

#define CLK_TOP_SYSPLL3_D2			11
#define CLK_TOP_SYSPLL3_D4			12
#define CLK_TOP_SYSPLL4_D2			13

#define CLK_TOP_UNIVPLL_D2			14
#define CLK_TOP_UNIVPLL_D3			15
#define CLK_TOP_UNIVPLL_D5			16
#define CLK_TOP_UNIVPLL_D7			17

#define CLK_TOP_UNIVPLL1_D2			18
#define CLK_TOP_UNIVPLL1_D4			19
#define CLK_TOP_UNIVPLL1_D8			20

#define CLK_TOP_UNIVPLL2_D2			21
#define CLK_TOP_UNIVPLL2_D4			22
#define CLK_TOP_UNIVPLL2_D8			23
#define CLK_TOP_UNIVPLL2_D16			24
#define CLK_TOP_UNIVPLL2_D32			25

#define CLK_TOP_UNIVPLL3_D2			26
#define CLK_TOP_UNIVPLL3_D4			27

#define CLK_TOP_MSDCPLL_D2			28

#define CLK_TOP_MMPLL_D2			29

#define CLK_TOP_DMPLL				30
#define CLK_TOP_DMPLL_D2			31
#define CLK_TOP_DMPLL_D4			32
#define CLK_TOP_DMPLL_X2			33

/*muxes*/
#define CLK_TOP_AXI_SEL				34
#define CLK_TOP_MEM_SEL				35
#define CLK_TOP_DDRPHYCFG_SEL			36
#define CLK_TOP_MM_SEL				37
#define CLK_TOP_PWM_SEL				38
#define CLK_TOP_VDEC_SEL			39
#define CLK_TOP_MFG_SEL				40
#define CLK_TOP_CAMTG_SEL			41
#define CLK_TOP_UART_SEL			42
#define CLK_TOP_SPI_SEL			    	43
#define CLK_TOP_USB20_SEL			44
#define CLK_TOP_MSDC30_0_SEL	    		45
#define CLK_TOP_MSDC30_1_SEL			46
#define CLK_TOP_MSDC30_2_SEL			47
#define CLK_TOP_AUDIO_SEL			48
#define CLK_TOP_AUD_INTBUS_SEL			49
#define CLK_TOP_PMICSPI_SEL			50
#define CLK_TOP_SCP_SEL				51

#define CLK_TOP_NR_CLK			    	52


/* APMIXEDSYS */

#define CLK_APMIXED_ARMPLL			0
#define CLK_APMIXED_MAINPLL			1
#define CLK_APMIXED_UNIVPLL			2
#define CLK_APMIXED_MMPLL			3
#define CLK_APMIXED_MSDCPLL			4

#define CLK_APMIXED_UNIV48M         		5
#define CLK_APMIXED_USB48M          		6


#define CLK_APMIXED_NR_CLK			7


/* DDRPHY */

#define CLK_DDRPHY_VENCPLL			0
#define CLK_DDRPHY_NR_CLK			1


/* INFRACFG */

#define CLK_INFRA_DBG				0
#define CLK_INFRA_SMI				1
#define CLK_INFRA_AUDIO				2
#define CLK_INFRA_EFUSE				3
#define CLK_INFRA_L2C_SRAM			4
#define CLK_INFRA_M4U				5
#define CLK_INFRA_MD1_CR4_AXI       		6
#define CLK_INFRA_MD1_HWMIX_AXI     		7
#define CLK_INFRA_MD1_AHB           		8
#define CLK_INFRA_CONNMCU			9
#define CLK_INFRA_TRNG				10
#define CLK_INFRA_RAMBUFIF			11
#define CLK_INFRA_CPUM				12
#define CLK_INFRA_KP				13
#define CLK_INFRA_CCIF0_AP_CTRL 		14
#define CLK_INFRA_PMICWRAP			15

#define CLK_INFRA_CLK_13M           		16
#define CLK_INFRA_CPUSEL            		17

#define CLK_INFRA_NR_CLK			18

/* PERICFG */

#define CLK_PERI_SPI0				0
#define CLK_PERI_AUXADC				1
#define CLK_PERI_I2C2				2
#define CLK_PERI_I2C1				3
#define CLK_PERI_I2C0				4
#define CLK_PERI_BTIF				5
#define CLK_PERI_UART3				6
#define CLK_PERI_UART2				7
#define CLK_PERI_UART1				8
#define CLK_PERI_UART0				9
#define CLK_PERI_NLI				10
#define CLK_PERI_MSDC30_2			11
#define CLK_PERI_MSDC30_1			12
#define CLK_PERI_MSDC30_0			13
#define CLK_PERI_AP_DMA				14
#define CLK_PERI_USB0				15
#define CLK_PERI_PWM				16
#define CLK_PERI_PWM7				17
#define CLK_PERI_PWM6			    	18
#define CLK_PERI_PWM5				19
#define CLK_PERI_PWM4				20
#define CLK_PERI_PWM3				21
#define CLK_PERI_PWM2				22
#define CLK_PERI_PWM1				23
#define CLK_PERI_THERM				24
#define CLK_PERI_NFI				25
#define CLK_PERI_UART_SEL			26
#define CLK_PERI_NR_CLK			    	27


/* MMSYS */

#define CLK_MM_SMI_COMMON			0
#define CLK_MM_SMI_LARB0			1
#define CLK_MM_CMDQ				2
#define CLK_MM_SMI_CMDQ				3
#define CLK_MM_DISP_COLOR			4
#define CLK_MM_DISP_BLS				5
#define CLK_MM_DISP_WDMA			6
#define CLK_MM_DISP_RDMA			7
#define CLK_MM_DISP_OVL				8
#define CLK_MM_MDP_TDSHP			9
#define CLK_MM_MDP_WROT				10
#define CLK_MM_MDP_WDMA				11
#define CLK_MM_MDP_RSZ1				12
#define CLK_MM_MDP_RSZ0				13
#define CLK_MM_MDP_RDMA				14
#define CLK_MM_MDP_BLS_26M			15
#define CLK_MM_CAM_MDP				16
#define CLK_MM_FAKE_ENG				17
#define CLK_MM_MUTEX_32K			18

#define CLK_MM_DSI_ENGINE			19
#define CLK_MM_DSI_DIG				20
#define CLK_MM_DPI_DIGL				21
#define CLK_MM_DPI_ENGINE			22
#define CLK_MM_NR				23

/* MFGCFG */

#define CLK_MFG_BG3D				0
#define CLK_MFG_NR_CLK				1

/* IMG */

#define CLK_IMG_LARB2_SMI       		0
#define CLK_IMG_SMI             		1
#define CLK_IMG_CAM             		2
#define CLK_IMG_SEN_TG          		3
#define CLK_IMG_SEN_CAM         		4
#define CLK_IMG_VENC_JPEGENC    		5
#define CLK_IMG_NR_CLK          		6

/* VDEC */

#define CLK_VDEC_CKGEN				0
#define CLK_VDEC_LARB				1
#define CLK_VDEC_NR				2


#endif /* _DT_BINDINGS_CLK_MT6582_H */
