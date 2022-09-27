#ifndef _STM32F446_H_
#define _STM32F446_H_

#ifdef __cplusplus
    extern "C" {
#endif

/*!< Microcontroller Base Addresses */
#define FLASH_BASE                  ((uint32_t)0x08000000U)             /*!< FLASH base address in the alias region */
#define SRAM_BASE                   ((uint32_t)0x20000000U)             /*!< SRAM base address in the alias region */

/*!< AHB1 Peripherals */
#define RCC_REGISTER                ((uint32_t)0x40023800U)
#define GPIOA_REGISTER              ((uint32_t)0x40020000U)

/*!< Register Memory Maps */
#define RCC                         ((RCC_TypeDef *)RCC_REGISTER)
#define GPIOA                       ((GPIO_TypeDef *)GPIOA_REGISTER)

/*!< RCC AHB1 Peripheral Clock Enable Register Bit Assignments */
#define RCC_AHB1ENR_GPIOA    		0x00000001                        			/*!< GPIOA clock enable */

typedef struct
{
    volatile uint32_t MODER;        /*!< GPIO Port Mode Register,                   Address offset: 0x00 */
    volatile uint32_t OTYPER;       /*!< GPIO Port Output Type Register,            Address offset: 0x04 */
    volatile uint32_t OSPEEDR;      /*!< GPIO Port Output Speed Register,           Address offset: 0x08 */
    volatile uint32_t PUPDR;        /*!< GPIO Port Pull-Up/Pull-Down Register,      Address offset: 0x0C */
    volatile uint32_t IDR;          /*!< GPIO Port Input Data Register,             Address offset: 0x10 */
    volatile uint32_t ODR;          /*!< GPIO Port Output Data Register,            Address offset: 0x14 */
    volatile uint32_t BSRR;         /*!< GPIO Port Bit Set/Reset Register,          Address offset: 0x18 */
    volatile uint32_t LCKR;         /*!< GPIO Port Configuration Lock Register,     Address offset: 0x1C */
    volatile uint32_t AFRL;         /*!< GPIO Alternate Function Low Register,      Address offset: 0x20 */
	volatile uint32_t AFRH;         /*!< GPIO Alternate Function High Register,     Address offset: 0x24 */
} GPIO_TypeDef;


typedef struct
{
    volatile uint32_t CR;           /*!< RCC Clock Control Register,                                  Address offset: 0x00 */
    volatile uint32_t PLLCFGR;      /*!< RCC PLL Configuration Register,                              Address offset: 0x04 */
    volatile uint32_t CFGR;         /*!< RCC Clock Configuration Register,                            Address offset: 0x08 */
    volatile uint32_t CIR;          /*!< RCC Clock Interrupt Register,                                Address offset: 0x0C */
    volatile uint32_t AHB1RSTR;     /*!< RCC AHB1 Peripheral Reset Register,                          Address offset: 0x10 */
    volatile uint32_t AHB2RSTR;     /*!< RCC AHB2 Peripheral Reset Register,                          Address offset: 0x14 */
    volatile uint32_t AHB3RSTR;     /*!< RCC AHB3 Peripheral Reset Register,                          Address offset: 0x18 */
             uint32_t RESERVED01;   /*!< Reserved,                                                    Address offset: 0x1C */
    volatile uint32_t APB1RSTR;     /*!< RCC APB1 Peripheral Reset Register,                          Address offset: 0x20 */
    volatile uint32_t APB2RSTR;     /*!< RCC APB2 Peripheral Reset Register,                          Address offset: 0x24 */
             uint32_t RESERVED02;   /*!< Reserved,                                                    Address offset: 0x28 */
             uint32_t RESERVED03;   /*!< Reserved,                                                    Address offset: 0x2C */
    volatile uint32_t AHB1ENR;      /*!< RCC AHB1 Peripheral Clock Enable Register,                   Address offset: 0x30 */
    volatile uint32_t AHB2ENR;      /*!< RCC AHB2 Peripheral Clock Enable Register,                   Address offset: 0x34 */
    volatile uint32_t AHB3ENR;      /*!< RCC AHB3 Peripheral Clock Enable Register,                   Address offset: 0x38 */
             uint32_t RESERVED04;   /*!< Reserved,                                                    Address offset: 0x3C */
    volatile uint32_t APB1ENR;      /*!< RCC APB1 Peripheral Clock Enable Register,                   Address offset: 0x40 */
    volatile uint32_t APB2ENR;      /*!< RCC APB2 Peripheral Clock Enable Register,                   Address offset: 0x44 */
             uint32_t RESERVED05;   /*!< Reserved,                                                    Address offset: 0x48 */
             uint32_t RESERVED06;   /*!< Reserved,                                                    Address offset: 0x4C */
    volatile uint32_t AHB1LPENR;    /*!< RCC AHB1 Peripheral Clock Enable in Low Power Mode Register, Address offset: 0x50 */
    volatile uint32_t AHB2LPENR;    /*!< RCC AHB1 Peripheral Clock Enable in Low Power Mode Register, Address offset: 0x54 */
    volatile uint32_t AHB3LPENR;    /*!< RCC AHB1 Peripheral Clock Enable in Low Power Mode Register, Address offset: 0x58 */
             uint32_t RESERVED07;   /*!< Reserved,                                                    Address offset: 0x5C */
    volatile uint32_t APB1LPENR;    /*!< RCC APB1 Peripheral Clock Enable in Low Power Mode Register, Address offset: 0x60 */
    volatile uint32_t APB2LPENR;    /*!< RCC APB2 Peripheral Clock Enable in Low Power Mode Register, Address offset: 0x64 */
             uint32_t RESERVED08;   /*!< Reserved,                                                    Address offset: 0x68 */
             uint32_t RESERVED09;   /*!< Reserved,                                                    Address offset: 0x6C */
    volatile uint32_t BDCR;         /*!< RCC Backup Domain Control Register,                          Address offset: 0x70 */
    volatile uint32_t CSR;          /*!< RCC Clock Control & Status Register,                         Address offset: 0x74 */
             uint32_t RESERVED10;   /*!< Reserved,                                                    Address offset: 0x78 */
             uint32_t RESERVED11;   /*!< Reserved,                                                    Address offset: 0x7C */
    volatile uint32_t SSCGR;        /*!< RCC Spread Spectrum Clock Generation Register,               Address offset: 0x80 */
    volatile uint32_t PLLI2SCFGR;   /*!< RCC PLLI2S Configuration Register,                           Address offset: 0x84 */
    volatile uint32_t PLLSAICFGR;   /*!< RCC PLL Configuration Register,                              Address offset: 0x88 */
    volatile uint32_t DCKCFGR;      /*!< RCC Dedicated Clock Configuration Register,                  Address offset: 0x8C */
    volatile uint32_t CKGATENR;     /*!< RCC Clocks Gated Enable Register,                            Address offset: 0x90 */
    volatile uint32_t DCKCFGR2;     /*!< RCC Dedicated Clocks Configuration Register 2,               Address offset: 0x94 */   
} RCC_TypeDef;

#endif

