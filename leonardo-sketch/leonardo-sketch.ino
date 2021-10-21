const int ds_pin = 2;         // deadman switch button pin
const int ledPin =  13;      // LED pin

int dead = 0;         // variable for reading the pushbutton status

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("BVE5 Controller XM-880");
}

void loop() {
  // put your main code here, to run repeatedly:

  dead = digitalRead(ds_pin);
  if(dead)
    Serial.println("ED");

  sleep(50);
}
