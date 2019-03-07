/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 07/03/2019 23:50:12
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated by STM32CubeMX (DO NOT EDIT!)
 ******************************************************************************/

#ifndef __MX_DEVICE_H
#define __MX_DEVICE_H

/*---------------------------- Clock Configuration ---------------------------*/

#define MX_LSI_VALUE                            32000
#define MX_LSE_VALUE                            32768
#define MX_HSI_VALUE                            64000000
#define MX_HSE_VALUE                            25000000
#define MX_EXTERNAL_CLOCK_VALUE                 12288000
#define MX_PLLDSIFreq_Value                     500000000
#define MX_SYSCLKFreq_VALUE                     200000000
#define MX_HCLKFreq_Value                       100000000
#define MX_CortexFreq_Value                     200000000
#define MX_APB1Freq_Value                       100000000
#define MX_APB2Freq_Value                       100000000
#define MX_CECFreq_Value                        32000
#define MX_RTCFreq_Value                        32000
#define MX_USBFreq_Value                        200000000
#define MX_WatchDogFreq_Value                   32000
#define MX_DSIFreq_Value                        96000000
#define MX_DSIPHYCLKFreq_Value                  96000000
#define MX_DSITXEscFreq_Value                   20000000
#define MX_SPDIFRXFreq_Value                    200000000
#define MX_MCO1PinFreq_Value                    64000000
#define MX_MCO2PinFreq_Value                    200000000

/*-------------------------------- ADC1       --------------------------------*/

#define MX_ADC1                                 1

/* GPIO Configuration */

/* Pin PC5 */
#define MX_ADCx_INP8_SYSCFG_AnalogSwitch        __NULL
#define MX_ADCx_INP8_Pin                        PC5
#define MX_ADCx_INP8_GPIOx                      GPIOC
#define MX_ADCx_INP8_GPIO_PuPd                  GPIO_NOPULL
#define MX_ADCx_INP8_GPIO_Pin                   GPIO_PIN_5
#define MX_ADCx_INP8_GPIO_Mode                  GPIO_MODE_ANALOG

/* Pin PC4 */
#define MX_ADCx_INP4_SYSCFG_AnalogSwitch        __NULL
#define MX_ADCx_INP4_Pin                        PC4
#define MX_ADCx_INP4_GPIOx                      GPIOC
#define MX_ADCx_INP4_GPIO_PuPd                  GPIO_NOPULL
#define MX_ADCx_INP4_GPIO_Pin                   GPIO_PIN_4
#define MX_ADCx_INP4_GPIO_Mode                  GPIO_MODE_ANALOG

/* Pin PA7 */
#define MX_ADCx_INP7_SYSCFG_AnalogSwitch        __NULL
#define MX_ADCx_INP7_Pin                        PA7
#define MX_ADCx_INP7_GPIOx                      GPIOA
#define MX_ADCx_INP7_GPIO_PuPd                  GPIO_NOPULL
#define MX_ADCx_INP7_GPIO_Pin                   GPIO_PIN_7
#define MX_ADCx_INP7_GPIO_Mode                  GPIO_MODE_ANALOG

/* Pin PA6 */
#define MX_ADCx_INP3_SYSCFG_AnalogSwitch        __NULL
#define MX_ADCx_INP3_Pin                        PA6
#define MX_ADCx_INP3_GPIOx                      GPIOA
#define MX_ADCx_INP3_GPIO_PuPd                  GPIO_NOPULL
#define MX_ADCx_INP3_GPIO_Pin                   GPIO_PIN_6
#define MX_ADCx_INP3_GPIO_Mode                  GPIO_MODE_ANALOG

/*-------------------------------- BDMA       --------------------------------*/

#define MX_BDMA                                 1

/* NVIC Configuration */

/* NVIC BDMA_Channel1_IRQn */
#define MX_BDMA_Channel1_IRQn_interruptPremptionPriority 0
#define MX_BDMA_Channel1_IRQn_PriorityGroup     NVIC_PRIORITYGROUP_4
#define MX_BDMA_Channel1_IRQn_Subriority        0

/* NVIC BDMA_Channel0_IRQn */
#define MX_BDMA_Channel0_IRQn_interruptPremptionPriority 0
#define MX_BDMA_Channel0_IRQn_PriorityGroup     NVIC_PRIORITYGROUP_4
#define MX_BDMA_Channel0_IRQn_Subriority        0

/*-------------------------------- CORTEX_M7  --------------------------------*/

#define MX_CORTEX_M7                            1

/* GPIO Configuration */

/*-------------------------------- DAC1       --------------------------------*/

#define MX_DAC1                                 1

/* GPIO Configuration */

/* Pin PA4 */
#define MX_COMP_DAC11_group_Pin                 PA4
#define MX_COMP_DAC11_group_GPIOx               GPIOA
#define MX_COMP_DAC11_group_GPIO_PuPd           GPIO_NOPULL
#define MX_COMP_DAC11_group_GPIO_Pin            GPIO_PIN_4
#define MX_COMP_DAC11_group_GPIO_Mode           GPIO_MODE_ANALOG

/*-------------------------------- DMA        --------------------------------*/

#define MX_DMA                                  1

/* NVIC Configuration */

/* NVIC DMA1_Stream4_IRQn */
#define MX_DMA1_Stream4_IRQn_interruptPremptionPriority 0
#define MX_DMA1_Stream4_IRQn_PriorityGroup      NVIC_PRIORITYGROUP_4
#define MX_DMA1_Stream4_IRQn_Subriority         0

/* NVIC DMA1_Stream7_IRQn */
#define MX_DMA1_Stream7_IRQn_interruptPremptionPriority 0
#define MX_DMA1_Stream7_IRQn_PriorityGroup      NVIC_PRIORITYGROUP_4
#define MX_DMA1_Stream7_IRQn_Subriority         0

/* NVIC DMA1_Stream1_IRQn */
#define MX_DMA1_Stream1_IRQn_interruptPremptionPriority 0
#define MX_DMA1_Stream1_IRQn_PriorityGroup      NVIC_PRIORITYGROUP_4
#define MX_DMA1_Stream1_IRQn_Subriority         0

