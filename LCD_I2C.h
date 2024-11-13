#ifdef LCD_I2C
#include LCD_I2C

#include "MKL25Z.h"

void LCD_Init(void);

void LCD_Clear(void);

void LCD_Print(char dato);

void LCD_SetCursor(uint8_t f, uint8_t c);

void LCD_Command(int command);

void LCD_Write(int data);

void LCD_ScrllDisplayRight(void);

void LCD_ScrllDisplayLeft(void);