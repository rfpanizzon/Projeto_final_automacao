#import "capsules.h"

void capsules_init(void)
{
	strcpy(capsulas[0].nome, "                ");
	strcpy(capsulas[0].tipo_agua, '\0');
	capsulas[0].tempo_agua = 0;
	capsulas[0].temperatura_agua = 0;
	capsulas[0].com_gas = nao;
	capsulas[0].tempo_gas = 0;

	strcpy(capsulas[1].nome, "      Agua      ");
	strcpy(capsulas[1].tipo_agua, '\0');
	capsulas[1].tempo_agua = 1.5;
	capsulas[1].temperatura_agua = 0;
	capsulas[1].com_gas = nao;
	capsulas[1].tempo_gas = 0;

	strcpy(capsulas[2].nome, "  Agua com gas  ");
	strcpy(capsulas[2].tipo_agua, "gelada");
	capsulas[2].tempo_agua = 3;
	capsulas[2].temperatura_agua = 15;
	capsulas[2].com_gas = sim;
	capsulas[2].tempo_gas = 1.5;

	strcpy(capsulas[3].nome, "   Cha gelado   ");
	strcpy(capsulas[3].tipo_agua, "gelada");
	capsulas[3].tempo_agua = 2.7;
	capsulas[3].temperatura_agua = 20;
	capsulas[3].com_gas = nao;
	capsulas[3].tempo_gas = 0;

	strcpy(capsulas[4].nome, "   Cha quente   ");
	strcpy(capsulas[4].tipo_agua, "quente");
	capsulas[4].tempo_agua = 2.7;
	capsulas[4].temperatura_agua = 60;
	capsulas[4].com_gas = nao;
	capsulas[4].tempo_gas = 0;

	strcpy(capsulas[5].nome, "  Refrigerante  ");
	strcpy(capsulas[5].tipo_agua, "gelada");
	capsulas[5].tempo_agua = 4;
	capsulas[5].temperatura_agua = 17;
	capsulas[5].com_gas = sim;
	capsulas[5].tempo_gas = 2.56;

	strcpy(capsulas[6].nome, "inexistente");
	strcpy(capsulas[6].tipo_agua, '\0');
	capsulas[6].tempo_agua = 0;
	capsulas[6].temperatura_agua = 0;
	capsulas[6].com_gas = nao;
	capsulas[6].tempo_gas = 0;

	strcpy(capsulas[7].nome, " inexistente ");
	strcpy(capsulas[7].tipo_agua, "quente");
	capsulas[7].tempo_agua = 0;
	capsulas[7].temperatura_agua = 0;
	capsulas[7].com_gas = 0;
	capsulas[7].tempo_gas = 0;
}

uint8_t capsules_get_value(GPIO_TypeDef * GPIO, uint16_t Bn1_bit0, uint16_t Bn1_bit1, uint16_t Bn1_bit2)
{
	state_Bn1_bit0 = HAL_GPIO_ReadPin(GPIO, Bn1_bit0);
	state_Bn1_bit1 = HAL_GPIO_ReadPin(GPIO, Bn1_bit1);
	state_Bn1_bit2 = HAL_GPIO_ReadPin(GPIO, Bn1_bit2);

	return ((state_Bn1_bit2 * 4) + (state_Bn1_bit1 * 2) + state_Bn1_bit0);
}
