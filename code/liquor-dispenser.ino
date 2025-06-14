#define liqid1 1
#define liqid2 2
#define liqid3 3
#define liqid4 4

#define liqid1btn 5
#define liqid2btn 6
#define liqid3btn 7
#define liqid4btn 8

#define cupSensor 9

void setup() {
  pinMode(liqid1btn, INPUT_PULLUP);
  pinMode(liqid2btn, INPUT_PULLUP);
  pinMode(liqid3btn, INPUT_PULLUP);
  pinMode(liqid4btn, INPUT_PULLUP);

  pinMode(liqid1, OUTPUT);
  pinMode(liqid2, OUTPUT);
  pinMode(liqid3, OUTPUT);
  pinMode(liqid4, OUTPUT);

  pinMode(cupSensor, INPUT);
}

void loop(){

  if(digitalRead(cupSensor) == LOW){
    while(digitalRead(liqid1btn) == LOW){
      digitalWrite(liqid1, HIGH);
    }
    while(digitalRead(liqid2btn) == LOW){
      digitalWrite(liqid2, HIGH);
    }
    while(digitalRead(liqid3btn) == LOW){
      digitalWrite(liqid3, HIGH);
    }
    while(digitalRead(liqid4btn) == LOW){
      digitalWrite(liqid4, HIGH);
    } 

    stopLiquids();

  } else {
    stopLiquids();
  }
    
}

void stopLiquids() {
  digitalWrite(liqid1, LOW);
  digitalWrite(liqid2, LOW);
  digitalWrite(liqid3, LOW);
  digitalWrite(liqid4, LOW);
}
