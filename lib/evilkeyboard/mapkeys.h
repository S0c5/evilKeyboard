#ifndef MAPKEYS
#define MAPKEYS

#include <Arduino.h>

class MapKeys {
  public :
    MapKeys();
    uint8_t* convert(char c); 
  private :
    uint8_t buff[8];
};



#endif
