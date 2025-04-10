#include <string.h>
#include <stdlib.h>

#define P1 3
#define P2 5
#define P3 6
#define baud 115200

void setup() {
  pinMode(P1, OUTPUT);
  pinMode(P2, OUTPUT);
  pinMode(P3, OUTPUT);

  digitalWrite(P1, LOW);
  digitalWrite(P2, LOW);
  digitalWrite(P3, LOW);

  Serial.begin(baud);
}

int red = 0;
int green = 0;
int blue = 0;

void loop() {
  if(Serial.available()) {
    String cmd = Serial.readStringUntil('\n');

    char *token = strtok(cmd.c_str(), " ");
    int r = atoi(token);
    token = strtok(NULL, " ");
    int g = atoi(token);
    token = strtok(NULL, " ");
    int b = atoi(token);

    if(r != red || g != green || b != blue) {
      analogWrite(P1, r);
      analogWrite(P2, g);
      analogWrite(P3, b);

      red = r, green = g, blue = b;
    }
  }
}