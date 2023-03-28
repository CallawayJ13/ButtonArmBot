const int Button1 = A0;
const int Button2 = A1;

int ButtonState1 = 0;
int ButtonState2 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(Button1, INPUT_PULLUP);
  pinMode(Button2, INPUT_PULLUP);

  pinMode(2, OUTPUT); // Positive side for motor -> neg. side for motor 1  
  pinMode(3, OUTPUT); // Negitve side for motor -> pos. side for motor 1
  
  pinMode(4, OUTPUT); // Positive side for motor -> neg. side for motor 2
  pinMode(5, OUTPUT); // Negitve side for motor -> pos. side for motor 2
  
  pinMode(6, OUTPUT); // Positive side for motor -> neg. side for motor 3
  pinMode(7, OUTPUT); // Negitve side for motor -> pos. side for motor 3
  
  pinMode(8, OUTPUT); // Positive side for motor -> neg. side for motor 4
  pinMode(9, OUTPUT); // Negitve side for motor -> pos. side for motor 4
  
  pinMode(10, OUTPUT); // Electromagnet
}

void loop() {
  // put your main code here, to run repeatedly:
  ButtonState1 = digitalRead(Button1);
  ButtonState2 = digitalRead(Button2);

  if (ButtonState1 == LOW) {
    digitalWrite(3, HIGH);
    delay(1000)
    digitalWrite(3, LOW)
  } else {
    digitalWrite(3, LOW)
  }

  if (ButtonState2 == LOW) {
    
  } else {
  }
}
