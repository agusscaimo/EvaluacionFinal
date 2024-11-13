#include "MKL25Z.h"
#include "LCD_I2C.h"
#include "I2C.h"
                    
#define DISPLAY_ON 00001111
#define CLEAR 00000001
int FILA[4] = {0x80, 0xC0, 0x94, 0xD4};
#define CURSOR
#define MSB
#define LSB
#define DISPLAY 0x27
#define MEMORIA 0x80
#define DERECHA 00011100
#define IZQUIERDA 00011000

void LCD_Init() {
    I2C_Init();
    LCD_Command(DISPLAYON | 0x80);
    LCD_SetCursor(0, 0);
}

void LCD_Clear() {
    LCD_Command(CLEAR | 0x80);
}

void LCD_Print(char *dato) {
    while (*dato) {
        LCD_Write(*dato++);
    }
}

void LCD_SetCursor(uint8_t f, uint8_t c) {
    CURSOR = FILA[f] | c;
    LCD_Command(CURSOR | 0x80);
}

void LCD_Command(int command) {
    LSB = (command>>4) & 0xF0;
    MSB = command & 0xF0;
    LCD_Write(MSB | 0x80);
    LCD_Write(LSB | 0x80);
}

void LCD_Write(int data) {
    I2C_Start();
    I2C_WriteRegister(DISPLAY, MEMORIA, data);
    I2C_Stop();
}

void LCD_ScrllDisplayRight() {
    LCD_Command(DERECHA | 0x80);
}

void LCD_ScrllDisplayLeft() {
    LCD_Command(IZQUIERDA | 0x80);
}