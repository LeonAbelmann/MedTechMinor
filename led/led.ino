// Define digital port to which LED is connected
const int ledPin = 2; // Use ports 2-7
const int blinkInterval = 1000; // milliseconds

void setup() {
  // Initialize digital port as output
    pinMode(ledPin, OUTPUT);
}

// This loop will run continuously
void loop() {
  // Blink LED:
     digitalWrite(ledPin, HIGH);
     delay(blinkInterval);
     digitalWrite(ledPin, LOW); 
     delay(blinkInterval);
}
