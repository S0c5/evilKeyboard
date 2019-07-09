# EvilKeyboard

<img src="https://www.arduino.cc/new_home/assets/illu-arduino-UNO.png" alt="USBdriveby" width="400" height="250" border="10">


Use your arduino one for exploit a system emulating a keyboard and launch ninja combinations

## how to ?

only you need some tools to flash your arduino one with the necesary firmware to make it works like a HID keyboard.

### Requeriments: 

**Hardware**:

* Arduino uno

**software**:

* arduino-ide
* aduino-mk
* dfu-programmer
 

**installation**

` 
$ sudo apt-get install dfu-programmer arduino-mk arduino-core arduino
`

### Preparing the Arduino 

Now prepare your arduino one [hacking the firmware ], we need to put the arduino one in DFU mode to flash the 'atmega16u2'  with the correct firmware (you could see the firmware necesary in the folder firmware);

1. **DFU MODE**: you need to determinate wich is the version of your arduino one have, why? the version determine what is the correct way for put the arduino in dfu mode.








