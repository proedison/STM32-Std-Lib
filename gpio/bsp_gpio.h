#ifndef __GPIO_H
#define	__GPIO_H

#include "stm32f10x.h"


/* GPIO��Ŷ��� */
#define A 'A'
#define B 'B'
#define C 'C'
#define D 'D'
#define E 'E'
#define F 'F'
#define G 'G'


/* ֱ�Ӳ����Ĵ����ķ�������IO */
#define	digitalHi(p,i)		 {p->BSRR=i;}	 //���Ϊ�ߵ�ƽ		
#define digitalLo(p,i)		 {p->BRR=i;}	 //����͵�ƽ
#define digitalToggle(p,i)   {p->ODR ^=i;} //�����ת״̬


/* ʼ��Ĭ���ٶ�Ϊ50MHz */
#define GPIO_A_G_Init_Default(GPIO,GPIO_Pin,GPIO_Mode) GPIO_A_G_Init(GPIO,GPIO_Pin,GPIO_Mode,GPIO_Speed_50MHz)  


/* IO��ʼ�� */
void GPIOA_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed);
void GPIOB_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed);
void GPIOC_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed);
void GPIOD_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed);
void GPIOE_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed);
void GPIOG_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed);
void GPIO_A_G_Init(char GPIO,uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed);

#endif /* __GPIO_H */
