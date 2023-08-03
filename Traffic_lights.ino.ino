//Create the variables and assign the pins to them.

//int REDPIN=8;
//int BLUEPIN=10;
//int GREENPIN=12;

void setup() {
//Set the pins to output pins using pinMode
pinMode(8, OUTPUT);
pinMode(10, OUTPUT);
pinMode(12, OUTPUT);
}

void loop() {
//Make the LEDs blink in turn:
//Turn on the red led, and turn off the yellow and green leds.

digitalWrite(8, HIGH);
digitalWrite(10, LOW);
digitalWrite(12, LOW);
delay(10000);
//Turn on the yellow led, and turn off the red and green leds.

digitalWrite(8, LOW);
digitalWrite(10, HIGH);
digitalWrite(12, LOW);
delay(10000);

//Turn on the green led, and turn off the red and yellow leds.

digitalWrite(10, LOW);
digitalWrite(11, LOW);
digitalWrite(12, HIGH);
delay(10000);
}