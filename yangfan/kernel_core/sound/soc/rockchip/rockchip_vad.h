/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Rockchip VAD driver
 *
 * Copyright (C) 2018 Fuzhou Rockchip Electronics Co., Ltd.
 *
 */


#ifndef _ROCKCHIP_VAD_H
#define _ROCKCHIP_VAD_H

#define VAD_CTRL			0x00
#define VAD_DET_CHNL_SHIFT		29
#define VAD_DET_CHNL_MASK		GENMASK(31, 29)
#define VAD_DET_CHNL(x)			((x) << VAD_DET_CHNL_SHIFT)
#define AUDIO_24BIT_SAT_SHIFT		28
#define AUDIO_24BIT_SAT_MASK		BIT(28)
#define AUDIO_H16B			0
#define AUDIO_SAT_24TO16		BIT(28)
#define AUDIO_24BIT_ALIGN_MODE_SHIFT	27
#define AUDIO_24BIT_ALIGN_MODE_MASK	BIT(27)
#define AUDIO_24BIT_ALIGN_8_31B		0
#define AUDIO_24BIT_ALIGN_0_23B		BIT(27)
#define AUDIO_CHNL_BW_SHIFT		26
#define AUDIO_CHNL_BW_MASK		BIT(26)
#define AUDIO_CHNL_16B			0
#define AUDIO_CHNL_24B			BIT(26)
#define AUDIO_CHNL_NUM_SHIFT		23
#define AUDIO_CHNL_NUM_MASK		GENMASK(25, 23)
#define AUDIO_CHNL_NUM(x)		(((x) - 1) << AUDIO_CHNL_NUM_SHIFT)
#define CFG_ACODE_AFTER_DET_EN_SHIFT	22
#define CFG_ACODE_AFTER_DET_EN_MASK	BIT(22)
#define CFG_ACODE_AFTER_DET_EN		BIT(22)
#define VAD_MODE_SHIFT			20
#define VAD_MODE_MASK			GENMASK(21, 20)
#define STORE_DATA_VAD_DET_ONLY		0
#define STORE_DATA_ALL			(1 << VAD_MODE_SHIFT)
#define NO_STORE_DATA			(2 << VAD_MODE_SHIFT)
#define ACODE_CFG_REG_NUM_SHIFT		15
#define ACODE_CFG_REG_NUM_MASK		GENMASK(19, 15)
#define ACODE_CFG_REG_NUM(x)		(((x) - 1) << ACODE_CFG_REG_NUM_SHIFT)
#define SRC_ADDR_MODE_SHIFT		14
#define SRC_ADDR_MODE_MASK		BIT(14)
#define SRC_ADDR_MODE_INC		0
#define SRC_ADDR_MODE_FIXED		BIT(14)
#define INCR_BURST_LEN_SHIFT		10
#define INCR_BURST_LEN_MASK		GENMASK(13, 10)
#define INCR_BURST_LEN(x)		(((x) - 1) << INCR_BURST_LEN_SHIFT)
#define SRC_BURST_NUM_SHIFT		7
#define SRC_BURST_NUM_MASK		GENMASK(9, 7)
#define SRC_BURST_NUM(x)		(((x) - 1) << SRC_BURST_NUM_SHIFT)
#define SRC_BURST_SHIFT			4
#define SRC_BURST_MASK			GENMASK(6, 4)
#define SRC_BURST_SIGNLE		0
#define SRC_BURST_INCR			(1 << SRC_BURST_SHIFT)
#define SRC_BURST_INCR4			(3 << SRC_BURST_SHIFT)
#define SRC_BURST_INCR8			(5 << SRC_BURST_SHIFT)
#define SRC_BURST_INCR16		(7 << SRC_BURST_SHIFT)
#define AUDIO_SRC_SEL_SHIFT		1
#define AUDIO_SRC_SEL_MASK		GENMASK(3, 1)
#define AUDIO_SRC_SEL_I2S0		0
#define AUDIO_SRC_SEL_I2S1		(1 << AUDIO_SRC_SEL_MASK)
#define AUDIO_SRC_SEL_I2S2		(2 << AUDIO_SRC_SEL_MASK)
#define AUDIO_SRC_SEL_I2S3		(3 << AUDIO_SRC_SEL_MASK)
#define AUDIO_SRC_SEL_PDM		(4 << AUDIO_SRC_SEL_MASK)
#define VAD_EN_SHIFT			0
#define VAD_EN_MASK			BIT(0)
#define VAD_EN				BIT(0)
#define VAD_DISABLE			0
#define VAD_IS_ADDR			4
#define VAD_ID_ADDR			8
#define VAD_OD_ADDR0			0x0c
#define VAD_OD_ADDR1			0x10
#define VAD_OD_ADDR2			0x14
#define VAD_OD_ADDR3			0x18
#define VAD_OD_ADDR4			0x1c
#define VAD_OD_ADDR5			0x20
#define VAD_OD_ADDR6			0x24
#define VAD_OD_ADDR7			0x28
#define VAD_D_DATA0			0x2c
#define VAD_D_DATA1			0x30
#define VAD_D_DATA2			0x34
#define VAD_D_DATA3			0x38
#define VAD_D_DATA4			0x3c
#define VAD_D_DATA5			0x40
#define VAD_D_DATA6			0x44
#define VAD_D_DATA7			0x48

