#ifndef TEN_DIGIT_LCD_H
#define TEN_DIGIT_LCD_H
#include <stdint.h>
#define T_1 0b01000000
#define T_2 0b00100000
#define T_3 0b00010000
#define T_4 0b00001000
#define T_5 0b00000100
#define T_6 0b00000010
#define T_7 0b00000001

class LCDDisplay10
{
private:
     void fill(unsigned char ch);
     void fillDigits(unsigned char ch);
     uint8_t sendCommand(uint8_t command, uint8_t val);

public:
     void begin(uint8_t sda = 21, uint8_t scl = 22);
     uint8_t writeMemory(uint8_t addr, uint8_t val);
     void clear();
     bool writeToBuffer(const char *number);
     uint8_t sendBuffer();
     void reset();
     bool print(const char *number);
     void setError(bool hasError);
     void setMemory(bool hasMemory);
     void setNegative(bool hasNegative);
     void setDigit(uint8_t pos, int8_t value);
     void setPointPos(uint8_t pos);
     void setThousands(uint8_t num);
};

#endif