/* NVIC DMA1_Stream6_IRQn */
#define MX_DMA1_Stream6_IRQn_interruptPremptionPriority 0
#define MX_DMA1_Stream6_IRQn_PriorityGroup      NVIC_PRIORITYGROUP_4
#define MX_DMA1_Stream6_IRQn_Subriority         0

/* NVIC DMA1_Stream2_IRQn */
#define MX_DMA1_Stream2_IRQn_interruptPremptionPriority 0
#define MX_DMA1_Stream2_IRQn_PriorityGroup      NVIC_PRIORITYGROUP_4
#define MX_DMA1_Stream2_IRQn_Subriority         0

/* NVIC DMA2_Stream0_IRQn */
#define MX_DMA2_Stream0_IRQn_interruptPremptionPriority 0
#define MX_DMA2_Stream0_IRQn_PriorityGroup      NVIC_PRIORITYGROUP_4
#define MX_DMA2_Stream0_IRQn_Subriority         0

/* NVIC DMA1_Stream5_IRQn */
#define MX_DMA1_Stream5_IRQn_interruptPremptionPriority 0
#define MX_DMA1_Stream5_IRQn_PriorityGroup      NVIC_PRIORITYGROUP_4
#define MX_DMA1_Stream5_IRQn_Subriority         0

/* NVIC DMA1_Stream3_IRQn */
#define MX_DMA1_Stream3_IRQn_interruptPremptionPriority 0
#define MX_DMA1_Stream3_IRQn_PriorityGroup      NVIC_PRIORITYGROUP_4
#define MX_DMA1_Stream3_IRQn_Subriority         0

/* NVIC DMA2_Stream1_IRQn */
#define MX_DMA2_Stream1_IRQn_interruptPremptionPriority 0
#define MX_DMA2_Stream1_IRQn_PriorityGroup      NVIC_PRIORITYGROUP_4
#define MX_DMA2_Stream1_IRQn_Subriority         0

/* NVIC DMA1_Stream0_IRQn */
#define MX_DMA1_Stream0_IRQn_interruptPremptionPriority 0
#define MX_DMA1_Stream0_IRQn_PriorityGroup      NVIC_PRIORITYGROUP_4
#define MX_DMA1_Stream0_IRQn_Subriority         0

/*-------------------------------- I2C1       --------------------------------*/

#define MX_I2C1                                 1

/* GPIO Configuration */

/* Pin PB6 */
#define MX_I2C1_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_I2C1_SCL_GPIO_FM6                    __NULL
#define MX_I2C1_SCL_Pin                         PB6
#define MX_I2C1_SCL_GPIOx                       GPIOB
#define MX_I2C1_SCL_GPIO_PuPd                   GPIO_NOPULL
#define MX_I2C1_SCL_GPIO_Pin                    GPIO_PIN_6
#define MX_I2C1_SCL_GPIO_AF                     GPIO_AF4_I2C1
#define MX_I2C1_SCL_GPIO_Mode                   GPIO_MODE_AF_OD

/* Pin PB7 */
#define MX_I2C1_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_I2C1_SDA_Pin                         PB7
#define MX_I2C1_SDA_GPIOx                       GPIOB
#define MX_I2C1_SDA_GPIO_PuPd                   GPIO_NOPULL
#define MX_I2C1_SDA_GPIO_Pin                    GPIO_PIN_7
#define MX_I2C1_SDA_GPIO_AF                     GPIO_AF4_I2C1
#define MX_I2C1_SDA_GPIO_FM7                    __NULL
#define MX_I2C1_SDA_GPIO_Mode                   GPIO_MODE_AF_OD

/* DMA Configuration */

/* DMA I2C1_TX */
#define MX_I2C1_TX_DMA_Instance                 DMA1_Stream1
#define MX_I2C1_TX_DMA_FIFOMode                 DMA_FIFOMODE_DISABLE
#define MX_I2C1_TX_DMA_Priority                 DMA_PRIORITY_LOW
#define MX_I2C1_TX_DMA_MemDataAlignment         DMA_MDATAALIGN_BYTE
#define MX_I2C1_TX_DMA_Mode                     DMA_NORMAL
#define MX_I2C1_TX_DMA_SyncRequestNumber        1
#define MX_I2C1_TX_DMA_Request                  DMA_REQUEST_I2C1_TX
#define MX_I2C1_TX_DMA_SyncPolarity             HAL_DMAMUX_SYNC_NO_EVENT
#define MX_I2C1_TX_DMA_Direction                DMA_MEMORY_TO_PERIPH
#define MX_I2C1_TX_DMA_SignalID                 NONE
#define MX_I2C1_TX_DMA_MemInc                   DMA_MINC_ENABLE
#define MX_I2C1_TX_DMA_IpInstance               
#define MX_I2C1_TX_DMA_RequestNumber            1
#define MX_I2C1_TX_DMA_EventEnable              DISABLE
#define MX_I2C1_TX_DMA_SyncEnable               DISABLE
#define MX_I2C1_TX_DMA_DMA_Handle               
#define MX_I2C1_TX_DMA_PeriphDataAlignment      DMA_PDATAALIGN_BYTE
#define MX_I2C1_TX_DMA_Polarity                 HAL_DMAMUX_REQ_GEN_RISING
#define MX_I2C1_TX_DMA_SyncSignalID             NONE
#define MX_I2C1_TX_DMA_PeriphInc                DMA_PINC_DISABLE