#define VAD_TIMEOUT			0x4c
#define WORK_TIMEOUT_EN_MASK		BIT(31)
#define WORK_TIMEOUT_EN			BIT(31)
#define WORK_TIMEOUT_DISABLE		0
#define IDLE_TIMEOUT_EN_MASK		BIT(30)
#define IDLE_TIMEOUT_EN			BIT(30)
#define IDLE_TIMEOUT_DISABLE		0
#define WORK_TIMEOUT_THD_SHIFT		20
#define WORK_TIMEOUT_THD_MASK		GENMASK(29, 20)
#define WORK_TIMEOUT_THD(x)		((x) << WORK_TIMEOUT_THD_SHIFT)
#define IDLE_TIMEOUT_THD_SHIFT		0
#define IDLE_TIMEOUT_THD_MASK		GENMASK(19, 0)
#define IDLE_TIMEOUT_THD(x)		((x) << IDLE_TIMEOUT_THD_SHIFT)

#define VAD_RAM_BEGIN_ADDR		0x50
#define VAD_RAM_END_ADDR		0x54
#define VAD_RAM_CUR_ADDR		0x58
#define VAD_DET_CON0			0x5c
#define VAD_CON_THD_SHIFT		16
#define VAD_CON_THD_MASK		GENMASK(23, 16)
#define VAD_CON_THD(x)			((x) << VAD_CON_THD_SHIFT)
#define NOISE_LEVEL_SHIFT		12
#define NOISE_LEVEL_MASK		GENMASK(14, 12)
#define NOISE_LEVEL(x)			((x) << NOISE_LEVEL_SHIFT)
#define GAIN_SHIFT			0
#define GAIN_MASK			GENMASK(9, 0)
#define GAIN(x)				(x)

#define VAD_DET_CON1			0x60
#define MIN_NOISE_FIND_MODE_SHIFT	30
#define MIN_NOISE_FIN_MODE_MASK		BIT(30)
#define MIN_NOISE_FIND_MODE0		0
#define MIN_NOISE_FIND_MODE1		BIT(30)
#define NOISE_CLEAN_MODE_SHIFT		29
#define NOISE_CLEAN_MODE_MASK		BIT(29)
#define NOISE_CLEAN_MODE0		0
#define NOISE_CLEAN_MODE1		BIT(29)
#define NOISE_CLK_FORCE_EN_MASK		BIT(28)
#define NOISE_CLK_AUTO_GATING		0
#define NOISE_CLK_FORCE_EN		BIT(28)
#define NOISE_SAMPLE_NUM_SHIFT		16
#define NOISE_SAMPLE_NUM_MASK		GENMASK(25, 16)
#define NOISE_SAMPLE_NUM		((x) << NOISE_SAMPLE_NUM_SHIFT)
#define SOUND_THD_MASK			GENMASK(15, 0)
#define SOUND_THD(x)			(x)

#define VAD_DET_CON2			0x64
#define IIR_B0_SHIFT			16
#define IIR_B0_MASK			GENMASK(31, 16)
#define IIR_B0(x)			((x) << IIR_B0_SHIFT)
#define NOISE_ALPHA_SHIFT		8
#define NOISE_ALPHA_MASK		GENMASK(15, 8)
#define NOISE_ALPHA(x)			((x) << NOISE_ALPHA_SHIFT)
#define NOISE_FRM_NUM_MASK		GENMASK(6, 0)
#define NOISE_FRM_NUM(x)		(x)

