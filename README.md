# Arduino
 This script is force login the android lock screens, developed and designed completely for testing purposes, no sort of hacking or cracking is promoted by this script.

	Process to make programable: 

o	Connect the Arduino Uno board to the system using cable.

o	Connect Jumper cable from Arduino board’s “ground” port to “ICSP” port on the Arduino board.

o	Now the Uno board has converted and connected to the system as an ‘Atmega16U2’

	For confirmation check the device manager, it’ll show it mounted there.

o	Open Flip 3.4.7

o	Click on “Select a Target Device” button (looks like a processor).

o	Select ‘Atmega16U2’ from the list.

o	Click on File  Load HEX file  select “Arduino-usbserial-uno.hex” 

	file is present in: USB-RUB-D  Arduino  Arduino-usbserial-uno.hex

o	Now click on “select a communication medium” button (looks like a USB cable)  USB  open.

o	Run the script, and flash the device.

	Now the Arduino uno board is in programmable state. Now you can send any compiled script to the device.

	Process to put the script into the device:

o	Open the AID-HID script.

o	Click on Sketch  Include Library  Add .zip library  Select “UNO-HID-KEYBOARD-LIBRARY.zip” file.

	File is Present in the main Arduino folder.

o	Go to Tools  Board  select Arduino Uno.

o	Go to Tools  Port  select the port which shows Arduino uno.

o	Click upload button.

	The script is sent now to the Arduino device.

	Process to convert the Arduino board as Keyboard:

o	Connect Jumper cable from Arduino board’s “ground” port to “ICSP” port on the Arduino board.

o	Now the Uno board has converted and connected to the system as an ‘Atmega16U2’

	For confirmation check the device manager, it’ll show it mounted there.

o	Open Flip 3.4.7

o	Click on “Select a Target Device” button (looks like a processor).

o	Select ‘Atmega16U2’ from the list.

o	Click on File  Load HEX file  select “Arduino-keyboard-0.3.hex” 

	file is present in: USB-RUB-D  Arduino  Arduino-keyboard-0.3.hex

o	Now click on “select a communication medium” button (looks like a USB cable)  USB  open.

o	Run the script, and flash the device.

	Now the Arduino uno board is in keyboard state. Now you can connect it to the android device and it will work as a keyboard device.


//This project is designed to ForceLogin android devices. Only created for testing purposes not for any hacking or cracking of any devices.
