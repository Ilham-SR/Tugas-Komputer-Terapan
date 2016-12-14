int red = 5;
int orange = 4;
int green = 3;
int buzz = 2;
int lm35 = A2;
int value = 0;

void setup() {
  Serial.begin(9600);
  pinMode(lm35, INPUT);
  pinMode(red, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(buzz, OUTPUT);

}

void loop() {
  value = analogRead(lm35);
  if (value >= 75)
  {
  tone(buzz, 1000,500);
  digitalWrite(red, HIGH);
  digitalWrite(orange, LOW);
  digitalWrite(green, LOW);
  }
  else if (value > 50)
  {
  digitalWrite(red, LOW);
  digitalWrite(orange, HIGH);
  digitalWrite(green, LOW);
  }
  else
  {
  digitalWrite(red, LOW);
  digitalWrite(orange, LOW);
  digitalWrite(green, HIGH);
  }

}
