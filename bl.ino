//#include <Softwa-----reSerial.h>
#define in1 2
#define in2 4
#define in3 7
#define in4 8
#define ena 5
#define enb 6
void setup(){
Serial.begin(9600);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(ena,OUTPUT);
pinMode(enb,OUTPUT);}
void loop(){
  if (Serial.available()>0){
  char b = Serial.read();
if(b == 'R'){            //move Right
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
Serial.println("Right");
analogWrite(ena , 255);
analogWrite(enb , 255); 
 }
else if (b == 'L'){       //move Left
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
Serial.println("Left");
analogWrite(ena , 255);
analogWrite(enb , 255);
}
else if (b == 'B'){       //move Forward
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
Serial.println("BACKWARD");
analogWrite(ena , 255);
analogWrite(enb , 255);
}
else if (b == 'F'){       //move Backward
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
Serial.println("Forward");
analogWrite(ena , 255);
analogWrite(enb , 255);
}
else if (b == 'G'){       //LEFT forward
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
analogWrite(ena , 255);
analogWrite(enb , 255); 
Serial.println("LEFT FORWARD"); 
 }
else if (b == 'I'){       //RIGHT forward
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
analogWrite(ena , 255);
analogWrite(enb , 255); 
Serial.println("RIGHT FORWARD");
  }
  else if(b =='S'){
digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW); }
}
}
