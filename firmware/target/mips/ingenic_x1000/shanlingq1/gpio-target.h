/*              Name            Port    Pins            Function */
DEFINE_PINGROUP(LCD_DATA,       GPIO_A, 0xffff <<  0,   GPIOF_DEVICE(1))
DEFINE_PINGROUP(LCD_CONTROL,    GPIO_B,   0x1a << 16,   GPIOF_DEVICE(1))
DEFINE_PINGROUP(MSC0,           GPIO_A,   0x3f << 20,   GPIOF_DEVICE(1))
DEFINE_PINGROUP(SFC,            GPIO_A,   0x3f << 26,   GPIOF_DEVICE(1))
DEFINE_PINGROUP(I2S,            GPIO_B,   0x1f <<  0,   GPIOF_DEVICE(1))
DEFINE_PINGROUP(I2C0,           GPIO_B,      3 << 23,   GPIOF_DEVICE(0))
DEFINE_PINGROUP(I2C1,           GPIO_C,      3 << 26,   GPIOF_DEVICE(0))
DEFINE_PINGROUP(I2C2,           GPIO_D,      3 <<  0,   GPIOF_DEVICE(1))

/*          Name                Pin             Function */
DEFINE_GPIO(FT6x06_INTERRUPT,   GPIO_PA(16),    GPIOF_INPUT)
DEFINE_GPIO(USB_DETECT,         GPIO_PA(17),    GPIOF_INPUT)
DEFINE_GPIO(FT6x06_RESET,       GPIO_PA(19),    GPIOF_OUTPUT(0))
DEFINE_GPIO(LCD_PWR,            GPIO_PB(6),     GPIOF_OUTPUT(1))
DEFINE_GPIO(FT6x06_POWER,       GPIO_PB(8),     GPIOF_OUTPUT(0))
DEFINE_GPIO(MSC0_CD,            GPIO_PB(9),     GPIOF_INPUT)
DEFINE_GPIO(ES9218_POWER,       GPIO_PB(13),    GPIOF_OUTPUT(0))
DEFINE_GPIO(LCD_RST,            GPIO_PB(15),    GPIOF_OUTPUT(1))
DEFINE_GPIO(LCD_RD,             GPIO_PB(16),    GPIOF_OUTPUT(1))
DEFINE_GPIO(LCD_CE,             GPIO_PB(18),    GPIOF_OUTPUT(1))
DEFINE_GPIO(BTN_PREV,           GPIO_PB(21),    GPIOF_INPUT)
DEFINE_GPIO(BTN_NEXT,           GPIO_PB(22),    GPIOF_INPUT)
DEFINE_GPIO(USB_DRVVBUS,        GPIO_PB(25),    GPIOF_OUTPUT(0))
DEFINE_GPIO(BTN_PLAY,           GPIO_PB(28),    GPIOF_INPUT)
DEFINE_GPIO(BTN_POWER,          GPIO_PB(31),    GPIOF_INPUT)
DEFINE_GPIO(AXP_IRQ,            GPIO_PC(21),    GPIOF_INPUT)
DEFINE_GPIO(USB_ID,             GPIO_PC(23),    GPIOF_INPUT)
DEFINE_GPIO(WHEEL1,             GPIO_PD(2),     GPIOF_INPUT)
DEFINE_GPIO(WHEEL2,             GPIO_PD(3),     GPIOF_INPUT)
DEFINE_GPIO(ES9218_GPIO2,       GPIO_PD(4),     GPIOF_OUTPUT(0))
DEFINE_GPIO(ES9218_RESET,       GPIO_PD(5),     GPIOF_OUTPUT(0))