/* DMA I2C1_RX */
#define MX_I2C1_RX_DMA_Instance                 DMA1_Stream0
#define MX_I2C1_RX_DMA_FIFOMode                 DMA_FIFOMODE_DISABLE
#define MX_I2C1_RX_DMA_Priority                 DMA_PRIORITY_LOW
#define MX_I2C1_RX_DMA_MemDataAlignment         DMA_MDATAALIGN_BYTE
#define MX_I2C1_RX_DMA_Mode                     DMA_NORMAL
#define MX_I2C1_RX_DMA_SyncRequestNumber        1
#define MX_I2C1_RX_DMA_Request                  DMA_REQUEST_I2C1_RX
#define MX_I2C1_RX_DMA_SyncPolarity             HAL_DMAMUX_SYNC_NO_EVENT
#define MX_I2C1_RX_DMA_Direction                DMA_PERIPH_TO_MEMORY
#define MX_I2C1_RX_DMA_SignalID                 NONE
#define MX_I2C1_RX_DMA_MemInc                   DMA_MINC_ENABLE
#define MX_I2C1_RX_DMA_IpInstance               
#define MX_I2C1_RX_DMA_RequestNumber            1
#define MX_I2C1_RX_DMA_EventEnable              DISABLE
#define MX_I2C1_RX_DMA_SyncEnable               DISABLE
#define MX_I2C1_RX_DMA_DMA_Handle               
#define MX_I2C1_RX_DMA_PeriphDataAlignment      DMA_PDATAALIGN_BYTE
#define MX_I2C1_RX_DMA_Polarity                 HAL_DMAMUX_REQ_GEN_RISING
#define MX_I2C1_RX_DMA_SyncSignalID             NONE
#define MX_I2C1_RX_DMA_PeriphInc                DMA_PINC_DISABLE

/*-------------------------------- I2C4       --------------------------------*/

#define MX_I2C4                                 1

/* GPIO Configuration */

/* Pin PD13 */
#define MX_I2C4_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_I2C4_SDA_Pin                         PD13
#define MX_I2C4_SDA_GPIOx                       GPIOD
#define MX_I2C4_SDA_GPIO_PuPd                   GPIO_NOPULL
#define MX_I2C4_SDA_GPIO_Pin                    GPIO_PIN_13
#define MX_I2C4_SDA_GPIO_AF                     GPIO_AF4_I2C4
#define MX_I2C4_SDA_GPIO_Mode                   GPIO_MODE_AF_OD

/* Pin PD12 */
#define MX_I2C4_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_I2C4_SCL_Pin                         PD12
#define MX_I2C4_SCL_GPIOx                       GPIOD
#define MX_I2C4_SCL_GPIO_PuPd                   GPIO_NOPULL
#define MX_I2C4_SCL_GPIO_Pin                    GPIO_PIN_12
#define MX_I2C4_SCL_GPIO_AF                     GPIO_AF4_I2C4
#define MX_I2C4_SCL_GPIO_Mode                   GPIO_MODE_AF_OD

/* DMA Configuration */

/* DMA I2C4_RX */
#define MX_I2C4_RX_DMA_Instance                 BDMA_Channel0
#define MX_I2C4_RX_DMA_Priority                 DMA_PRIORITY_LOW
#define MX_I2C4_RX_DMA_MemDataAlignment         DMA_MDATAALIGN_BYTE
#define MX_I2C4_RX_DMA_Mode                     DMA_NORMAL
#define MX_I2C4_RX_DMA_SyncRequestNumber        1
#define MX_I2C4_RX_DMA_Request                  BDMA_REQUEST_I2C4_RX
#define MX_I2C4_RX_DMA_SyncPolarity             HAL_DMAMUX_SYNC_NO_EVENT
#define MX_I2C4_RX_DMA_Direction                DMA_PERIPH_TO_MEMORY
#define MX_I2C4_RX_DMA_SignalID                 NONE
#define MX_I2C4_RX_DMA_MemInc                   DMA_MINC_ENABLE
#define MX_I2C4_RX_DMA_IpInstance               
#define MX_I2C4_RX_DMA_RequestNumber            1
#define MX_I2C4_RX_DMA_EventEnable              DISABLE
#define MX_I2C4_RX_DMA_SyncEnable               DISABLE
#define MX_I2C4_RX_DMA_DMA_Handle               
#define MX_I2C4_RX_DMA_PeriphDataAlignment      DMA_PDATAALIGN_BYTE
#define MX_I2C4_RX_DMA_Polarity                 HAL_DMAMUX_REQ_GEN_RISING
#define MX_I2C4_RX_DMA_SyncSignalID             NONE
#define MX_I2C4_RX_DMA_PeriphInc                DMA_PINC_DISABLE

/* DMA I2C4_TX */
#define MX_I2C4_TX_DMA_Instance                 BDMA_Channel1
#define MX_I2C4_TX_DMA_Priority                 DMA_PRIORITY_LOW
#define MX_I2C4_TX_DMA_MemDataAlignment         DMA_MDATAALIGN_BYTE
#define MX_I2C4_TX_DMA_Mode                     DMA_NORMAL
#define MX_I2C4_TX_DMA_SyncRequestNumber        1
#define MX_I2C4_TX_DMA_Request                  BDMA_REQUEST_I2C4_TX
#define MX_I2C4_TX_DMA_SyncPolarity             HAL_DMAMUX_SYNC_NO_EVENT
#define MX_I2C4_TX_DMA_Direction                DMA_MEMORY_TO_PERIPH
#define MX_I2C4_TX_DMA_SignalID                 NONE
#define MX_I2C4_TX_DMA_MemInc                   DMA_MINC_ENABLE
#define MX_I2C4_TX_DMA_IpInstance               
#define MX_I2C4_TX_DMA_RequestNumber            1
#define MX_I2C4_TX_DMA_EventEnable              DISABLE
#define MX_I2C4_TX_DMA_SyncEnable               DISABLE
#define MX_I2C4_TX_DMA_DMA_Handle               
#define MX_I2C4_TX_DMA_PeriphDataAlignment      DMA_PDATAALIGN_BYTE
#define MX_I2C4_TX_DMA_Polarity                 HAL_DMAMUX_REQ_GEN_RISING
#define MX_I2C4_TX_DMA_SyncSignalID             NONE
#define MX_I2C4_TX_DMA_PeriphInc                DMA_PINC_DISABLE

/*-------------------------------- SPI2       --------------------------------*/

#define MX_SPI2                                 1

/* GPIO Configuration */

/* Pin PA9 */
#define MX_SPI2_SCK_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_SPI2_SCK_Pin                         PA9
#define MX_SPI2_SCK_GPIOx                       GPIOA
#define MX_SPI2_SCK_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI2_SCK_GPIO_Pin                    GPIO_PIN_9
#define MX_SPI2_SCK_GPIO_AF                     GPIO_AF5_SPI2
#define MX_SPI2_SCK_GPIO_Mode                   GPIO_MODE_AF_PP

