// Define the pins for IR sensors and LEDs
int IRSensor1 = 2;  // First IR sensor connected to digital pin 2
int IRSensor2 = 3;  // Second IR sensor connected to digital pin 3
int IRSensor3 = 4;  // Third IR sensor connected to digital pin 4
int IRSensor4 = 5;  // Fourth IR sensor connected to digital pin 5

int LED1 = 8;  // First LED (representing street light) connected to digital pin 8
int LED2 = 9;  // Second LED connected to digital pin 9
int LED3 = 10; // Third LED connected to digital pin 10
int LED4 = 11; // Fourth LED connected to digital pin 11

void setup() {
  // Initialize IR sensors as input
  pinMode(IRSensor1, INPUT);
  pinMode(IRSensor2, INPUT);
  pinMode(IRSensor3, INPUT);
  pinMode(IRSensor4, INPUT);
  
  // Initialize LEDs as output
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

  // Begin serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Read the state of each IR sensor
  int IRValue1 = digitalRead(IRSensor1);
  int IRValue2 = digitalRead(IRSensor2);
  int IRValue3 = digitalRead(IRSensor3);
  int IRValue4 = digitalRead(IRSensor4);

  // Print the IR sensor values to the serial monitor
  Serial.print("IR1: ");
  Serial.print(IRValue1);
  Serial.print(" IR2: ");
  Serial.print(IRValue2);
  Serial.print(" IR3: ");
  Serial.print(IRValue3);
  Serial.print(" IR4: ");
  Serial.println(IRValue4);

  // Control LEDs based on IR sensor input
  if (IRValue1 == HIGH) {
    digitalWrite(LED1, HIGH);  // Turn on LED1 if motion is detected
  } else {
    digitalWrite(LED1, LOW);   // Turn off LED1 if no motion
  }

  if (IRValue2 == HIGH) {
    digitalWrite(LED2, HIGH);  // Turn on LED2 if motion is detected
  } else {
    digitalWrite(LED2, LOW);   // Turn off LED2 if no motion
  }

  if (IRValue3 == HIGH) {
    digitalWrite(LED3, HIGH);  // Turn on LED3 if motion is detected
  } else {
    digitalWrite(LED3, LOW);   // Turn off LED3 if no motion
  }

  if (IRValue4 == HIGH) {
    digitalWrite(LED4, HIGH);  // Turn on LED4 if motion is detected
  } else {
    digitalWrite(LED4, LOW);   // Turn off LED4 if no motion
  }

  // Small delay for stability
  delay(100);
}
