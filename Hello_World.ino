void setup() {
  
  // Start Opening a serial connection at 115200 Baud
  Serial.begin(115200);
}

void loop() {
  
  // Generate "Hello world!" message in loop every second.
  Serial.println("Hello world!");
  delay(1000);
}