/* Pin PC1 */
#define MX_SPI2_MOSI_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI2_MOSI_Pin                        PC1
#define MX_SPI2_MOSI_GPIOx                      GPIOC
#define MX_SPI2_MOSI_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI2_MOSI_GPIO_Pin                   GPIO_PIN_1
#define MX_SPI2_MOSI_GPIO_AF                    GPIO_AF5_SPI2
#define MX_SPI2_MOSI_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PB14 */
#define MX_SPI2_MISO_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI2_MISO_Pin                        PB14
#define MX_SPI2_MISO_GPIOx                      GPIOB
#define MX_SPI2_MISO_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI2_MISO_GPIO_Pin                   GPIO_PIN_14
#define MX_SPI2_MISO_GPIO_AF                    GPIO_AF5_SPI2
#define MX_SPI2_MISO_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PA11 */
#define MX_SPI2_NSS_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_SPI2_NSS_Pin                         PA11
#define MX_SPI2_NSS_GPIOx                       GPIOA
#define MX_SPI2_NSS_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI2_NSS_GPIO_Pin                    GPIO_PIN_11
#define MX_SPI2_NSS_GPIO_AF                     GPIO_AF5_SPI2
#define MX_SPI2_NSS_GPIO_Mode                   GPIO_MODE_AF_PP

/* DMA Configuration */

/* DMA SPI2_TX */
#define MX_SPI2_TX_DMA_Instance                 DMA1_Stream3
#define MX_SPI2_TX_DMA_FIFOMode                 DMA_FIFOMODE_DISABLE
#define MX_SPI2_TX_DMA_Priority                 DMA_PRIORITY_LOW
#define MX_SPI2_TX_DMA_MemDataAlignment         DMA_MDATAALIGN_BYTE
#define MX_SPI2_TX_DMA_Mode                     DMA_NORMAL
#define MX_SPI2_TX_DMA_SyncRequestNumber        1
#define MX_SPI2_TX_DMA_Request                  DMA_REQUEST_SPI2_TX
#define MX_SPI2_TX_DMA_SyncPolarity             HAL_DMAMUX_SYNC_NO_EVENT
#define MX_SPI2_TX_DMA_Direction                DMA_MEMORY_TO_PERIPH
#define MX_SPI2_TX_DMA_SignalID                 NONE
#define MX_SPI2_TX_DMA_MemInc                   DMA_MINC_ENABLE
#define MX_SPI2_TX_DMA_IpInstance               
#define MX_SPI2_TX_DMA_RequestNumber            1
#define MX_SPI2_TX_DMA_EventEnable              DISABLE
#define MX_SPI2_TX_DMA_SyncEnable               DISABLE
#define MX_SPI2_TX_DMA_DMA_Handle               
#define MX_SPI2_TX_DMA_PeriphDataAlignment      DMA_PDATAALIGN_BYTE
#define MX_SPI2_TX_DMA_Polarity                 HAL_DMAMUX_REQ_GEN_RISING
#define MX_SPI2_TX_DMA_SyncSignalID             NONE
#define MX_SPI2_TX_DMA_PeriphInc                DMA_PINC_DISABLE

/* DMA SPI2_RX */
#define MX_SPI2_RX_DMA_Instance                 DMA1_Stream2
#define MX_SPI2_RX_DMA_FIFOMode                 DMA_FIFOMODE_DISABLE
#define MX_SPI2_RX_DMA_Priority                 DMA_PRIORITY_LOW
#define MX_SPI2_RX_DMA_MemDataAlignment         DMA_MDATAALIGN_BYTE
#define MX_SPI2_RX_DMA_Mode                     DMA_NORMAL
#define MX_SPI2_RX_DMA_SyncRequestNumber        1
#define MX_SPI2_RX_DMA_Request                  DMA_REQUEST_SPI2_RX
#define MX_SPI2_RX_DMA_SyncPolarity             HAL_DMAMUX_SYNC_NO_EVENT
#define MX_SPI2_RX_DMA_Direction                DMA_PERIPH_TO_MEMORY
#define MX_SPI2_RX_DMA_SignalID                 NONE
#define MX_SPI2_RX_DMA_MemInc                   DMA_MINC_ENABLE
#define MX_SPI2_RX_DMA_IpInstance               
#define MX_SPI2_RX_DMA_RequestNumber            1
#define MX_SPI2_RX_DMA_EventEnable              DISABLE
#define MX_SPI2_RX_DMA_SyncEnable               DISABLE
#define MX_SPI2_RX_DMA_DMA_Handle               
#define MX_SPI2_RX_DMA_PeriphDataAlignment      DMA_PDATAALIGN_BYTE
#define MX_SPI2_RX_DMA_Polarity                 HAL_DMAMUX_REQ_GEN_RISING
#define MX_SPI2_RX_DMA_SyncSignalID             NONE
#define MX_SPI2_RX_DMA_PeriphInc                DMA_PINC_DISABLE

/* NVIC Configuration */

/* NVIC SPI2_IRQn */
#define MX_SPI2_IRQn_interruptPremptionPriority 0
#define MX_SPI2_IRQn_PriorityGroup              NVIC_PRIORITYGROUP_4
#define MX_SPI2_IRQn_Subriority                 0

/*-------------------------------- SPI4       --------------------------------*/

#define MX_SPI4                                 1

/* GPIO Configuration */

/* Pin PE5 */
#define MX_SPI4_MISO_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI4_MISO_Pin                        PE5
#define MX_SPI4_MISO_GPIOx                      GPIOE
#define MX_SPI4_MISO_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI4_MISO_GPIO_Pin                   GPIO_PIN_5
#define MX_SPI4_MISO_GPIO_AF                    GPIO_AF5_SPI4
#define MX_SPI4_MISO_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PE6 */
#define MX_SPI4_MOSI_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI4_MOSI_Pin                        PE6
#define MX_SPI4_MOSI_GPIOx                      GPIOE
#define MX_SPI4_MOSI_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI4_MOSI_GPIO_Pin                   GPIO_PIN_6
#define MX_SPI4_MOSI_GPIO_AF                    GPIO_AF5_SPI4
#define MX_SPI4_MOSI_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PE4 */
#define MX_SPI4_NSS_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_SPI4_NSS_Pin                         PE4
#define MX_SPI4_NSS_GPIOx                       GPIOE
#define MX_SPI4_NSS_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI4_NSS_GPIO_Pin                    GPIO_PIN_4
#define MX_SPI4_NSS_GPIO_AF                     GPIO_AF5_SPI4
#define MX_SPI4_NSS_GPIO_Mode                   GPIO_MODE_AF_PP

