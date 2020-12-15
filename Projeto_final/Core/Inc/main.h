/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Heart_Beat_Pin GPIO_PIN_13
#define Heart_Beat_GPIO_Port GPIOC
#define Button_Select_Pin GPIO_PIN_14
#define Button_Select_GPIO_Port GPIOC
#define Button_Cancel_Pin GPIO_PIN_15
#define Button_Cancel_GPIO_Port GPIOC
#define Timer2CH1___R1___Aquecimento_resistivo__sa_da_PWM_Pin GPIO_PIN_0
#define Timer2CH1___R1___Aquecimento_resistivo__sa_da_PWM_GPIO_Port GPIOA
#define Timer2CH2___CP1___Compressor_de_refrigera__o__sa_da_PWM_Pin GPIO_PIN_1
#define Timer2CH2___CP1___Compressor_de_refrigera__o__sa_da_PWM_GPIO_Port GPIOA
#define Timer2CH3___B1___Bomba_de_alimenta__o_de__gua__sa_da_PWM_Pin GPIO_PIN_2
#define Timer2CH3___B1___Bomba_de_alimenta__o_de__gua__sa_da_PWM_GPIO_Port GPIOA
#define ADC1IN4___T1___Sensor_de_temperatura_anal_gico__5__100_C_Pin GPIO_PIN_4
#define ADC1IN4___T1___Sensor_de_temperatura_anal_gico__5__100_C_GPIO_Port GPIOA
#define ADC1IN5___T2___Sensor_de_temperatura_anal_gico__5__50_C_Pin GPIO_PIN_5
#define ADC1IN5___T2___Sensor_de_temperatura_anal_gico__5__50_C_GPIO_Port GPIOA
#define Y1___V_lvula_de_para_alimenta__o_de__gua_quente_Pin GPIO_PIN_12
#define Y1___V_lvula_de_para_alimenta__o_de__gua_quente_GPIO_Port GPIOB
#define Y2___V_lvula_de_para_alimenta__o_de__gua_gelada_Pin GPIO_PIN_13
#define Y2___V_lvula_de_para_alimenta__o_de__gua_gelada_GPIO_Port GPIOB
#define Y3___V_lvula_de_para_alimenta__o_de__gua_natural_Pin GPIO_PIN_14
#define Y3___V_lvula_de_para_alimenta__o_de__gua_natural_GPIO_Port GPIOB
#define Y4___V_lvula_de_para_alimenta__o_de_CO2_Pin GPIO_PIN_15
#define Y4___V_lvula_de_para_alimenta__o_de_CO2_GPIO_Port GPIOB
#define Button___Pin GPIO_PIN_8
#define Button___GPIO_Port GPIOA
#define Button__A9_Pin GPIO_PIN_9
#define Button__A9_GPIO_Port GPIOA
#define BN1__Leitor__ptico_para_detec__o_do_tipo_de_c_psula___bit0_Pin GPIO_PIN_11
#define BN1__Leitor__ptico_para_detec__o_do_tipo_de_c_psula___bit0_GPIO_Port GPIOA
#define BN1__Leitor__ptico_para_detec__o_do_tipo_de_c_psula___bit1_Pin GPIO_PIN_12
#define BN1__Leitor__ptico_para_detec__o_do_tipo_de_c_psula___bit1_GPIO_Port GPIOA
#define BN1__Leitor__ptico_para_detec__o_do_tipo_de_c_psula___bit2_Pin GPIO_PIN_15
#define BN1__Leitor__ptico_para_detec__o_do_tipo_de_c_psula___bit2_GPIO_Port GPIOA
#define P1___Pressostato_de_filtro_de__gua_saturado__contato_NF__abre_se_filtro_saturado_Pin GPIO_PIN_3
#define P1___Pressostato_de_filtro_de__gua_saturado__contato_NF__abre_se_filtro_saturado_GPIO_Port GPIOB
#define P2___Pressostato_de_cilindro_de_CO2_vazio__contato_NF__abre_se_cilindro_vazio_Pin GPIO_PIN_4
#define P2___Pressostato_de_cilindro_de_CO2_vazio__contato_NF__abre_se_cilindro_vazio_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
