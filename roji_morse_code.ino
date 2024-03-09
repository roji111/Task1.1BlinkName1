const int LED_PIN = LED_BUILTIN;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void blink(char morseCode) {
  switch (morseCode) {
    case 'r':
      dot();
      dash();
      dot();
      break;
    case 'o':
      dash();
      dash();
      dash();
      break;
    case 'j':
      dot();
      dash();
      dash();
      dash();
      break;
    case 'i':
      dot();
      dot();
      break;
  }
  delay(1000); // Pause between letters
}

void dot() {
  digitalWrite(LED_PIN, HIGH);
  delay(700);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}

void dash() {
  digitalWrite(LED_PIN, HIGH);
  delay(2000);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}

void loop() {
  blink('r');
  blink('o');
  blink('j');
  blink('i');
}
