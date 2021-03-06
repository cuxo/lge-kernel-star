
const struct tegra_init_gpio_info tegra_init_gpio_info_array[] = {

	// VDDIO_BB
	{ 'o'-'a',		5,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 		UAB},	// IPC_SRDY1
	{ 'o'-'a',		6,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 		UAB},	// 1SEG_INT
	{ 'o'-'a',		7,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		UAB},	// NC
	{ 'o'-'a',		0,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		UAB},	// IPC_MRDY1
	{ 'v'-'a',		0,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		UAC},	// CP_RESET
	{ 'v'-'a',		1,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		UAC},	// CP_PWRON
	{ 'v'-'a',		2,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,			UAC},	// AP_PWN_ON_N
	{ 'v'-'a',		3,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 		UAC},	// CP_RESET_FLAG

	// VDDIO_LCD
	{ 'c'-'a',		1,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		LPW1},	// NC
	{ 'z'-'a',		2,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,		LSDI},	// GAUGE_LOW_INT_N
	{ 'n'-'a',		5,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,		LSDA},	// PMIC_LOW_INT
	{ 'n'-'a',		6,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		LDC},	// NC
	{ 'z'-'a',		4,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		LSCK},	// NC
	{ 'v'-'a',		7,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		LVP0},	// NC
	{ 'w'-'a',		1,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		LM1},	// NC
	{ 'b'-'a',		3,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 		LSC0},	// EARJACK_SENSE
	{ 'j'-'a',		3,	GPIO_ENABLE,	GPIO_OUTPUT, 	GPIO_SLEEP_HIGH,			LHS},	// BL_DCDC_SCL
	{ 'j'-'a',		4,	GPIO_ENABLE,	GPIO_OUTPUT, 	GPIO_SLEEP_HIGH,			LVS},	// BL_DCDC_SDA
	{ 'e'-'a',		0,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		LD0},	// NC
	{ 'e'-'a',		1,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW,			LD1},	// I2C2_SW
	{ 'e'-'a',		2,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,			LD2},	// AUDIO_INT_N
	{ 'e'-'a',		3,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		LD3},	// LCD_CP_EN
	{ 'e'-'a',		4,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		LD4},	// NC
	{ 'e'-'a',		5,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		LD5},	// NC
	{ 'e'-'a',		6,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		LD6},	// NC
	{ 'e'-'a',		7,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		LD7},	// LCD_RESET_N
	{ 'f'-'a',		0,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 		LD8},	// COM_INT
	{ 'f'-'a',		1,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_HIGH,			LD9},	// CP_USB_VBUS_EN
	{ 'f'-'a',		2,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		LD10},	// 1SEG_A_1.2V_EN
	{ 'f'-'a',		3,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		LD11},	// 1SEG_EN
	{ 'f'-'a',		4,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,		LD12},	// MOTION_INT_N
	{ 'f'-'a',		5,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		LD13},	// NC
	{ 'f'-'a',		6,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,		LD14},	// GYRO_INT_N
	{ 'f'-'a',		7,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		LD15},	// WM_LDO_EN
	{ 'm'-'a',		0,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		LD16},	// NC
	{ 'm'-'a',		1,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 		LD17},	// TOUCH_ID
	{ 'm'-'a',		2,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_INIT_ONLY_LOW, 	LHP1},	// BT_EN
	{ 'm'-'a',		3,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_INIT_ONLY_LOW, 	LHP2},	// WLAN_EN
	{ 'm'-'a',		4,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 		LVP1},	// LCD_MAKER_ID
	{ 'm'-'a',		5,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 		LHP0},	// AP_STATE (Not used)
	{ 'm'-'a',		6,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 		LDI},	// CP_STATE (Not_used)
	{ 'm'-'a',		7,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		LPP},	// NC
	{ 'n'-'a',		7,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 		HDINT}, // HDMI_INT

	// VDDIO_VI
	{ 't'-'a',		4,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 	DTA},	// NC
	{ 'd'-'a',		5,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 	DTA},	// VT_CAM_PWDN
	{ 't'-'a',		2,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 	DTB},	// VT_RESET_N
	{ 't'-'a',		3,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 	DTB},	// 8M_RESET_N
	{ 'z'-'a' + 2,	1,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 	DTE},	// NC
	{ 'z'-'a' + 2,	4,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 	DTE},	// NC
	{ 'z'-'a' + 2,	5,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 	DTE},	// NC
	{ 'd'-'a',		2,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 	DTE},	// NC
	{ 'a'-'a',		0,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 	DTE},	// NC

	// VDDIO_UART
	{ 'j'-'a',		6,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 	IRRX},	// IPC_MRDY2
	{ 'j'-'a',		5,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 	IRTX},	// NC
	{ 'u'-'a',		0,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 	GPU},	// NC
	{ 'u'-'a',		1,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_HIGH,	GPU},	// WLAN_WAKEUP_N
	{ 'u'-'a',		2,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_HIGH,		GPU},	// MUIC_UART_SW
//	{ 'u'-'a',		3,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 	GPU},	// VIBE_PWM
	{ 'u'-'a',		4,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 	GPU},	// VIBE_EN
	{ 'u'-'a',		5,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,		GPU},	// MUIC_INT_N
	{ 'u'-'a',		6,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 	GPU},	// IPC_SRDY2

	// VDDIO_SYS
	{ 'r'-'a',		0,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		KBCA},	// NC
	{ 'r'-'a',		1,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		KBCA},	// NC
	{ 'r'-'a',		2,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		KBCA},	// NC
	{ 'r'-'a',		3,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		KBCD},	// NC
	{ 'r'-'a',		4,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		KBCD},	// NC
	{ 'r'-'a',		5,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		KBCD},	// NC
	{ 'r'-'a',		6,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		KBCD},	// NC
	{ 'r'-'a',		7,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		KBCB},	// NC
	{ 's'-'a',		0,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,			KBCB},	// WLAN_HOST_WAKEUP_N
	{ 's'-'a',		1,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		KBCB},	// NC
	{ 's'-'a',		2,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		KBCB},	// NC
	{ 's'-'a',		3,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		KBCB},	// NC
	{ 's'-'a',		4,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		KBCB},	// NC
	{ 's'-'a',		5,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		KBCB},	// NC
	{ 's'-'a',		6,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		KBCB},	// NC
	{ 's'-'a',		7,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		KBCB},	// NC
	{ 'q'-'a',		0,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		KBCC},	// NC
	{ 'q'-'a',		1,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		KBCC},	// NC
	{ 'q'-'a',		2,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		KBCF},	// NC
	{ 'q'-'a',		3,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		KBCF},	// NC
	{ 'q'-'a',		4,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		KBCF},	// NC
	{ 'q'-'a',		5,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		KBCF},	// NC
	{ 'q'-'a',		6,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		KBCF},	// NC
	{ 'q'-'a',		7,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		KBCE},	// NC

	// VDDIO_AUDIO
	{ 'k'-'a',		5,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		SPDO},	// HDMI_REG_EN
	{ 'k'-'a',		6,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		SPDI},	// TOUCH_RESET_N
	{ 'w'-'a',		5,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		CDEV2}, // NC
	{ 'x'-'a',		4,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW,			SPID},	// BT_WAKEUP
	{ 'x'-'a',		5,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 		SPIE},	// PROX_OUT
	{ 'x'-'a',		6,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,		SPIE},	// TOUCH_INT_N
	{ 'x'-'a',		7,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		SPIF},	// EAR_BIAS_EN
	{ 'w'-'a',		2,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,			SPIG},	// CHARGER_IRQB
	{ 'w'-'a',		3,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,			SPIH},	// BATT_LOW_INT_N

	// VDDIO_SDIO
	{ 'd'-'a',		1,	GPIO_ENABLE,	GPIO_INPUT,		GPIO_SLEEP_LOW, 		SLXA},	// NC
	{ 'd'-'a',		0,	GPIO_ENABLE,	GPIO_INPUT,		GPIO_SLEEP_LOW, 		SLXK},	// NC
	{ 'd'-'a',		3,	GPIO_ENABLE,	GPIO_INPUT,		GPIO_SLEEP_LOW, 		SLXC},	// NC
	{ 'd'-'a',		4,	GPIO_ENABLE,	GPIO_INPUT,		GPIO_SLEEP_LOW, 		SLXD},	// NC
	{ 'v'-'a',		4,	GPIO_ENABLE,	GPIO_INPUT,		GPIO_SLEEP_LOW, 		GPV},	// NC
	{ 'v'-'a',		5,	GPIO_ENABLE,	GPIO_INPUT,		GPIO_SLEEP_LOW, 		GPV},	// NC
	{ 'v'-'a',		6,	GPIO_ENABLE,	GPIO_INPUT,		GPIO_SLEEP_LOW, 		GPV},	// NC

	// VDDIO_NAND
	{ 'i'-'a',		5,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,			ATB},	// MICROSD_DET_N
	{ 'i'-'a',		7,	GPIO_ENABLE,	GPIO_OUTPUT, 	GPIO_SLEEP_HIGH,			ATC},	// MUIC_GAUGE_SCL
	{ 'k'-'a',		0,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,			ATC},	// GMI_ADV_N
	{ 'k'-'a',		1,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 		ATC},	// PULL_DOWN
	{ 'j'-'a',		0,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		GMD},	// NC
	{ 'j'-'a',		2,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		GMD},	// NC
	{ 'k'-'a',		3,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		ATC},	// NC
	{ 'k'-'a',		4,	GPIO_ENABLE,	GPIO_OUTPUT, 	GPIO_SLEEP_HIGH,			ATC},	// MUIC_GAUGE_SDA
	{ 'k'-'a',		2,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,		ATC},	// THERMAL_IRQ_N
	{ 'i'-'a',		3,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		ATA},	// NC
	{ 'i'-'a',		6,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		ATA},	// NC
	{ 'g'-'a',		0,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,			ATC},	// VOL_KEY_UP
	{ 'g'-'a',		1,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,			ATC},	// VOL_KEY_DOWN
	{ 'g'-'a',		2,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		ATC},	// NC
	{ 'g'-'a',		3,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		ATC},	// NC
	{ 'g'-'a',		4,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 		ATC},	// PULL_DOWN
	{ 'g'-'a',		5,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 		ATC},	// PULL_DOWN
	{ 'g'-'a',		6,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 		ATC},	// PULL_DOWN
	{ 'g'-'a',		7,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 		ATC},	// PULL_DOWN
	{ 'h'-'a',		0,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		ATD},	// NC
	{ 'h'-'a',		1,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		ATD},	// NC
	{ 'h'-'a',		2,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		ATD},	// NC
	{ 'h'-'a',		3,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		ATD},	// NC
	{ 'h'-'a',		4,	GPIO_ENABLE,	GPIO_INPUT, 		GPIO_SLEEP_LOW, 		ATE},	// PULL DOWN(DNI)
	{ 'h'-'a',		5,	GPIO_ENABLE,	GPIO_INPUT, 		GPIO_SLEEP_LOW, 		ATE},	// PULL DOWN
	{ 'h'-'a',		6,	GPIO_ENABLE,	GPIO_INPUT, 		GPIO_SLEEP_LOW, 		ATE},	// PULL DOWN
	{ 'h'-'a',		7,	GPIO_ENABLE,	GPIO_INPUT, 		GPIO_SLEEP_LOW, 		ATE},	// PULL DOWN
	{ 'j'-'a',		7,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,			GMC},	// HOOK_DET_N
	{ 'b'-'a',		0,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		GMC},	// NC
	{ 'b'-'a',		1,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		GMC},	// NC
	{ 'k'-'a',		7,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		GMC},	// NC
	{ 'i'-'a',		0,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		ATC},	// NC
	{ 'i'-'a',		1,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,			ATC},	// GMI_OE_N
	{ 'i'-'a',		4,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		ATA},	// NC
	{ 'c'-'a',		7,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,		GMB},	// BT_HOST_WAKEUP_N

};

