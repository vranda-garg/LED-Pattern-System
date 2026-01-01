#include <SoftwareSerial.h>

SoftwareSerial BT(10, 11); // RX, TX
const int ledPins[5] = {5,6,7,8,9};
int patternNumber = 0;
bool patternActive = false;

void setup() {
  Serial.begin(9600);
  BT.begin(9600);z

  for (int i = 0; i < 5; i++) pinMode(ledPins[i], OUTPUT);

  Serial.println("HC-05 Bluetooth LED Pattern Controller Ready!");
  BT.println("Send 1–5 to activate pattern, 0 to stop.");
}

void loop() {
  checkBluetooth();

  if (patternActive) {
    if (patternNumber == 1) pattern1();
    else if (patternNumber == 2) pattern2();
    else if (patternNumber == 3) pattern3();
    else if (patternNumber == 4) pattern4();
    else if (patternNumber == 5) pattern5();
  }
}

// --- BLUETOOTH FUNCTION ---
void checkBluetooth() {
  if (BT.available()) {
    char c = BT.read();
    if (c >= '1' && c <= '5') {
      patternNumber = c - '0';
      patternActive = true;
      Serial.print("Pattern ");
      Serial.print(patternNumber);
      Serial.println(" activated");
      BT.print("Pattern ");
      BT.print(patternNumber);
      BT.println(" activated");
    } 
  }
}
  // Pattern = 1
  void pattern1() {
  if (patternActive) {
    for (int i = 0; i < 5; i++) {
      digitalWrite(ledPins[i], HIGH);
      delay(500);
      digitalWrite(ledPins[i], LOW);
      delay(0);
    }
    for (int i = 5; i >=  0; i--) {
      digitalWrite(ledPins[i],HIGH);
      delay(500);
      digitalWrite(ledPins[i],LOW);
      delay(0);
    }
  }
  delay(500);
  }
 // Pattern = 2
 void pattern2() {
  int oddPins[] = {5,7,9};
  int evenPins[] = {6,8};

  for (int i = 0; i < 3; i++) {
    digitalWrite(oddPins[i],HIGH);
  }
  delay(500);
  for (int i = 0; i < 3; i++) {
    digitalWrite(oddPins[i],LOW);
    }
    for (int i = 0; i < 2; i++) {
    digitalWrite(evenPins[i], HIGH);
  }
  delay(500);
  for (int i = 0; i < 2; i++) {
    digitalWrite(evenPins[i], LOW);
  }
}
// Pattern 3
void pattern3() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(500);
for (int i = 0; i < 5; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(500);
}

// Pattern 4
void pattern4() {
 digitalWrite(5, HIGH); digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(5, LOW); digitalWrite(9, LOW);
  delay(100);

  digitalWrite(6, HIGH); digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(6, LOW);  digitalWrite(8, LOW);
  delay(100);

  digitalWrite(7, HIGH);
  delay(500);
  digitalWrite(7, LOW);
  delay(100);

  digitalWrite(6, HIGH);  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(6, LOW); digitalWrite(8, LOW);
  delay(100);

  digitalWrite(5, HIGH); digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(5, LOW); digitalWrite(9, LOW);
  delay(100);
}

// Pattern 5
void pattern5() {
for (int i = 0; i < 15; i++) {
    int r = random(0, 5); 
    digitalWrite(ledPins[r], HIGH);
    delay(100);
    digitalWrite(ledPins[r], LOW);
  }
}
