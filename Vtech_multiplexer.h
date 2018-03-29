#ifndef Vtech_multiplexer_h
#define Vtech_multiplexer_h
 
#include <Arduino.h>
 
class Vtech_multiplexer
{
  public:
    Vtech_multiplexer(int stuff = 0);  //Constructor.
    void writeTo(int pin, int value);
  private:
    uint8_t PS = 5; // Signal pin, where you broadcast what You want to multiplex

    uint8_t S0 = 6;
    uint8_t S1 = 7;
    uint8_t S2 = 8;
    uint8_t S3 = 9;

    int multiplexeerAdresses[16][4]= {
       {0, 0, 0, 0},
       {1, 0, 0, 0},
       {0, 1, 0, 0},
       {1, 1, 0, 0},
       {0, 0, 1, 0},
       {1, 0, 1, 0},
       {1, 1, 1, 0},
       {1, 0, 0, 1},
       {0, 1, 0, 1},
       {1, 1, 0, 1},
       {1, 0, 1, 1},
       {0, 1, 1, 1},
       {1, 1, 1, 1}
      };
    
};

#endif