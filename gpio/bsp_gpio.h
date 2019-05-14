#ifndef __GPIO_H
#define	__GPIO_H

#include "stm32f10x.h"


/* GPIO编号定义 */
#define A 1
#define B 2
#define C 3
#define D 4
#define E 5
#define F 6
#define G 7

#define	GPIO_H(p,i)		 {p->BSRR=i;}	 //输出为高电平		
#define GPIO_L(p,i)		 {p->BRR=i;}	 //输出低电平
#define GPIO_T(p,i)      {p->ODR ^=i;}   //输出反转状态

/* 始化默认速度为50MHz */
#define GPIO_A_G_Init_Default(GPIO,GPIO_Pin,GPIO_Mode) GPIO_A_G_Init(GPIO,GPIO_Pin,GPIO_Mode,GPIO_Speed_50MHz)  

void GPIO_A_G_Init(uint8_t GPIO,uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed);
/* IO初始化 */
void GPIOA_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed);
void GPIOB_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed);
void GPIOC_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed);
void GPIOD_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed);
void GPIOE_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed);
void GPIOG_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed);

#endif /* __GPIO_H */
