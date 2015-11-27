#include "mapkeys.h"
#include "keydefinitions.h"

char mapkeys[255][2];


MapKeys::MapKeys(){
     memset(this->buff, 0, 8);
      // char A
     mapkeys['A'][0] = KEY_LEFT_SHIFT ;
     mapkeys['A'][1] =  4;
      // char B
     mapkeys['B'][0] = KEY_LEFT_SHIFT ;
     mapkeys['B'][1] =  5;
      // char C
     mapkeys['C'][0] = KEY_LEFT_SHIFT ;
     mapkeys['C'][1] =  6;
      // char D
     mapkeys['D'][0] = KEY_LEFT_SHIFT ;
     mapkeys['D'][1] =  7;
      // char E
     mapkeys['E'][0] = KEY_LEFT_SHIFT ;
     mapkeys['E'][1] =  8;
      // char F
     mapkeys['F'][0] = KEY_LEFT_SHIFT ;
     mapkeys['F'][1] =  9;
      // char G
     mapkeys['G'][0] = KEY_LEFT_SHIFT ;
     mapkeys['G'][1] =  10;
      // char H
     mapkeys['H'][0] = KEY_LEFT_SHIFT ;
     mapkeys['H'][1] =  11;
      // char I
     mapkeys['I'][0] = KEY_LEFT_SHIFT ;
     mapkeys['I'][1] =  12;
      // char J
     mapkeys['J'][0] = KEY_LEFT_SHIFT ;
     mapkeys['J'][1] =  13;
      // char K
     mapkeys['K'][0] = KEY_LEFT_SHIFT ;
     mapkeys['K'][1] =  14;
      // char L
     mapkeys['L'][0] = KEY_LEFT_SHIFT ;
     mapkeys['L'][1] =  15;
      // char M
     mapkeys['M'][0] = KEY_LEFT_SHIFT ;
     mapkeys['M'][1] =  16;
      // char N
     mapkeys['N'][0] = KEY_LEFT_SHIFT ;
     mapkeys['N'][1] =  17;
      // char O
     mapkeys['O'][0] = KEY_LEFT_SHIFT ;
     mapkeys['O'][1] =  18;
      // char P
     mapkeys['P'][0] = KEY_LEFT_SHIFT ;
     mapkeys['P'][1] =  19;
      // char Q
     mapkeys['Q'][0] = KEY_LEFT_SHIFT ;
     mapkeys['Q'][1] =  20;
      // char R
     mapkeys['R'][0] = KEY_LEFT_SHIFT ;
     mapkeys['R'][1] =  21;
      // char S
     mapkeys['S'][0] = KEY_LEFT_SHIFT ;
     mapkeys['S'][1] =  22;
      // char T
     mapkeys['T'][0] = KEY_LEFT_SHIFT ;
     mapkeys['T'][1] =  23;
      // char U
     mapkeys['U'][0] = KEY_LEFT_SHIFT ;
     mapkeys['U'][1] =  24;
      // char V
     mapkeys['V'][0] = KEY_LEFT_SHIFT ;
     mapkeys['V'][1] =  25;
      // char W
     mapkeys['W'][0] = KEY_LEFT_SHIFT ;
     mapkeys['W'][1] =  26;
      // char X
     mapkeys['X'][0] = KEY_LEFT_SHIFT ;
     mapkeys['X'][1] =  27;
      // char Y
     mapkeys['Y'][0] = KEY_LEFT_SHIFT ;
     mapkeys['Y'][1] =  28;
      // char Z
     mapkeys['Z'][0] = KEY_LEFT_SHIFT ;
     mapkeys['Z'][1] =  29;
      // char a
     mapkeys['a'][0] = 0 ;
     mapkeys['a'][1] =  4;
      // char b
     mapkeys['b'][0] = 0 ;
     mapkeys['b'][1] =  5;
      // char c
     mapkeys['c'][0] = 0 ;
     mapkeys['c'][1] =  6;
      // char d
     mapkeys['d'][0] = 0 ;
     mapkeys['d'][1] =  7;
      // char e
     mapkeys['e'][0] = 0 ;
     mapkeys['e'][1] =  8;
      // char f
     mapkeys['f'][0] = 0 ;
     mapkeys['f'][1] =  9;
      // char g
     mapkeys['g'][0] = 0 ;
     mapkeys['g'][1] =  10;
      // char h
     mapkeys['h'][0] = 0 ;
     mapkeys['h'][1] =  11;
      // char i
     mapkeys['i'][0] = 0 ;
     mapkeys['i'][1] =  12;
      // char j
     mapkeys['j'][0] = 0 ;
     mapkeys['j'][1] =  13;
      // char k
     mapkeys['k'][0] = 0 ;
     mapkeys['k'][1] =  14;
      // char l
     mapkeys['l'][0] = 0 ;
     mapkeys['l'][1] =  15;
      // char m
     mapkeys['m'][0] = 0 ;
     mapkeys['m'][1] =  16;
      // char n
     mapkeys['n'][0] = 0 ;
     mapkeys['n'][1] =  17;
      // char o
     mapkeys['o'][0] = 0 ;
     mapkeys['o'][1] =  18;
      // char p
     mapkeys['p'][0] = 0 ;
     mapkeys['p'][1] =  19;
      // char q
     mapkeys['q'][0] = 0 ;
     mapkeys['q'][1] =  20;
      // char r
     mapkeys['r'][0] = 0 ;
     mapkeys['r'][1] =  21;
      // char s
     mapkeys['s'][0] = 0 ;
     mapkeys['s'][1] =  22;
      // char t
     mapkeys['t'][0] = 0 ;
     mapkeys['t'][1] =  23;
      // char u
     mapkeys['u'][0] = 0 ;
     mapkeys['u'][1] =  24;
      // char v
     mapkeys['v'][0] = 0 ;
     mapkeys['v'][1] =  25;
      // char w
     mapkeys['w'][0] = 0 ;
     mapkeys['w'][1] =  26;
      // char x
     mapkeys['x'][0] = 0 ;
     mapkeys['x'][1] =  27;
      // char y
     mapkeys['y'][0] = 0 ;
     mapkeys['y'][1] =  28;
      // char z
     mapkeys['z'][0] = 0 ;
     mapkeys['z'][1] =  29;
      // char 1
     mapkeys['1'][0] = 0 ;
     mapkeys['1'][1] =  30;
      // char 2
     mapkeys['2'][0] = 0 ;
     mapkeys['2'][1] =  31;
      // char 3
     mapkeys['3'][0] = 0 ;
     mapkeys['3'][1] =  32;
      // char 4
     mapkeys['4'][0] = 0 ;
     mapkeys['4'][1] =  33;
      // char 5
     mapkeys['5'][0] = 0 ;
     mapkeys['5'][1] =  34;
      // char 6
     mapkeys['6'][0] = 0 ;
     mapkeys['6'][1] =  35;
      // char 7
     mapkeys['7'][0] = 0 ;
     mapkeys['7'][1] =  36;
      // char 8
     mapkeys['8'][0] = 0 ;
     mapkeys['8'][1] =  37;
      // char 9
     mapkeys['9'][0] = 0 ;
     mapkeys['9'][1] =  38;
      // char 0
     mapkeys['0'][0] = 0 ;
     mapkeys['0'][1] =  39;
      // char !
     mapkeys['!'][0] = KEY_LEFT_SHIFT ;
     mapkeys['!'][1] =  30;
      // char @
     mapkeys['@'][0] = KEY_LEFT_SHIFT ;
     mapkeys['@'][1] =  31;
      // char #
     mapkeys['#'][0] = KEY_LEFT_SHIFT ;
     mapkeys['#'][1] =  32;
      // char $
     mapkeys['$'][0] = KEY_LEFT_SHIFT ;
     mapkeys['$'][1] =  33;
      // char %
     mapkeys['%'][0] = KEY_LEFT_SHIFT ;
     mapkeys['%'][1] =  34;
      // char ^
     mapkeys['^'][0] = KEY_LEFT_SHIFT ;
     mapkeys['^'][1] =  35;
      // char &
     mapkeys['&'][0] = KEY_LEFT_SHIFT ;
     mapkeys['&'][1] =  36;
      // char *
     mapkeys['*'][0] = KEY_LEFT_SHIFT ;
     mapkeys['*'][1] =  37;
      // char (
     mapkeys['('][0] = KEY_LEFT_SHIFT ;
     mapkeys['('][1] =  38;
      // char )
     mapkeys[')'][0] = KEY_LEFT_SHIFT ;
     mapkeys[')'][1] =  39;
      // char "\n"
     mapkeys[0xa][0] = 0 ;
     mapkeys[0xa][1] = 40;
      // char "\e"
     mapkeys[0x1b][0] = 0 ;
     mapkeys[0x1b][1] = 41;
      // char "\u007F"
     mapkeys[0x7f][0] = 0 ;
     mapkeys[0x7f][1] = 42;
      // char "\t"
     mapkeys[0x9][0] = 0 ;
     mapkeys[0x9][1] = 43;
      // char " "
     mapkeys[0x20][0] = 0 ;
     mapkeys[0x20][1] = 44;
      // char "-"
     mapkeys[0x2d][0] = 0 ;
     mapkeys[0x2d][1] = 45;
      // char "="
     mapkeys[0x3d][0] = 0 ;
     mapkeys[0x3d][1] = 46;
      // char "["
     mapkeys[0x5b][0] = 0 ;
     mapkeys[0x5b][1] = 47;
      // char "]"
     mapkeys[0x5d][0] = 0 ;
     mapkeys[0x5d][1] = 48;
      // char "\\"
     mapkeys[0x5c][0] = 0 ;
     mapkeys[0x5c][1] = 49;
      // char "`"
     mapkeys[0x60][0] = 0 ;
     mapkeys[0x60][1] = 50;
      // char ";"
     mapkeys[0x3b][0] = 0 ;
     mapkeys[0x3b][1] = 51;
      // char "'"
     mapkeys[0x27][0] = 0 ;
     mapkeys[0x27][1] = 52;
      // char "`"
     mapkeys[0x60][0] = 0 ;
     mapkeys[0x60][1] = 53;
      // char ","
     mapkeys[0x2c][0] = 0 ;
     mapkeys[0x2c][1] = 54;
      // char "."
     mapkeys[0x2e][0] = 0 ;
     mapkeys[0x2e][1] = 55;
      // char "/"
     mapkeys[0x2f][0] = 0 ;
     mapkeys[0x2f][1] = 56;
      // char _
     mapkeys[0x5f][0] = KEY_LEFT_SHIFT ;
     mapkeys[0x5f][1] = 45;
      // char +
     mapkeys[0x2b][0] = KEY_LEFT_SHIFT ;
     mapkeys[0x2b][1] = 46;
      // char {
     mapkeys[0x7b][0] = KEY_LEFT_SHIFT ;
     mapkeys[0x7b][1] = 47;
      // char }
     mapkeys[0x7d][0] = KEY_LEFT_SHIFT ;
     mapkeys[0x7d][1] = 48;
      // char |
     mapkeys[0x7c][0] = KEY_LEFT_SHIFT ;
     mapkeys[0x7c][1] = 49;
      // char ~
     mapkeys[0x7e][0] = KEY_LEFT_SHIFT ;
     mapkeys[0x7e][1] = 50;
      // char :
     mapkeys[0x3a][0] = KEY_LEFT_SHIFT ;
     mapkeys[0x3a][1] = 51;
      // char "
     mapkeys[0x22][0] = KEY_LEFT_SHIFT ;
     mapkeys[0x22][1] = 52;
      // char `
     mapkeys[0x60][0] = KEY_LEFT_SHIFT ;
     mapkeys[0x60][1] = 53;
      // char <
     mapkeys[0x3c][0] = KEY_LEFT_SHIFT ;
     mapkeys[0x3c][1] = 54;
      // char >
     mapkeys[0x3e][0] = KEY_LEFT_SHIFT ;
     mapkeys[0x3e][1] = 55;
      // char ?
     mapkeys[0x3f][0] = KEY_LEFT_SHIFT ;
     mapkeys[0x3f][1] = 56;
}

uint8_t* MapKeys::convert(char c){
    this->buff[0] = mapkeys[c][0];
    this->buff[2] = mapkeys[c][1];
    return this->buff;
}
