int value = 0;
float R1 = 10000;
float R2 = 4700;
float voltage;
int PIN = A0;
void setup(){
  pinMode(PIN, INPUT);
  Serial.begin(9600);
}

void loop(){
  value = analogRead(PIN);
  voltage = value * (5/1023) * ((R1 + R2)/R2);
  Serial.print("Voltage= ");
  Serial.println(voltage);
  delay(500);
}
