#include "MKL25Z.h"
#include "LCD_I2C.h"
#include "I2C.h"

void setup () {
    LCD_Init();
    while (1) {
        LCD_Clear();
        LCD_SetCursor(0, 6);
        LCD_Print("Frujter");
        LCD_SetCursor(1, 8);
        LCD_Print("Come");
        LCD_SetCursor(2, 3);
        LCD_Print("Crotolamo  y");
        LCD_SetCursor(3, 4);
        LCD_Print("Padalustro");
        for (int i = 0;i < 5000000;i++);
        LCD_Clear();
        LCD_SetCursor(0, 8);
        LCD_Print("Esnal");
        LCD_SetCursor(1, 9);
        LCD_Print("No");
        LCD_SetCursor(2, 8);
        LCD_Print("Sabe");
        LCD_SetCursor(3, 4);
        LCD_Print("Inicializar");
        for (int f = 0;i < 5000000;i++)
    }
}