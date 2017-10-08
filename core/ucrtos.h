#ifndef UCRTOS_H__
#define UCRTOS_H__

#include <stdint.h>

// Timing
void delayUs(uint32_t us);
void delayMs(uint32_t ms);

// LEDs:
void statusLedOn();
void statusLedOff();
void errorLedOn();
void errorLedOff();

// Display:
void displayInit();
void displaySetPixel(int x, int y, uint8_t r, uint8_t g, uint8_t b);

// Debug:
void PrintCharUsr(char c);
void errorState();

#endif // UCRTOS_H__
