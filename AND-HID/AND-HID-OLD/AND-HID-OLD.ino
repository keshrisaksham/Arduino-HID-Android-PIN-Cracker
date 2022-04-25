/*************************************************************************
 * HID Keyboard Browser Example
 * 
 * For use with HIDKeyboard.h Arduino library
 *    https://github.com/SFE-Chris/UNO-HIDKeyboard-Library
 *
 * NOTE: This sketch will not work on it's own. Please see the github 
 * page for info on how to turn the UNO into a keyboard. 
 * 
 * In Windows 7, sends keypresses to open a browser and type in it. 
 *************************************************************************/
#include <HIDKeyboard.h>

HIDKeyboard keyboard; // Initialize HIDKeyboard object

void setup() {
  keyboard.begin(); // Start communication
  delay(200);
}

int attempts = 1;
int keys = 1000;


void loop() {
  if (attempts <= 5) {
      delay(100); 
      keyboard.pressSpecialKey(ENTER); 
      keyboard.releaseKey();
      delay(100);
      keyboard.pressSpecialKey(ENTER); 
      keyboard.releaseKey();
      delay(1000);
      String newTemp = String (keys);
      keyboard.print(newTemp);
      keyboard.releaseKey();
      keyboard.pressSpecialKey(ENTER);
      keyboard.releaseKey();
      keys++;
      attempts++;
    }
   else if ((attempts == 6)||(attempts ==11)) {
      delay(31000);  
      keyboard.pressSpecialKey(ENTER);
      keyboard.releaseKey();
      delay(200);
      keyboard.pressSpecialKey(ENTER);
      keyboard.releaseKey();
      delay(200);
      String newTemp = String (keys);
      keyboard.print(newTemp);
      keyboard.releaseKey();
      keyboard.pressSpecialKey(ENTER);
      keyboard.releaseKey();
      keys++;
      attempts++;
    }
   else if (attempts <= 10){
      delay(1000);
      String newTemp = String (keys);
      keyboard.print(newTemp);
      keyboard.releaseKey();
      keyboard.pressSpecialKey(ENTER);
      keyboard.releaseKey();
      keys++;
      attempts++;
    }
   else {
      delay(31000);
      keyboard.pressSpecialKey(ENTER);
      keyboard.releaseKey();
      delay(200);
      keyboard.pressSpecialKey(ENTER);
      keyboard.releaseKey();
      delay(200);
      String newTemp = String (keys);
      keyboard.print(newTemp);
      keyboard.releaseKey();
      keyboard.pressSpecialKey(ENTER);
      keyboard.releaseKey();
      keys++;
      attempts++;
   }
  while(1);

}