/* Pin PE2 */
#define MX_SPI4_SCK_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_SPI4_SCK_Pin                         PE2
#define MX_SPI4_SCK_GPIOx                       GPIOE
#define MX_SPI4_SCK_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI4_SCK_GPIO_Pin                    GPIO_PIN_2
#define MX_SPI4_SCK_GPIO_AF                     GPIO_AF5_SPI4
#define MX_SPI4_SCK_GPIO_Mode                   GPIO_MODE_AF_PP

/* DMA Configuration */

/* DMA SPI4_RX */
#define MX_SPI4_RX_DMA_Instance                 DMA1_Stream4
#define MX_SPI4_RX_DMA_FIFOMode                 DMA_FIFOMODE_DISABLE
#define MX_SPI4_RX_DMA_Priority                 DMA_PRIORITY_LOW
#define MX_SPI4_RX_DMA_MemDataAlignment         DMA_MDATAALIGN_BYTE
#define MX_SPI4_RX_DMA_Mode                     DMA_NORMAL
#define MX_SPI4_RX_DMA_SyncRequestNumber        1
#define MX_SPI4_RX_DMA_Request                  DMA_REQUEST_SPI4_RX
#define MX_SPI4_RX_DMA_SyncPolarity             HAL_DMAMUX_SYNC_NO_EVENT
#define MX_SPI4_RX_DMA_Direction                DMA_PERIPH_TO_MEMORY
#define MX_SPI4_RX_DMA_SignalID                 NONE
#define MX_SPI4_RX_DMA_MemInc                   DMA_MINC_ENABLE
#define MX_SPI4_RX_DMA_IpInstance               
#define MX_SPI4_RX_DMA_RequestNumber            1
#define MX_SPI4_RX_DMA_EventEnable              DISABLE
#define MX_SPI4_RX_DMA_SyncEnable               DISABLE
#define MX_SPI4_RX_DMA_DMA_Handle               
#define MX_SPI4_RX_DMA_PeriphDataAlignment      DMA_PDATAALIGN_BYTE
#define MX_SPI4_RX_DMA_Polarity                 HAL_DMAMUX_REQ_GEN_RISING
#define MX_SPI4_RX_DMA_SyncSignalID             NONE
#define MX_SPI4_RX_DMA_PeriphInc                DMA_PINC_DISABLE

/* DMA SPI4_TX */
#define MX_SPI4_TX_DMA_Instance                 DMA1_Stream5
#define MX_SPI4_TX_DMA_FIFOMode                 DMA_FIFOMODE_DISABLE
#define MX_SPI4_TX_DMA_Priority                 DMA_PRIORITY_LOW
#define MX_SPI4_TX_DMA_MemDataAlignment         DMA_MDATAALIGN_BYTE
#define MX_SPI4_TX_DMA_Mode                     DMA_NORMAL
#define MX_SPI4_TX_DMA_SyncRequestNumber        1
#define MX_SPI4_TX_DMA_Request                  DMA_REQUEST_SPI4_TX
#define MX_SPI4_TX_DMA_SyncPolarity             HAL_DMAMUX_SYNC_NO_EVENT
#define MX_SPI4_TX_DMA_Direction                DMA_MEMORY_TO_PERIPH
#define MX_SPI4_TX_DMA_SignalID                 NONE
#define MX_SPI4_TX_DMA_MemInc                   DMA_MINC_ENABLE
#define MX_SPI4_TX_DMA_IpInstance               
#define MX_SPI4_TX_DMA_RequestNumber            1
#define MX_SPI4_TX_DMA_EventEnable              DISABLE
#define MX_SPI4_TX_DMA_SyncEnable               DISABLE
#define MX_SPI4_TX_DMA_DMA_Handle               
#define MX_SPI4_TX_DMA_PeriphDataAlignment      DMA_PDATAALIGN_BYTE
#define MX_SPI4_TX_DMA_Polarity                 HAL_DMAMUX_REQ_GEN_RISING
#define MX_SPI4_TX_DMA_SyncSignalID             NONE
#define MX_SPI4_TX_DMA_PeriphInc                DMA_PINC_DISABLE

/* NVIC Configuration */

/* NVIC SPI4_IRQn */
#define MX_SPI4_IRQn_interruptPremptionPriority 0
#define MX_SPI4_IRQn_PriorityGroup              NVIC_PRIORITYGROUP_4
#define MX_SPI4_IRQn_Subriority                 0

/*-------------------------------- SYS        --------------------------------*/

#define MX_SYS                                  1

/* GPIO Configuration */

/* Pin PA13 (JTMS/SWDIO) */
#define MX_SYS_JTMS_SWDIO_Pin                   PA13_(JTMS_SWDIO)

/* Pin PA14 (JTCK/SWCLK) */
#define MX_SYS_JTCK_SWCLK_Pin                   PA14_(JTCK_SWCLK)

/* Pin PB3 (JTDO/TRACESWO) */
#define MX_SYS_JTDO_SWO_Pin                     PB3_(JTDO_TRACESWO)

/*-------------------------------- UART4      --------------------------------*/

#define MX_UART4                                1

#define MX_UART4_VM                             VM_ASYNC

/* GPIO Configuration */

/* Pin PA1 */
#define MX_UART4_RX_GPIO_ModeDefaultPP          GPIO_MODE_AF_PP
#define MX_UART4_RX_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_UART4_RX_Pin                         PA1
#define MX_UART4_RX_GPIOx                       GPIOA
#define MX_UART4_RX_GPIO_PuPd                   GPIO_NOPULL
#define MX_UART4_RX_GPIO_Pin                    GPIO_PIN_1
#define MX_UART4_RX_GPIO_AF                     GPIO_AF8_UART4

