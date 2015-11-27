#ifndef EVILKEYBOARD
#define EVILKEYBOARD

#include "mapkeys.h";

class EvilKeyBoard {
   public : 
    EvilKeyBoard(int os); // windows = 0 ; linux = 1; mac osx =2;
    void exec(String cmd);
    void write(String cmd);
    void write(const char *);
    void sendKeys(char);
    void sendKeys(int , int );
    void releaseKeys();
   private :
     int os = 0;
     MapKeys *mk;
};


#endif
