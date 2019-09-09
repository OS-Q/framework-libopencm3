/* This file is part of the libopencm3 project.
 *
 * It was generated by the irq2nvic_h script.
 *
 * This part needs to get included in the compilation unit where
 * blocking_handler gets defined due to the way #pragma works.
 */


/** @defgroup CM3_nvic_isrpragmas_STM32F0 User interrupt service routines (ISR) defaults for STM32 F0 series
    @ingroup CM3_nvic_isrpragmas

    @{*/

#pragma weak wwdg_isr = blocking_handler
#pragma weak pvd_isr = blocking_handler
#pragma weak rtc_isr = blocking_handler
#pragma weak flash_isr = blocking_handler
#pragma weak rcc_isr = blocking_handler
#pragma weak exti0_1_isr = blocking_handler
#pragma weak exti2_3_isr = blocking_handler
#pragma weak exti4_15_isr = blocking_handler
#pragma weak tsc_isr = blocking_handler
#pragma weak dma1_channel1_isr = blocking_handler
#pragma weak dma1_channel2_3_isr = blocking_handler
#pragma weak dma1_channel4_5_isr = blocking_handler
#pragma weak adc_comp_isr = blocking_handler
#pragma weak tim1_brk_up_trg_com_isr = blocking_handler
#pragma weak tim1_cc_isr = blocking_handler
#pragma weak tim2_isr = blocking_handler
#pragma weak tim3_isr = blocking_handler
#pragma weak tim6_dac_isr = blocking_handler
#pragma weak tim7_isr = blocking_handler
#pragma weak tim14_isr = blocking_handler
#pragma weak tim15_isr = blocking_handler
#pragma weak tim16_isr = blocking_handler
#pragma weak tim17_isr = blocking_handler
#pragma weak i2c1_isr = blocking_handler
#pragma weak i2c2_isr = blocking_handler
#pragma weak spi1_isr = blocking_handler
#pragma weak spi2_isr = blocking_handler
#pragma weak usart1_isr = blocking_handler
#pragma weak usart2_isr = blocking_handler
#pragma weak usart3_4_isr = blocking_handler
#pragma weak cec_can_isr = blocking_handler
#pragma weak usb_isr = blocking_handler

/**@}*/

/* Initialization template for the interrupt vector table. This definition is
 * used by the startup code generator (vector.c) to set the initial values for
 * the interrupt handling routines to the chip family specific _isr weak
 * symbols. */

#define IRQ_HANDLERS \
    [NVIC_WWDG_IRQ] = wwdg_isr, \
    [NVIC_PVD_IRQ] = pvd_isr, \
    [NVIC_RTC_IRQ] = rtc_isr, \
    [NVIC_FLASH_IRQ] = flash_isr, \
    [NVIC_RCC_IRQ] = rcc_isr, \
    [NVIC_EXTI0_1_IRQ] = exti0_1_isr, \
    [NVIC_EXTI2_3_IRQ] = exti2_3_isr, \
    [NVIC_EXTI4_15_IRQ] = exti4_15_isr, \
    [NVIC_TSC_IRQ] = tsc_isr, \
    [NVIC_DMA1_CHANNEL1_IRQ] = dma1_channel1_isr, \
    [NVIC_DMA1_CHANNEL2_3_IRQ] = dma1_channel2_3_isr, \
    [NVIC_DMA1_CHANNEL4_5_IRQ] = dma1_channel4_5_isr, \
    [NVIC_ADC_COMP_IRQ] = adc_comp_isr, \
    [NVIC_TIM1_BRK_UP_TRG_COM_IRQ] = tim1_brk_up_trg_com_isr, \
    [NVIC_TIM1_CC_IRQ] = tim1_cc_isr, \
    [NVIC_TIM2_IRQ] = tim2_isr, \
    [NVIC_TIM3_IRQ] = tim3_isr, \
    [NVIC_TIM6_DAC_IRQ] = tim6_dac_isr, \
    [NVIC_TIM7_IRQ] = tim7_isr, \
    [NVIC_TIM14_IRQ] = tim14_isr, \
    [NVIC_TIM15_IRQ] = tim15_isr, \
    [NVIC_TIM16_IRQ] = tim16_isr, \
    [NVIC_TIM17_IRQ] = tim17_isr, \
    [NVIC_I2C1_IRQ] = i2c1_isr, \
    [NVIC_I2C2_IRQ] = i2c2_isr, \
    [NVIC_SPI1_IRQ] = spi1_isr, \
    [NVIC_SPI2_IRQ] = spi2_isr, \
    [NVIC_USART1_IRQ] = usart1_isr, \
    [NVIC_USART2_IRQ] = usart2_isr, \
    [NVIC_USART3_4_IRQ] = usart3_4_isr, \
    [NVIC_CEC_CAN_IRQ] = cec_can_isr, \
    [NVIC_USB_IRQ] = usb_isr
