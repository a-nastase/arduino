#define G2 2
#define baud 115200
#define time 500

void setup() {
  Serial.begin(baud);
  pinMode(G2, OUTPUT);
}

int blink = 0;
int on = 0;

void loop() {
  if(Serial.available()) {
    String cmd = Serial.readStringUntil('\n');
    if(cmd == "ON") {
      digitalWrite(G2, HIGH);
    } else if(cmd == "OFF") {
      digitalWrite(G2, LOW);
    } else if(cmd == "BLINK") {
      blink = 1;
    } else if(cmd == "UNBLINK") {
      blink = 0, on = 0;
      digitalWrite(G2, LOW);
    }
  }

  if(blink) {
    digitalWrite(G2, 1-on);
    on=1-on;
    delay(time);
  }
}