/* Pin PA0 */
#define MX_UART4_TX_GPIO_ModeDefaultPP          GPIO_MODE_AF_PP
#define MX_UART4_TX_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_UART4_TX_Pin                         PA0
#define MX_UART4_TX_GPIOx                       GPIOA
#define MX_UART4_TX_GPIO_PuPd                   GPIO_NOPULL
#define MX_UART4_TX_GPIO_Pin                    GPIO_PIN_0
#define MX_UART4_TX_GPIO_AF                     GPIO_AF8_UART4

/* Pin PA15 (JTDI) */
#define MX_UART4_RTS_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_UART4_RTS_Pin                        PA15_(JTDI)
#define MX_UART4_RTS_GPIOx                      GPIOA
#define MX_UART4_RTS_GPIO_PuPd                  GPIO_NOPULL
#define MX_UART4_RTS_GPIO_Pin                   GPIO_PIN_15
#define MX_UART4_RTS_GPIO_AF                    GPIO_AF8_UART4
#define MX_UART4_RTS_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PB15 */
#define MX_UART4_CTS_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_UART4_CTS_Pin                        PB15
#define MX_UART4_CTS_GPIOx                      GPIOB
#define MX_UART4_CTS_GPIO_PuPd                  GPIO_NOPULL
#define MX_UART4_CTS_GPIO_Pin                   GPIO_PIN_15
#define MX_UART4_CTS_GPIO_AF                    GPIO_AF8_UART4
#define MX_UART4_CTS_GPIO_Mode                  GPIO_MODE_AF_PP

/* DMA Configuration */

/* DMA UART4_RX */
#define MX_UART4_RX_DMA_Instance                DMA1_Stream6
#define MX_UART4_RX_DMA_FIFOMode                DMA_FIFOMODE_DISABLE
#define MX_UART4_RX_DMA_Priority                DMA_PRIORITY_LOW
#define MX_UART4_RX_DMA_MemDataAlignment        DMA_MDATAALIGN_BYTE
#define MX_UART4_RX_DMA_Mode                    DMA_NORMAL
#define MX_UART4_RX_DMA_SyncRequestNumber       1
#define MX_UART4_RX_DMA_Request                 DMA_REQUEST_UART4_RX
#define MX_UART4_RX_DMA_SyncPolarity            HAL_DMAMUX_SYNC_NO_EVENT
#define MX_UART4_RX_DMA_Direction               DMA_PERIPH_TO_MEMORY
#define MX_UART4_RX_DMA_SignalID                NONE
#define MX_UART4_RX_DMA_MemInc                  DMA_MINC_ENABLE
#define MX_UART4_RX_DMA_IpInstance              
#define MX_UART4_RX_DMA_RequestNumber           1
#define MX_UART4_RX_DMA_EventEnable             DISABLE
#define MX_UART4_RX_DMA_SyncEnable              DISABLE
#define MX_UART4_RX_DMA_DMA_Handle              
#define MX_UART4_RX_DMA_PeriphDataAlignment     DMA_PDATAALIGN_BYTE
#define MX_UART4_RX_DMA_Polarity                HAL_DMAMUX_REQ_GEN_RISING
#define MX_UART4_RX_DMA_SyncSignalID            NONE
#define MX_UART4_RX_DMA_PeriphInc               DMA_PINC_DISABLE

/* DMA UART4_TX */
#define MX_UART4_TX_DMA_Instance                DMA1_Stream7
#define MX_UART4_TX_DMA_FIFOMode                DMA_FIFOMODE_DISABLE
#define MX_UART4_TX_DMA_Priority                DMA_PRIORITY_LOW
#define MX_UART4_TX_DMA_MemDataAlignment        DMA_MDATAALIGN_BYTE
#define MX_UART4_TX_DMA_Mode                    DMA_NORMAL
#define MX_UART4_TX_DMA_SyncRequestNumber       1
#define MX_UART4_TX_DMA_Request                 DMA_REQUEST_UART4_TX
#define MX_UART4_TX_DMA_SyncPolarity            HAL_DMAMUX_SYNC_NO_EVENT
#define MX_UART4_TX_DMA_Direction               DMA_MEMORY_TO_PERIPH
#define MX_UART4_TX_DMA_SignalID                NONE
#define MX_UART4_TX_DMA_MemInc                  DMA_MINC_ENABLE
#define MX_UART4_TX_DMA_IpInstance              
#define MX_UART4_TX_DMA_RequestNumber           1
#define MX_UART4_TX_DMA_EventEnable             DISABLE
#define MX_UART4_TX_DMA_SyncEnable              DISABLE
#define MX_UART4_TX_DMA_DMA_Handle              
#define MX_UART4_TX_DMA_PeriphDataAlignment     DMA_PDATAALIGN_BYTE
#define MX_UART4_TX_DMA_Polarity                HAL_DMAMUX_REQ_GEN_RISING
#define MX_UART4_TX_DMA_SyncSignalID            NONE
#define MX_UART4_TX_DMA_PeriphInc               DMA_PINC_DISABLE

/*-------------------------------- UART5      --------------------------------*/

#define MX_UART5                                1

#define MX_UART5_VM                             VM_ASYNC

/* GPIO Configuration */

/* Pin PD2 */
#define MX_UART5_RX_GPIO_ModeDefaultPP          GPIO_MODE_AF_PP
#define MX_UART5_RX_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_UART5_RX_Pin                         PD2
#define MX_UART5_RX_GPIOx                       GPIOD
#define MX_UART5_RX_GPIO_PuPd                   GPIO_NOPULL
#define MX_UART5_RX_GPIO_Pin                    GPIO_PIN_2
#define MX_UART5_RX_GPIO_AF                     GPIO_AF8_UART5

/* Pin PC12 */
#define MX_UART5_TX_GPIO_ModeDefaultPP          GPIO_MODE_AF_PP
#define MX_UART5_TX_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_UART5_TX_Pin                         PC12
#define MX_UART5_TX_GPIOx                       GPIOC
#define MX_UART5_TX_GPIO_PuPd                   GPIO_NOPULL
#define MX_UART5_TX_GPIO_Pin                    GPIO_PIN_12
#define MX_UART5_TX_GPIO_AF                     GPIO_AF8_UART5

