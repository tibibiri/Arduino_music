const int loudspeaker_pin = 13;
const int base_time = 16 * 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(loudspeaker_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(loudspeaker_pin, 349);
  delay(base_time / 4);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 4);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 4);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 4);
  tone(loudspeaker_pin, 349);
  delay(base_time / 4);
  tone(loudspeaker_pin, 392);
  delay(base_time / 4);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 4);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 4);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 330);
  delay(base_time / 4);
  tone(loudspeaker_pin, 262);
  delay(base_time / 4);
  tone(loudspeaker_pin, 349);
  delay(base_time / 4);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 4);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 4);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 523);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 4);
  tone(loudspeaker_pin, 349);
  delay(base_time / 4);
  tone(loudspeaker_pin, 523);
  delay(base_time / 4);
  tone(loudspeaker_pin, 466);
  delay(base_time / 8);
  tone(loudspeaker_pin, 466);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 4);
  tone(loudspeaker_pin, 392);
  delay(base_time / 4);
  tone(loudspeaker_pin, 349);
  delay(base_time / 2);
  noTone(loudspeaker_pin);
  delay(base_time / 2);


}
