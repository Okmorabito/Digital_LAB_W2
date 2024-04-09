int ledPin1 = 32;
int ledPin2 = 31;
int ledPin3 = 30;
int ledPin4 = 29;
int potValue = 0;
int buttonPin1 = 34;
int buttonPin2 = 33;
int buttonPin3 = 35;
int switchPin1 = 36;
int inCrease = 500;
long randNumber;
long randNumber2;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(switchPin1, INPUT);
  randomSeed(analogRead(0));
}

void loop() {
  potValue = analogRead(A13);
  Serial.println(inCrease);
  randNumber = random(300);
  delay(100);
  if (digitalRead(buttonPin1) == HIGH) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    delay(inCrease);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    delay(inCrease);
    inCrease -= 25;
    if (inCrease < 0) {
      inCrease == 0;
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, LOW);
      digitalWrite(ledPin4, LOW);
    }
  }
  if (digitalRead(switchPin1) == LOW) {
    if (digitalRead(buttonPin2) == HIGH) {
      digitalWrite(ledPin1, HIGH);
      delay(potValue);
      digitalWrite(ledPin1, LOW);
      delay(potValue);
      digitalWrite(ledPin2, HIGH);
      delay(potValue);
      digitalWrite(ledPin2, LOW);
      delay(potValue);
      digitalWrite(ledPin3, HIGH);
      delay(potValue);
      digitalWrite(ledPin3, LOW);
      delay(potValue);
      digitalWrite(ledPin4, HIGH);
      delay(potValue);
      digitalWrite(ledPin4, LOW);
      delay(potValue);
    }
  }
  if (digitalRead(switchPin1) == HIGH) {
    if (digitalRead(buttonPin2) == HIGH) {
      digitalWrite(ledPin4, HIGH);
      delay(potValue);
      digitalWrite(ledPin4, LOW);
      delay(potValue);
      digitalWrite(ledPin3, HIGH);
      delay(potValue);
      digitalWrite(ledPin3, LOW);
      delay(potValue);
      digitalWrite(ledPin2, HIGH);
      delay(potValue);
      digitalWrite(ledPin2, LOW);
      delay(potValue);
      digitalWrite(ledPin1, HIGH);
      delay(potValue);
      digitalWrite(ledPin1, LOW);
      delay(potValue);
    }
  }
  if (digitalRead(buttonPin3) == HIGH) {
    randNumber2 = random(29, 32);
    if (randNumber2 == 29) {
      digitalWrite(ledPin1, HIGH);
      delay(potValue);
      digitalWrite(ledPin1, LOW);
    }
    if (randNumber2 == 30) {
      digitalWrite(ledPin2, HIGH);
      delay(potValue);
      digitalWrite(ledPin2, LOW);
      delay(potValue);
    }
    if (randNumber2 == 31) {
      digitalWrite(ledPin3, HIGH);
      delay(potValue);
      digitalWrite(ledPin3, LOW);
      delay(potValue);
    }
    if (randNumber2 == 32) {}
    digitalWrite(ledPin4, HIGH);
    delay(potValue);
    digitalWrite(ledPin4, LOW);
    delay(potValue);
  }
}
