#define MICROPY_HW_BOARD_NAME       "1BitSy"
#define MICROPY_HW_MCU_NAME         "STM32F415RG"
#define MICROPY_PY_SYS_PLATFORM     "pyboard"

#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_HAS_FLASH        (1)
#define MICROPY_HW_HAS_SDCARD       (0)
#define MICROPY_HW_HAS_MMA7660      (0)
#define MICROPY_HW_HAS_LIS3DSH      (0)
#define MICROPY_HW_HAS_LCD          (0)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_TIMER     (1)
#define MICROPY_HW_ENABLE_SERVO     (1)
#define MICROPY_HW_ENABLE_DAC       (1)
#define MICROPY_HW_ENABLE_USB       (1)

// HSE is 25MHz
#define MICROPY_HW_CLK_PLLM (25)
#define MICROPY_HW_CLK_PLLN (336)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV2)
#define MICROPY_HW_CLK_PLLQ (7)
#define MICROPY_HW_CLK_LAST_FREQ (1)

// The pyboard has a 32kHz crystal for the RTC
#define MICROPY_HW_RTC_USE_LSE      (0)
#define MICROPY_HW_RTC_USE_US       (0)
#define MICROPY_HW_RTC_USE_CALOUT   (1)

// UART config
#define MICROPY_HW_UART1_PORT (GPIOB)
#define MICROPY_HW_UART1_PINS (GPIO_PIN_6 | GPIO_PIN_7)

#define MICROPY_HW_UART2_PORT (GPIOA)
#define MICROPY_HW_UART2_PINS (GPIO_PIN_2 | GPIO_PIN_3)
#define MICROPY_HW_UART2_RTS  (GPIO_PIN_1)
#define MICROPY_HW_UART2_CTS  (GPIO_PIN_0)

#define MICROPY_HW_UART3_PORT (GPIOB)
#define MICROPY_HW_UART3_PINS (GPIO_PIN_10 | GPIO_PIN_11)
#define MICROPY_HW_UART3_RTS  (GPIO_PIN_14)
#define MICROPY_HW_UART3_CTS  (GPIO_PIN_13)

#define MICROPY_HW_UART4_PORT (GPIOA)
#define MICROPY_HW_UART4_PINS (GPIO_PIN_0 | GPIO_PIN_1)

#define MICROPY_HW_UART5_TX_PORT (GPIOC)
#define MICROPY_HW_UART5_TX_PIN  (GPIO_PIN_12)
#define MICROPY_HW_UART5_RX_PORT (GPIOD)
#define MICROPY_HW_UART5_RX_PIN  (GPIO_PIN_2)

#define MICROPY_HW_UART6_PORT (GPIOC)
#define MICROPY_HW_UART6_PINS (GPIO_PIN_6 | GPIO_PIN_7)

// I2C busses
#define MICROPY_HW_I2C1_SCL (pin_B6)
#define MICROPY_HW_I2C1_SDA (pin_B7)

#define MICROPY_HW_I2C2_SCL (pin_B10)
#define MICROPY_HW_I2C2_SDA (pin_B11)

// SPI busses
#define MICROPY_HW_SPI1_NSS  (pin_A4) // X5
#define MICROPY_HW_SPI1_SCK  (pin_A5) // X6
#define MICROPY_HW_SPI1_MISO (pin_A6) // X7
#define MICROPY_HW_SPI1_MOSI (pin_A7) // X8

#define MICROPY_HW_SPI2_NSS  (pin_B12) // Y5
#define MICROPY_HW_SPI2_SCK  (pin_B13) // Y6
#define MICROPY_HW_SPI2_MISO (pin_B14) // Y7
#define MICROPY_HW_SPI2_MOSI (pin_B15) // Y8

// CAN busses
#define MICROPY_HW_CAN1_TX   (pin_A11)
#define MICROPY_HW_CAN1_RX   (pin_A12)
#define MICROPY_HW_CAN2_TX   (pin_B13)
#define MICROPY_HW_CAN2_RX   (pin_B12)

// USRSW has no pullup or pulldown, and pressing the switch makes the input go low
#define MICROPY_HW_USRSW_PIN        (pin_C1)
#define MICROPY_HW_USRSW_PULL       (GPIO_NOPULL)   // External pullup
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_FALLING)
#define MICROPY_HW_USRSW_PRESSED    (0)

// The pyboard has 4 LEDs
#define MICROPY_HW_LED1             (pin_A8)
#define MICROPY_HW_LED1_PWM         { TIM1, 1, TIM_CHANNEL_1, GPIO_AF1_TIM1 }
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_low(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_high(pin))


// USB config
#define MICROPY_HW_USB_FS                 (1)
#define MICROPY_HW_USB_VBUS_DETECT_PIN (pin_A9)
#define MICROPY_HW_USB_OTG_ID_PIN      (pin_A10)
