/* This file is part of the libopencm3 project.
 *
 * It was generated by the irq2nvic_h script.
 */

#ifndef LIBOPENCM3_STM32_F1_NVIC_H
#define LIBOPENCM3_STM32_F1_NVIC_H

#include <libopencm3/cm3/nvic.h>

/** @defgroup CM3_nvic_defines_STM32F1 User interrupts for STM32 F1 series
    @ingroup CM3_nvic_defines

    @{*/

#define NVIC_WWDG_IRQ 0
#define NVIC_PVD_IRQ 1
#define NVIC_TAMPER_IRQ 2
#define NVIC_RTC_IRQ 3
#define NVIC_FLASH_IRQ 4
#define NVIC_RCC_IRQ 5
#define NVIC_EXTI0_IRQ 6
#define NVIC_EXTI1_IRQ 7
#define NVIC_EXTI2_IRQ 8
#define NVIC_EXTI3_IRQ 9
#define NVIC_EXTI4_IRQ 10
#define NVIC_DMA1_CHANNEL1_IRQ 11
#define NVIC_DMA1_CHANNEL2_IRQ 12
#define NVIC_DMA1_CHANNEL3_IRQ 13
#define NVIC_DMA1_CHANNEL4_IRQ 14
#define NVIC_DMA1_CHANNEL5_IRQ 15
#define NVIC_DMA1_CHANNEL6_IRQ 16
#define NVIC_DMA1_CHANNEL7_IRQ 17
#define NVIC_ADC1_2_IRQ 18
#define NVIC_USB_HP_CAN_TX_IRQ 19
#define NVIC_USB_LP_CAN_RX0_IRQ 20
#define NVIC_CAN_RX1_IRQ 21
#define NVIC_CAN_SCE_IRQ 22
#define NVIC_EXTI9_5_IRQ 23
#define NVIC_TIM1_BRK_IRQ 24
#define NVIC_TIM1_UP_IRQ 25
#define NVIC_TIM1_TRG_COM_IRQ 26
#define NVIC_TIM1_CC_IRQ 27
#define NVIC_TIM2_IRQ 28
#define NVIC_TIM3_IRQ 29
#define NVIC_TIM4_IRQ 30
#define NVIC_I2C1_EV_IRQ 31
#define NVIC_I2C1_ER_IRQ 32
#define NVIC_I2C2_EV_IRQ 33
#define NVIC_I2C2_ER_IRQ 34
#define NVIC_SPI1_IRQ 35
#define NVIC_SPI2_IRQ 36
#define NVIC_USART1_IRQ 37
#define NVIC_USART2_IRQ 38
#define NVIC_USART3_IRQ 39
#define NVIC_EXTI15_10_IRQ 40
#define NVIC_RTC_ALARM_IRQ 41
#define NVIC_USB_WAKEUP_IRQ 42
#define NVIC_TIM8_BRK_IRQ 43
#define NVIC_TIM8_UP_IRQ 44
#define NVIC_TIM8_TRG_COM_IRQ 45
#define NVIC_TIM8_CC_IRQ 46
#define NVIC_ADC3_IRQ 47
#define NVIC_FSMC_IRQ 48
#define NVIC_SDIO_IRQ 49
#define NVIC_TIM5_IRQ 50
#define NVIC_SPI3_IRQ 51
#define NVIC_UART4_IRQ 52
#define NVIC_UART5_IRQ 53
#define NVIC_TIM6_IRQ 54
#define NVIC_TIM7_IRQ 55
#define NVIC_DMA2_CHANNEL1_IRQ 56
#define NVIC_DMA2_CHANNEL2_IRQ 57
#define NVIC_DMA2_CHANNEL3_IRQ 58
#define NVIC_DMA2_CHANNEL4_5_IRQ 59
#define NVIC_DMA2_CHANNEL5_IRQ 60
#define NVIC_ETH_IRQ 61
#define NVIC_ETH_WKUP_IRQ 62
#define NVIC_CAN2_TX_IRQ 63
#define NVIC_CAN2_RX0_IRQ 64
#define NVIC_CAN2_RX1_IRQ 65
#define NVIC_CAN2_SCE_IRQ 66
#define NVIC_OTG_FS_IRQ 67

#define NVIC_IRQ_COUNT 68

/**@}*/

/** @defgroup CM3_nvic_isrprototypes_STM32F1 User interrupt service routines (ISR) prototypes for STM32 F1 series
    @ingroup CM3_nvic_isrprototypes

    @{*/

BEGIN_DECLS

void WEAK wwdg_isr(void);
void WEAK pvd_isr(void);
void WEAK tamper_isr(void);
void WEAK rtc_isr(void);
void WEAK flash_isr(void);
void WEAK rcc_isr(void);
void WEAK exti0_isr(void);
void WEAK exti1_isr(void);
void WEAK exti2_isr(void);
void WEAK exti3_isr(void);
void WEAK exti4_isr(void);
void WEAK dma1_channel1_isr(void);
void WEAK dma1_channel2_isr(void);
void WEAK dma1_channel3_isr(void);
void WEAK dma1_channel4_isr(void);
void WEAK dma1_channel5_isr(void);
void WEAK dma1_channel6_isr(void);
void WEAK dma1_channel7_isr(void);
void WEAK adc1_2_isr(void);
void WEAK usb_hp_can_tx_isr(void);
void WEAK usb_lp_can_rx0_isr(void);
void WEAK can_rx1_isr(void);
void WEAK can_sce_isr(void);
void WEAK exti9_5_isr(void);
void WEAK tim1_brk_isr(void);
void WEAK tim1_up_isr(void);
void WEAK tim1_trg_com_isr(void);
void WEAK tim1_cc_isr(void);
void WEAK tim2_isr(void);
void WEAK tim3_isr(void);
void WEAK tim4_isr(void);
void WEAK i2c1_ev_isr(void);
void WEAK i2c1_er_isr(void);
void WEAK i2c2_ev_isr(void);
void WEAK i2c2_er_isr(void);
void WEAK spi1_isr(void);
void WEAK spi2_isr(void);
void WEAK usart1_isr(void);
void WEAK usart2_isr(void);
void WEAK usart3_isr(void);
void WEAK exti15_10_isr(void);
void WEAK rtc_alarm_isr(void);
void WEAK usb_wakeup_isr(void);
void WEAK tim8_brk_isr(void);
void WEAK tim8_up_isr(void);
void WEAK tim8_trg_com_isr(void);
void WEAK tim8_cc_isr(void);
void WEAK adc3_isr(void);
void WEAK fsmc_isr(void);
void WEAK sdio_isr(void);
void WEAK tim5_isr(void);
void WEAK spi3_isr(void);
void WEAK uart4_isr(void);
void WEAK uart5_isr(void);
void WEAK tim6_isr(void);
void WEAK tim7_isr(void);
void WEAK dma2_channel1_isr(void);
void WEAK dma2_channel2_isr(void);
void WEAK dma2_channel3_isr(void);
void WEAK dma2_channel4_5_isr(void);
void WEAK dma2_channel5_isr(void);
void WEAK eth_isr(void);
void WEAK eth_wkup_isr(void);
void WEAK can2_tx_isr(void);
void WEAK can2_rx0_isr(void);
void WEAK can2_rx1_isr(void);
void WEAK can2_sce_isr(void);
void WEAK otg_fs_isr(void);

END_DECLS

/**@}*/

#endif /* LIBOPENCM3_STM32_F1_NVIC_H */
