
#include "relogio.h"


void atualiza_hora(uint16_t horas, uint16_t minutos, uint16_t segundos)
{
    //Mostra a hora
    LCD_Set_Cursor(2, 1);
    LCD_Write_String("    ");
    char buffer[2];
    if (horas < 10)
    {
        LCD_Set_Cursor(2, 2);
        LCD_Write_String("0");
        LCD_Set_Cursor(2, 3);
        itoa(horas, buffer, 10);
        LCD_Write_String(buffer);
        LCD_Set_Cursor(2, 4);
        LCD_Write_String(":");
    }
    else
    {
        LCD_Set_Cursor(2, 2);
        itoa(horas, buffer, 10);
        LCD_Write_String(buffer);
        LCD_Set_Cursor(2, 4);
        LCD_Write_String(":");
    }
    if (minutos < 10)
    {
        LCD_Set_Cursor(2, 5);
        LCD_Write_String("0");
        LCD_Set_Cursor(2, 6);
        itoa(minutos, buffer, 10);
        LCD_Write_String(buffer);
        LCD_Set_Cursor(2, 7);
        LCD_Write_String(":");
    }
    else
    {
        LCD_Set_Cursor(2, 5);
        itoa(minutos, buffer, 10);
        LCD_Write_String(buffer);
        LCD_Set_Cursor(2, 7);
        LCD_Write_String(":");
    }
    if (segundos < 10) {
        LCD_Set_Cursor(2, 8);
        LCD_Write_String("0");
        LCD_Set_Cursor(2, 9);
        itoa(segundos, buffer, 10);
        LCD_Write_String(buffer);
    }
    else
    {
        LCD_Set_Cursor(2, 8);
        itoa(segundos, buffer, 10);
        LCD_Write_String(buffer);
    }
}

