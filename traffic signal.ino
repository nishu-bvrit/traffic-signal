int red=10;
int yellow=9;
int green=8;

void setup() {
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);   
  pinMode(green,OUTPUT);
}

void loop(){
    //for the red light signal !!
    digitalWrite(red,HIGH);
    digitalWrite(yellow,LOW);
    digitalWrite(green,LOW);
    delay(5000);

    //for the yellow light signal !!
    digitalWrite(yellow,HIGH);
    digitalWrite(red,LOW);
    digitalWrite(green,LOW);
    delay(3000);


    //for the green light signal !!
    digitalWrite(green,HIGH);
    digitalWrite(red,LOW);
    digitalWrite(yellow,LOW);
    delay(2000);
}