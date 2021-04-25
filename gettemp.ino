int led = D7;  // The on-board LED

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
    // Turn ON the LED
    digitalWrite(led, HIGH);
    
    String temp = String(random(60, 80));
    Particle.publish("temp", temp, PRIVATE);
    delay(30000);
    
    // Turn OFF the LED
    digitalWrite(led, LOW);
    
    // Wait for 30 seconds
    delay(30000);
}