/* 
This program to get 3 different LEDs turn on then turn off in sequence.
so if we have Red, Yellow and Green in sequence, we should follow the below steps:
1. Red Light ON. 
2. Red Light OFF, then Yellow Light ON. 
3. Yellow Light OFF, then Green Light ON. 
4. Green Light OFF
5. then repeat (^_^)

we will connect LED lights to the below Pins:
- Red connected to pin 2
- Yellow connected to pin 3
- Green connected to pin 4

and delay for 3 seconds between each LED.
*/

// Create variable for LEDs Pin.
int Red=2; 
int Yellow=3; 
int Green=4; 

// delay for 3 seconds
int delayTime=3000;

void setup() {
  // initilize PinMode for LEDs to set them with their Pins. 
  pinMode (Red,OUTPUT);
  pinMode (Yellow, OUTPUT);
  pinMode (Green, OUTPUT);
}

void loop() {
  // Red Light ON
  digitalWrite (Red,HIGH);
  delay(delayTime);

  // Red Light OFF, then Yellow Light ON
  digitalWrite (Red, LOW);
  digitalWrite (Yellow, HIGH);
  delay(delayTime);

  // Yellow Light OFF, then Green Light ON
  digitalWrite (Yellow, LOW);
  digitalWrite (Green, HIGH);
  delay(delayTime);

   // Green Light ON
  digitalWrite (Green, LOW);
}
