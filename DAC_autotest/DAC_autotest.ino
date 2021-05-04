const int DAC_OUTPUT_PIN = A0;
const int OUTPUT_FIRST_PIN = 3;

byte value = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(DAC_OUTPUT_PIN, INPUT);

  for (int pin = OUTPUT_FIRST_PIN; pin < OUTPUT_FIRST_PIN + 8; pin++) {
    pinMode(pin, OUTPUT);
  }

  Serial.println("Ready");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("digital input value: ");
  Serial.print(value);
  for (int i = 0; i < 8; i++) {
    int pin = OUTPUT_FIRST_PIN + i;
    byte valueForThisPin = (value >> i) & 0x1;
    digitalWrite(pin, valueForThisPin);
  }
  // Leave some time for propagation
  delay(20);
  Serial.print(" => analog output measured: ");
  int analogValue = analogRead(DAC_OUTPUT_PIN);
  Serial.println(analogValue / 4.0);

  if (value < 0xff) {
    value++;
  } else {
    delay(1000);
    exit(0);
  }
}
