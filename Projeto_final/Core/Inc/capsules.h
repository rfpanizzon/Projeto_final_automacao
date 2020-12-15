#include "stm32f1xx_hal.h"
#include <stdio.h>

#define sim 1
#define nao 0

//Estrutura para guardar os dados das capsulas
typedef struct
{
	char nome[17];
	char tipo_agua[10];
	float tempo_agua;
	float temperatura_agua;
	int8_t com_gas;
	float tempo_gas;
}info_capsula;

uint8_t state_Bn1_bit0;
uint8_t state_Bn1_bit1;
uint8_t state_Bn1_bit2;

info_capsula capsulas[8];


void capsules_init(void);
uint8_t capsules_get_value(GPIO_TypeDef * GPIO, uint16_t Bn1_bit0, uint16_t Bn1_bit1, uint16_t Bn1_bit2);