/* DMA Configuration */

/* DMA UART5_RX */
#define MX_UART5_RX_DMA_Instance                DMA2_Stream0
#define MX_UART5_RX_DMA_FIFOMode                DMA_FIFOMODE_DISABLE
#define MX_UART5_RX_DMA_Priority                DMA_PRIORITY_LOW
#define MX_UART5_RX_DMA_MemDataAlignment        DMA_MDATAALIGN_BYTE
#define MX_UART5_RX_DMA_Mode                    DMA_NORMAL
#define MX_UART5_RX_DMA_SyncRequestNumber       1
#define MX_UART5_RX_DMA_Request                 DMA_REQUEST_UART5_RX
#define MX_UART5_RX_DMA_SyncPolarity            HAL_DMAMUX_SYNC_NO_EVENT
#define MX_UART5_RX_DMA_Direction               DMA_PERIPH_TO_MEMORY
#define MX_UART5_RX_DMA_SignalID                NONE
#define MX_UART5_RX_DMA_MemInc                  DMA_MINC_ENABLE
#define MX_UART5_RX_DMA_IpInstance              
#define MX_UART5_RX_DMA_RequestNumber           1
#define MX_UART5_RX_DMA_EventEnable             DISABLE
#define MX_UART5_RX_DMA_SyncEnable              DISABLE
#define MX_UART5_RX_DMA_DMA_Handle              
#define MX_UART5_RX_DMA_PeriphDataAlignment     DMA_PDATAALIGN_BYTE
#define MX_UART5_RX_DMA_Polarity                HAL_DMAMUX_REQ_GEN_RISING
#define MX_UART5_RX_DMA_SyncSignalID            NONE
#define MX_UART5_RX_DMA_PeriphInc               DMA_PINC_DISABLE

/* DMA UART5_TX */
#define MX_UART5_TX_DMA_Instance                DMA2_Stream1
#define MX_UART5_TX_DMA_FIFOMode                DMA_FIFOMODE_DISABLE
#define MX_UART5_TX_DMA_Priority                DMA_PRIORITY_LOW
#define MX_UART5_TX_DMA_MemDataAlignment        DMA_MDATAALIGN_BYTE
#define MX_UART5_TX_DMA_Mode                    DMA_NORMAL
#define MX_UART5_TX_DMA_SyncRequestNumber       1
#define MX_UART5_TX_DMA_Request                 DMA_REQUEST_UART5_TX
#define MX_UART5_TX_DMA_SyncPolarity            HAL_DMAMUX_SYNC_NO_EVENT
#define MX_UART5_TX_DMA_Direction               DMA_MEMORY_TO_PERIPH
#define MX_UART5_TX_DMA_SignalID                NONE
#define MX_UART5_TX_DMA_MemInc                  DMA_MINC_ENABLE
#define MX_UART5_TX_DMA_IpInstance              
#define MX_UART5_TX_DMA_RequestNumber           1
#define MX_UART5_TX_DMA_EventEnable             DISABLE
#define MX_UART5_TX_DMA_SyncEnable              DISABLE
#define MX_UART5_TX_DMA_DMA_Handle              
#define MX_UART5_TX_DMA_PeriphDataAlignment     DMA_PDATAALIGN_BYTE
#define MX_UART5_TX_DMA_Polarity                HAL_DMAMUX_REQ_GEN_RISING
#define MX_UART5_TX_DMA_SyncSignalID            NONE
#define MX_UART5_TX_DMA_PeriphInc               DMA_PINC_DISABLE

/*-------------------------------- USB_OTG_HS --------------------------------*/

#define MX_USB_OTG_HS                           1

#define MX_USB_OTG_HS_HOST                      1

/* GPIO Configuration */

/* Pin PB0 */
#define MX_USB_OTG_HS_ULPI_D1_GPIO_Speed        GPIO_SPEED_FREQ_HIGH
#define MX_USB_OTG_HS_ULPI_D1_Pin               PB0
#define MX_USB_OTG_HS_ULPI_D1_GPIOx             GPIOB
#define MX_USB_OTG_HS_ULPI_D1_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D1_GPIO_Pin          GPIO_PIN_0
#define MX_USB_OTG_HS_ULPI_D1_GPIO_AF           GPIO_AF10_OTG2_HS
#define MX_USB_OTG_HS_ULPI_D1_GPIO_Mode         GPIO_MODE_AF_PP

/* Pin PB1 */
#define MX_USB_OTG_HS_ULPI_D2_GPIO_Speed        GPIO_SPEED_FREQ_HIGH
#define MX_USB_OTG_HS_ULPI_D2_Pin               PB1
#define MX_USB_OTG_HS_ULPI_D2_GPIOx             GPIOB
#define MX_USB_OTG_HS_ULPI_D2_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D2_GPIO_Pin          GPIO_PIN_1
#define MX_USB_OTG_HS_ULPI_D2_GPIO_AF           GPIO_AF10_OTG2_HS
#define MX_USB_OTG_HS_ULPI_D2_GPIO_Mode         GPIO_MODE_AF_PP

/* Pin PB10 */
#define MX_USB_OTG_HS_ULPI_D3_GPIO_Speed        GPIO_SPEED_FREQ_HIGH
#define MX_USB_OTG_HS_ULPI_D3_Pin               PB10
#define MX_USB_OTG_HS_ULPI_D3_GPIOx             GPIOB
#define MX_USB_OTG_HS_ULPI_D3_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D3_GPIO_Pin          GPIO_PIN_10
#define MX_USB_OTG_HS_ULPI_D3_GPIO_AF           GPIO_AF10_OTG2_HS
#define MX_USB_OTG_HS_ULPI_D3_GPIO_Mode         GPIO_MODE_AF_PP

/* Pin PB11 */
#define MX_USB_OTG_HS_ULPI_D4_GPIO_Speed        GPIO_SPEED_FREQ_HIGH
#define MX_USB_OTG_HS_ULPI_D4_Pin               PB11
#define MX_USB_OTG_HS_ULPI_D4_GPIOx             GPIOB
#define MX_USB_OTG_HS_ULPI_D4_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D4_GPIO_Pin          GPIO_PIN_11
#define MX_USB_OTG_HS_ULPI_D4_GPIO_AF           GPIO_AF10_OTG2_HS
#define MX_USB_OTG_HS_ULPI_D4_GPIO_Mode         GPIO_MODE_AF_PP

