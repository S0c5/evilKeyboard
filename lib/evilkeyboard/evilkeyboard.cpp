#include "evilkeyboard.h"
#include "keydefinitions.h"
#define EB EvilKeyBoard

int launchCommandOs[3][2]= {
   {0, KEY_LEFT_WIN},
   {KEY_LEFT_ALT, KEY_F2},
   {KEY_LEFT_WIN, 0}
};

uint8_t buff[8];


EB::EvilKeyBoard(int os = 1){
   memset(buff, 0, 8);
   this->mk = new MapKeys();
   this->os = os;
}

void EB::exec(String cmd){
   sendKeys(launchCommandOs[this->os][0], launchCommandOs[this->os][1]);
   releaseKeys();
   delay(200);
   write(cmd);
   write("\n");
   delay(2000);
}

void EB::write(const char *chr){

   int i = 0;
   while(chr[i] != '\0'){
     sendKeys(chr[i]);
     releaseKeys();
     i++;
   }

}
void EB::write(String cmd){
   for(int i = 0 ; i < cmd.length(); i++){
     sendKeys(cmd[i]);
     releaseKeys();
     delay(5);
   }  
   
}

void EB::sendKeys(int keyA = 0 ,int keyB = 0){
   buff[0] = keyA;
   buff[2] = keyB;
   Serial.write(buff, 8);
} 

void EB::sendKeys(char c){
   Serial.write(this->mk->convert(c), 8);
}

void EB::releaseKeys(){
   Serial.write(this->mk->convert('\0'), 8); 
}
