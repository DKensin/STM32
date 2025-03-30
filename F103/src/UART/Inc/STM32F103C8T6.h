#ifndef _STM32F103C8T6_H__
#define _STM32F103C8T6_H__

#include <stdint.h>

/*******************************************************************************************************************
 * Peripheral Hardware Access Layer for RCC                                                                        *
 *******************************************************************************************************************
 */

typedef struct
{
    uint32_t CR;
    uint32_t CFGR;
    uint32_t CIR;
    uint32_t APB2RSTR;
    uint32_t APB1RSTR;
    uint32_t AHBENR;
    uint32_t APB2ENR;
    uint32_t APB1ENR;
    uint32_t BDCR;
    uint32_t CSR;
    uint32_t AHBSTR;
    uint32_t CFGR2;
} RCC_Type;

#define RCC_BASE                    (0x40021000u)
#define RCC                         ((RCC_Type *)RCC_BASE)

#define RCC_CR_HSEON_SHIFT          (16u)
#define RCC_CR_HSEON_MASK           (0x10000u)
#define RCC_CR_HSEON(x)             (((x) << RCC_CR_HSEON_SHIFT) & (RCC_CR_HSEON_MASK))

#define RCC_CR_HSERDY_MASK          (0x20000u)

#define RCC_CFGR_SW_SHIFT           (0u)
#define RCC_CFGR_SW_MASK            (0x3u)
#define RCC_CFGR_SW(x)              (((x) << RCC_CFGR_SW_SHIFT) & (RCC_CFGR_SW_MASK))

#define RCC_CFGR_HPRE_SHIFT         (4u)
#define RCC_CFGR_HPRE_MASK          (0xF0u)
#define RCC_CFGR_HPRE(x)            (((x) << RCC_CFGR_HPRE_SHIFT) & (RCC_CFGR_HPRE_MASK))

#define RCC_CFGR_PPRE1_SHIFT        (8u)
#define RCC_CFGR_PPRE1_MASK         (0x700u)
#define RCC_CFGR_PPRE1(x)           (((x) << RCC_CFGR_PPRE1_SHIFT) & (RCC_CFGR_PPRE1_MASK))

#define RCC_CFGR_PPRE2_SHIFT        (11u)
#define RCC_CFGR_PPRE2_MASK         (0x3800u)
#define RCC_CFGR_PPRE2(x)           (((x) << RCC_CFGR_PPRE2_SHIFT) & (RCC_CFGR_PPRE2_MASK))

#define RCC_CFGR_PLLSRC_SHIFT       (16u)
#define RCC_CFGR_PLLSRC_MASK        (0x10000u)
#define RCC_CFGR_PLLSRC(x)          (((x) << RCC_CFGR_PLLSRC_SHIFT) & (RCC_CFGR_PLLSRC_MASK))

#define RCC_CFGR_PLLMUL_SHIFT       (18u)
#define RCC_CFGR_PLLMUL_MASK        (0x3C0000u)
#define RCC_CFGR_PLLMUL(x)          (((x) << RCC_CFGR_PLLMUL_SHIFT) & (RCC_CFGR_PLLMUL_MASK))

#define RCC_APB1ENR_TIM2EN_SHIFT    (0u)
#define RCC_APB1ENR_TIM2EN_MASK     (0x1u)
#define RCC_APB1ENR_TIM2EN(x)       (((x) << RCC_APB1ENR_TIM2EN_SHIFT) & (RCC_APB1ENR_TIM2EN_MASK))

#define RCC_APB2ENR_IOPAEN_SHIFT    (2u)
#define RCC_APB2ENR_IOPAEN_MASK     (0x4u)
#define RCC_APB2ENR_IOPAEN(x)       (((x) << RCC_APB2ENR_IOPAEN_SHIFT) & (RCC_APB2ENR_IOPAEN_MASK))

#define RCC_CFGR2_PREDIV1_SHIFT     (0u)
#define RCC_CFGR2_PREDIV1_MASK      (0xFu)
#define RCC_CFGR2_PREDIV1(x)        (((x) << RCC_CFGR2_PREDIV1_SHIFT) & (RCC_CFGR2_PREDIV1_MASK))

#define RCC_CFGR2_PREDIV1SRC_SHIFT  (16u)
#define RCC_CFGR2_PREDIV1SRC_MASK   (0x10000u)
#define RCC_CFGR2_PREDIV1SRC(x)     (((x) << RCC_CFGR2_PREDIV1SRC_SHIFT) & (RCC_CFGR2_PREDIV1SRC_MASK))

/*******************************************************************************************************************
 * Peripheral Hardware Access Layer for GPIO                                                                       *
 *******************************************************************************************************************
 */

typedef struct
{
    uint32_t CRL;
    uint32_t CRH;
    uint32_t IDR;
    uint32_t ODR;
    uint32_t BSRR;
    uint32_t BRR;
    uint32_t LCKR;
} GPIO_Type;

#define GPIOA_BASE                  (0x40010800u)
#define GPIOA                       ((GPIO_Type *)GPIOA_BASE)
#define GPIOC_BASE                  (0x40011000u)
#define GPIOC                       ((GPIO_Type *)GPIOC_BASE)

#define GPIO_CRL_MODE0_SHIFT        (0u)
#define GPIO_CRL_MODE0_MASK         (0x3u)
#define GPIO_CRL_MODE0(x)           (((x) << GPIO_CRL_MODE0_SHIFT) & (GPIO_CRL_MODE0_MASK))

#define GPIO_CRL_CNF0_SHIFT         (2u)
#define GPIO_CRL_CNF0_MASK          (0xCu)
#define GPIO_CRL_CNF0(x)            (((x) << GPIO_CRL_CNF0_SHIFT) & (GPIO_CRL_CNF0_MASK))

#define GPIO_CRH_MODE13_SHIFT       (20u)
#define GPIO_CRH_MODE13_MASK        (0x300000u)
#define GPIO_CRH_MODE13(x)          (((x) << GPIO_CRH_MODE13_SHIFT) & (GPIO_CRH_MODE13_MASK))

#define GPIO_CRH_CNF13_SHIFT        (22u)
#define GPIO_CRH_CNF13_MASK         (0xC00000u)
#define GPIO_CRH_CNF13(x)           (((x) << GPIO_CRH_CNF13_SHIFT) & (GPIO_CRH_CNF13_MASK))

#define GPIO_BSRR_BS13_SHIFT        (13u)
#define GPIO_BSRR_BS13_MASK         (0x2000u)
#define GPIO_BSRR_BS13(x)           (((x) << GPIO_BSRR_BS13_SHIFT) & (GPIO_BSRR_BS13_MASK))

#define GPIO_BSRR_BR13_SHIFT        (29u)
#define GPIO_BSRR_BR13_MASK         (0x20000000u)
#define GPIO_BSRR_BR13(x)           (((x) << GPIO_BSRR_BR13_SHIFT) & (GPIO_BSRR_BR13_MASK))

/*******************************************************************************************************************
 * Peripheral Hardware Access Layer for UART                                                                       *
 *******************************************************************************************************************
 */


#endif /* _STM32F103C8T6_H__ */