/* Pin PC3_C */
#define MX_USB_OTG_HS_ULPI_NXT_GPIO_Speed       GPIO_SPEED_FREQ_HIGH
#define MX_USB_OTG_HS_ULPI_NXT_Pin              PC3_C
#define MX_USB_OTG_HS_ULPI_NXT_GPIOx            GPIOC
#define MX_USB_OTG_HS_ULPI_NXT_GPIO_PuPd        GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_NXT_GPIO_Pin         GPIO_PIN_3
#define MX_USB_OTG_HS_ULPI_NXT_GPIO_AF          GPIO_AF10_OTG2_HS
#define MX_USB_OTG_HS_ULPI_NXT_GPIO_Mode        GPIO_MODE_AF_PP

/* Pin PB12 */
#define MX_USB_OTG_HS_ULPI_D5_GPIO_Speed        GPIO_SPEED_FREQ_HIGH
#define MX_USB_OTG_HS_ULPI_D5_Pin               PB12
#define MX_USB_OTG_HS_ULPI_D5_GPIOx             GPIOB
#define MX_USB_OTG_HS_ULPI_D5_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D5_GPIO_Pin          GPIO_PIN_12
#define MX_USB_OTG_HS_ULPI_D5_GPIO_AF           GPIO_AF10_OTG2_HS
#define MX_USB_OTG_HS_ULPI_D5_GPIO_Mode         GPIO_MODE_AF_PP

/* Pin PB13 */
#define MX_USB_OTG_HS_ULPI_D6_GPIO_Speed        GPIO_SPEED_FREQ_HIGH
#define MX_USB_OTG_HS_ULPI_D6_Pin               PB13
#define MX_USB_OTG_HS_ULPI_D6_GPIOx             GPIOB
#define MX_USB_OTG_HS_ULPI_D6_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D6_GPIO_Pin          GPIO_PIN_13
#define MX_USB_OTG_HS_ULPI_D6_GPIO_AF           GPIO_AF10_OTG2_HS
#define MX_USB_OTG_HS_ULPI_D6_GPIO_Mode         GPIO_MODE_AF_PP

/* Pin PB5 */
#define MX_USB_OTG_HS_ULPI_D7_GPIO_Speed        GPIO_SPEED_FREQ_HIGH
#define MX_USB_OTG_HS_ULPI_D7_Pin               PB5
#define MX_USB_OTG_HS_ULPI_D7_GPIOx             GPIOB
#define MX_USB_OTG_HS_ULPI_D7_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D7_GPIO_Pin          GPIO_PIN_5
#define MX_USB_OTG_HS_ULPI_D7_GPIO_AF           GPIO_AF10_OTG2_HS
#define MX_USB_OTG_HS_ULPI_D7_GPIO_Mode         GPIO_MODE_AF_PP

/* Pin PC2_C */
#define MX_USB_OTG_HS_ULPI_DIR_GPIO_Speed       GPIO_SPEED_FREQ_HIGH
#define MX_USB_OTG_HS_ULPI_DIR_Pin              PC2_C
#define MX_USB_OTG_HS_ULPI_DIR_GPIOx            GPIOC
#define MX_USB_OTG_HS_ULPI_DIR_GPIO_PuPd        GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_DIR_GPIO_Pin         GPIO_PIN_2
#define MX_USB_OTG_HS_ULPI_DIR_GPIO_AF          GPIO_AF10_OTG2_HS
#define MX_USB_OTG_HS_ULPI_DIR_GPIO_Mode        GPIO_MODE_AF_PP

/* Pin PA5 */
#define MX_USB_OTG_HS_ULPI_CK_GPIO_Speed        GPIO_SPEED_FREQ_HIGH
#define MX_USB_OTG_HS_ULPI_CK_Pin               PA5
#define MX_USB_OTG_HS_ULPI_CK_GPIOx             GPIOA
#define MX_USB_OTG_HS_ULPI_CK_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_CK_GPIO_Pin          GPIO_PIN_5
#define MX_USB_OTG_HS_ULPI_CK_GPIO_AF           GPIO_AF10_OTG2_HS
#define MX_USB_OTG_HS_ULPI_CK_GPIO_Mode         GPIO_MODE_AF_PP

/* Pin PC0 */
#define MX_USB_OTG_HS_ULPI_STP_GPIO_Speed       GPIO_SPEED_FREQ_HIGH
#define MX_USB_OTG_HS_ULPI_STP_Pin              PC0
#define MX_USB_OTG_HS_ULPI_STP_GPIOx            GPIOC
#define MX_USB_OTG_HS_ULPI_STP_GPIO_PuPd        GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_STP_GPIO_Pin         GPIO_PIN_0
#define MX_USB_OTG_HS_ULPI_STP_GPIO_AF          GPIO_AF10_OTG2_HS
#define MX_USB_OTG_HS_ULPI_STP_GPIO_Mode        GPIO_MODE_AF_PP

/* Pin PA3 */
#define MX_USB_OTG_HS_ULPI_D0_GPIO_Speed        GPIO_SPEED_FREQ_HIGH
#define MX_USB_OTG_HS_ULPI_D0_Pin               PA3
#define MX_USB_OTG_HS_ULPI_D0_GPIOx             GPIOA
#define MX_USB_OTG_HS_ULPI_D0_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D0_GPIO_Pin          GPIO_PIN_3
#define MX_USB_OTG_HS_ULPI_D0_GPIO_AF           GPIO_AF10_OTG2_HS
#define MX_USB_OTG_HS_ULPI_D0_GPIO_Mode         GPIO_MODE_AF_PP

/*-------------------------------- NVIC       --------------------------------*/

#define MX_NVIC                                 1

/*-------------------------------- GPIO       --------------------------------*/

#define MX_GPIO                                 1

/* GPIO Configuration */

#endif  /* __MX_DEVICE_H */