const struct tegra_init_gpio_info tegra_sleep_gpio_info_array[] = {
	{ 'o'-'a',	1,	GPIO_ENABLE,	GPIO_INPUT,	GPIO_SLEEP_LOW, UAA},	// UART1_IPC_RXD
	{ 'o'-'a',	2,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, UAA},	// UART1_IPC_TXD
	{ 'o'-'a',	3,	GPIO_ENABLE,	GPIO_INPUT,	GPIO_SLEEP_LOW, UAA},	//UART1_IPC_RTS_N
	{ 'o'-'a',	4,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, UAA},	// UART1_IPC_CTS_N
	{ 'o'-'a',		5,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 		UAB},	// IPC_SRDY1
	{ 'o'-'a',	6,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, UAB},	// NC
	{ 'o'-'a',		7,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		UAB},	// NC
	{ 'o'-'a',		0,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		UAB},	// IPC_MRDY1
	{ 'v'-'a',	0,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_HIGH, UAC},	// CP_RESET
	{ 'v'-'a',	1,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_HIGH, UAC},	// CP_PWRON
	{ 'v'-'a',	2,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	UAC},	// AP_PWR_ON/
	{ 'v'-'a',	3,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	UAC},	// CP_RESET_FLAG
	{ 'c'-'a',	1,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	LPW1},	// CHG_PGB/
	{ 'n'-'a',	4,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, LCSN},	// LCD_CS/
	{ 'n'-'a',		6,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		LDC},	// NC
	{ 'z'-'a',		4,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		LSCK},	// NC
	{ 'v'-'a',		7,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		LVP0},	// NC
	{ 'w'-'a',		1,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		LM1},	// NC
	{ 'j'-'a',	1,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, LSPI},	// LCD_TE
	{ 'b'-'a',	3,	GPIO_ENABLE,	GPIO_INPUT,	GPIO_SLEEP_LOW, LSC0},	// GYRO_INT/
	{ 'j'-'a',	3,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_HIGH,	LHS},	// BL_DCDC_SCL
	{ 'j'-'a',	4,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_HIGH,	LVS},	// BL_DCDC_SDA
	{ 'e'-'a',	0,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_LOW, LD0},	// EARJACK_SENSE/
	{ 'e'-'a',	1,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, LD1},	// I2C_SW
	{ 'e'-'a',	2,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	LD2},	// AUDIO_INT/
	{ 'e'-'a',		3,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		LD3},	// LCD_CP_EN
	{ 'e'-'a',	4,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, LD4},	// DMB_RESET/
	{ 'e'-'a',	5,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_LOW, LD5},	// DMB_INT/
	{ 'e'-'a',	6,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, LD6},	// DMB_EN
	{ 'e'-'a',	7,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_HIGH,	LD7},	// LCD RESET/
	{ 'f'-'a',	0,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, LD8},	// COM_INT/
	{ 'f'-'a',	1,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, LD9},	// CP_USB_VBUS_EN
	{ 'f'-'a',	2,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, LD10},	// CAM_SUBPM_EN
	{ 'f'-'a',	3,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, LD11},	// VIBE_EN
	{ 'f'-'a',	4,	GPIO_ENABLE,	GPIO_INPUT,	GPIO_SLEEP_LOW, LD12},	// MOTION_INT/
	{ 'f'-'a',	5,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_HIGH, LD13},	// GPS_RESET/ (IFX 용)
	{ 'f'-'a',	6,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, LD14},	// GPS_PWR_ON (IFX 용)
	{ 'f'-'a',	7,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, LD15},	// WM_LDO_EN
	{ 'm'-'a',	0,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, LD16},	// GPS_LNA_SD/ (IFX 용)
	{ 'm'-'a',		1,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 		LD17},	// TOUCH_ID
	{ 'm'-'a',		2,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_INIT_ONLY_LOW, 	LHP1},	// BT_EN
	{ 'm'-'a',		3,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_INIT_ONLY_LOW, 	LHP2},	// WLAN_EN
	{ 'm'-'a',		4,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 		LVP1},	// LCD_MAKER_ID
	{ 'm'-'a',	5,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, LHP0},	// AP_STATE
	{ 'm'-'a',	6,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_LOW, LDI},	// CP_STATE
	{ 'm'-'a',	7,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, LPP},	// CP_USB_SW
	{ 'n'-'a',	7,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	HDINT}, // HDMI_INT
	{ 't'-'a',		0,	GPIO_ENABLE,	GPIO_INPUT, 		GPIO_SLEEP_LOW, 	DTD},	// VT_PCLK
	{ 't'-'a',	1,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, CSUS},	// CAM_MCLK
	{ 't'-'a',	4,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, DTA},	// 5M_CAM_VCM_EN
	{ 'd'-'a',		5,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 	DTA},	// VT_CAM_PWDN
	{ 'l'-'a',	0,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, DTD},	// VT_DATA[0]
	{ 'l'-'a',	1,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, DTD},	// VT_DATA[1]
	{ 'l'-'a',	2,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, DTD},	// VT_DATA[2]
	{ 'l'-'a',	3,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, DTD},	// VT_DATA[3]
	{ 'l'-'a',	4,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, DTD},	// VT_DATA[4]
	{ 'l'-'a',	5,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, DTD},	// VT_DATA[5]
	{ 'l'-'a',	6,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, DTD},	// VT_DATA[6]
	{ 'l'-'a',	7,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, DTD},	// VT_DATA[7]
	{ 't'-'a',	2,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, DTB},	// VT_RESET/
	{ 't'-'a',	3,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, DTB},	// 5M_RESET/
	{ 'd'-'a',	6,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, DTC},	// VT_VSYNC
	{ 'd'-'a',	7,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, DTC},	// VT_HSYNC
	{ 'z'-'a' + 2,	2,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,		DTF},	// CAM_I2C_SCL
	{ 'z'-'a' + 2,	3,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,		DTF},	// CAM_I2C_SDA
	{ 'z'-'a' + 2,	1,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 	DTE},	// NC
	{ 'z'-'a' + 2,	4,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 	DTE},	// NC
	{ 'z'-'a' + 2,	5,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 	DTE},	// NC
	{ 'd'-'a',		2,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 	DTE},	// NC
	{ 'a'-'a',		0,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 	DTE},	// NC
	{ 'j'-'a',		6,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 	IRRX},	// IPC_MRDY2
	{ 'j'-'a',		5,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 	IRTX},	// NC
	{ 'w'-'a',	6,	GPIO_ENABLE,	GPIO_INPUT,	GPIO_SLEEP_HIGH, UCA},	// BT_UART_TXD
	{ 'w'-'a',	7,	GPIO_ENABLE,	GPIO_INPUT,	GPIO_SLEEP_HIGH, UCA},	// BT_UART_RXD
	{ 'c'-'a',	0,	GPIO_ENABLE,	GPIO_INPUT,	GPIO_SLEEP_HIGH, UCB},	// BT_UART_RTS
	{ 'a'-'a',	1,	GPIO_ENABLE,	GPIO_INPUT,	GPIO_SLEEP_HIGH, UCB},	// BT_UART_CTS
	{ 'u'-'a',		0,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 	GPU},	// NC
	{ 'u'-'a',	1,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_LOW, GPU},	// WLAN_WAKEUP/
	{ 'u'-'a',	2,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, GPU},	// MUIC_UART_SW
	{ 'u'-'a',		3,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 	GPU},	// VIBE_PWM
	{ 'u'-'a',	4,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, GPU},	// NC
	{ 'u'-'a',	5,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH, GPU},	// MUIC_INT/
	{ 'u'-'a',		6,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 	GPU},	// IPC_SRDY2
	{ 'c'-'a',	5,	GPIO_ENABLE,	GPIO_INPUT,	GPIO_SLEEP_HIGH,	RM},	// GEN1_I2C_SDA
	{ 'c'-'a',		4,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,		RM},	// GEN1_I2C_SCL
	{ 'p'-'a',		4,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 	DAP4},	// BT_PCM
	{ 'p'-'a',		5,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 	DAP4},	// BT_PCM
	{ 'p'-'a',		6,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 	DAP4},	// BT_PCM
	{ 'p'-'a',		7,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 	DAP4},	// BT_PCM
	{ 's'-'a',	0,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_LOW,	KBCB},	// WLAN_HOST_WAKEUP/
	{ 's'-'a',	1,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_INIT_ONLY_LOW, KBCB},	// CHG_EN_SET/
	{ 's'-'a',	2,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	KBCB},	// CHG_STATUS/
	{ 'z'-'a',	5,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, PMC},	// TP
	{ 'k'-'a',		5,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		SPDO},	// HDMI_REG_EN
	{ 'k'-'a',	6,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, SPDI},	// TOUCH_RESET/
	{ 'x'-'a',	4,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, SPID},	// BT_WAKEUP/
	{ 'x'-'a',	5,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_LOW, SPIE},	// PROXI_OUT
	{ 'x'-'a',	6,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_LOW, SPIE},	// TOUCH_INT/
	{ 'x'-'a',		7,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		SPIF},	// EAR_BIAS_EN
	{ 'w'-'a',	2,	GPIO_ENABLE,	GPIO_INPUT,	GPIO_SLEEP_LOW, SPIG},	// HOOK_DET/
	{ 'w'-'a',	3,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	SPIH},	// BATT_LOW_INT/
	{ 'a'-'a',		6,	GPIO_ENABLE,	GPIO_INPUT,	GPIO_SLEEP_HIGH,	SDD},	// MICROSD_CLK
	{ 'a'-'a',	7,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	SDD},	// MICROSD_CMD
	{ 'b'-'a',	7,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	SDC},	// MICROSD_DATA0
	{ 'b'-'a',	6,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	SDC},	// MICROSD_DATA1
	{ 'b'-'a',	5,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	SDC},	// MICROSD_DATA2
	{ 'b'-'a',	4,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	SDC},	// MICROSD_DATA3
	{ 'd'-'a',	1,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, SLXA},	// NC
	{ 'd'-'a',	0,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, SLXK},	// NC
	{ 'd'-'a',	3,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, SLXC},	// NC
	{ 'd'-'a',	4,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, SLXD},	// NC
	{ 'v'-'a',	6,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, GPV},	// NC
	{ 'i'-'a',	5,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	ATB},	// MICROSD_DET/
	{ 'i'-'a',		7,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,			ATC},	// MUIC_GAUGE_SCL
	{ 'k'-'a',	0,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_LOW, ATC},	// GMI_ADV/
	{ 'j'-'a',		0,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		GMD},	// NC
	{ 'j'-'a',		2,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		GMD},	// NC
	{ 'k'-'a',	3,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_HIGH,	ATC},	// NC
	{ 'k'-'a',		4,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,			ATC},	// MUIC_GAUGE_SDA
	{ 'k'-'a',	2,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_LOW, ATC},	// THERMAL_IRQ/
	{ 'g'-'a',	0,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	ATC},	// VOLUME_KEY_UP
	{ 'g'-'a',	1,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	ATC},	// VOLUME_KEY_DOWN
	{ 'g'-'a',	2,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, ATC},	// NC 추가
	{ 'g'-'a',		3,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		ATC},	// NC
	{ 'g'-'a',		4,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 		ATC},	// PULL_DOWN
	{ 'g'-'a',		5,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 		ATC},	// PULL_DOWN
	{ 'g'-'a',		6,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 		ATC},	// PULL_DOWN
	{ 'g'-'a',		7,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_LOW, 		ATC},	// PULL_DOWN
	{ 'h'-'a',		0,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		ATD},	// NC
	{ 'h'-'a',		1,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		ATD},	// NC
	{ 'h'-'a',		2,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		ATD},	// NC
	{ 'h'-'a',		3,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		ATD},	// NC
	{ 'j'-'a',	7,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_LOW, GMC},	// GPS_UART_TXD (IFX ONLY)
	{ 'b'-'a',	0,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, GMC},	// GPS_UART_RXD (IFX ONLY)
	{ 'b'-'a',	1,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, GMC},	// GPS_UART_CTS/ (IFX ONLY)
	{ 'k'-'a',	7,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, GMC},	// GPS_UART_RTS/ (IFX ONLY)
//	{ 'z'-'a' + 1,	0,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	GMA},	// MMC_DAT0
//	{ 'z'-'a' + 1,	1,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	GMA},	// MMC_DAT1
//	{ 'z'-'a' + 1,	2,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	GMA},	// MMC_DAT2
//	{ 'z'-'a' + 1,	3,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	GMA},	// MMC_DAT3
//	{ 'z'-'a' + 1,	4,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	GME},	// MMC_DAT4
//	{ 'z'-'a' + 1,	5,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	GME},	// MMC_DAT5
//	{ 'z'-'a' + 1,	6,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	GME},	// MMC_DAT6
//	{ 'z'-'a' + 1,	7,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	GME},	// MMC_DAT7
	{ 'i'-'a',	0,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_HIGH,	ATC},	// NC
	{ 'i'-'a',	1,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	ATC},	// GMI_OE/
	{ 'i'-'a',		4,	GPIO_ENABLE,	GPIO_OUTPUT,	GPIO_SLEEP_LOW, 		ATA},	// NC
	{ 't'-'a',		5,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,			PTA},	// GEN2_I2C_SCL
	{ 't'-'a',		6,	GPIO_ENABLE,	GPIO_INPUT, 	GPIO_SLEEP_HIGH,			PTA},	// GEN2_I2C_SCA
	{ 't'-'a',	7,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_HIGH,	ATB},	// MMC_CMD
	{ 'c'-'a',	7,	GPIO_ENABLE,	GPIO_INPUT, GPIO_SLEEP_LOW, GMB},	// BT_HOST_WAKEUP/
};