#define VAD_DET_CON3			0x68
#define IIR_B2_MASK			GENMASK(31, 16)
#define IIR_B2(x)			((x) << 16)
#define IIR_B1_MASK			GENMASK(15, 0)
#define IIR_B1(x)			(x)

#define VAD_DET_CON4			0x6c
#define IIR_A2_MASK			GENMASK(31, 16)
#define IIR_A2(x)			((x) << 16)
#define IIR_A1_MASK			GENMASK(15, 0)
#define IIR_A1(x)			(x)

#define VAD_DET_CON5			0x70
#define IIR_RESULT_SHIFT		16
#define IIR_RESULT_MASK			GENMASK(31, 16)
#define NOISE_ABS_MASK			GENMASK(15, 0)
#define NOISE_ABS(x)			(x)

#define VAD_INT				0x74
#define VAD_DATA_TRANS_INT_FLAG_MASK	BIT(11)
#define VAD_DATA_TRANS_INT_EN_MASK	BIT(10)
#define VAD_DATA_TRANS_INT_EN		BIT(10)
#define VAD_IDLE_MASK			BIT(9)
#define RAM_LOOP_FLGA_MASK		BIT(8)
#define WORK_TIMEOUT_FLAG_MASK		BIT(7)
#define IDLE_TIMEOUT_FLAG_MASK		BIT(6)
#define ERR_INT_FLAG_MASK		BIT(5)
#define VAD_DET_INT_FLAG_MASK		BIT(4)
#define WORK_TIMEOUT_INT_EN_MASK	BIT(3)
#define WORK_TIMEOUT_INT_EN		BIT(3)
#define IDLE_TIMEOUT_INT_EN_MASK	BIT(2)
#define IDLE_TIMEOUT_INT_EN		BIT(2)
#define ERR_INT_EN_MASK			BIT(1)
#define ERR_INT_EN			BIT(1)
#define VAD_DET_INT_EN_MASK		BIT(0)
#define VAD_DET_INT_EN			BIT(0)

#define VAD_AUX_CONTROL			0x78
#define SAMPLE_CNT_EN_MASK		BIT(29)
#define SAMPLE_CNT_EN			BIT(29)
#define SAMPLE_CNT_DIS			0
#define INT_TRIG_CTRL_EN_MASK		BIT(28)
#define INT_TRIG_CTRL_EN		BIT(28)
#define INT_TRIG_CTRL_DIS		0
#define INT_TRIG_VALID_THD_MASK		GENMASK(27, 16)
#define INT_TRIG_VALID_THD(x)		(((x) - 1) << 16)
#define DATA_TRANS_KBYTE_THD_MASK	GENMASK(11, 4)
#define DATA_TRANS_KBYTE_THD(x)		(((x) - 1) << 4)
#define DATA_TRANS_TRIG_INT_EN_MASK	BIT(2)
#define DATA_TRANS_TRIG_INT_EN		BIT(2)
#define DATA_TRANS_TRIG_INT_DIS		0
#define RAM_ITF_EN_MASK			BIT(1)
#define RAM_ITF_EN			0
#define RAM_ITF_DIS			BIT(1)
#define BUS_WRITE_EN_MASK		BIT(0)
#define BUS_WRITE_EN			BIT(0)
#define BUS_WRITE_DIS			0

#define VAD_SAMPLE_CNT			0x7c
#define VAD_NOISE_DATA			0x100

/* RK1808 SOC */
#define RK1808_I2S0			0xff7e0800
#define RK1808_I2S1			0xff7f0800
#define RK1808_PDM			0xff800400

/* RK3308 SOC */
#define ACODEC_BASE			0xff560000
#define ACODEC_ADC_ANA_CON0		0X340

#define RK3308_I2S_8CH_0		0xff300800
#define RK3308_I2S_8CH_1		0xff310800
#define RK3308_I2S_8CH_2		0xff320800
#define RK3308_I2S_8CH_3		0xff330800
#define RK3308_PDM_8CH			0xff380400

/* RK3568 SOC */
#define RK3568_I2S_8CH_1		0xfe410800
#define RK3568_I2S_2CH_2		0xfe420800
#define RK3568_I2S_2CH_3		0xfe430800
#define RK3568_PDM			0xfe440400

/* RK3588 SOC */
#define RK3588_I2S1_8CH			0xfe480800
#define RK3588_PDM0			0xfe4b0400

#endif
