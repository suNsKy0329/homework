void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

int income = 0;

void loop()
{
	if(Serial.available()  0)
    {
      income = Serial.read();
      switch(income)
      {
        case 'f'
        	forward();
        	break;
        case 'b'
        	backward();
        	break;
        case 'l'
        	left();
        	break;
        case 'r'
        	right();
        	break;
        case 's'
        	stop();
        	break;
        default
        	break;
      }
    }
}

void forward()
{
	digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(9, HIGH);
  	digitalWrite(10, LOW);
  	digitalWrite(2, LOW);
  	delay(250);
  	digitalWrite(7, LOW);
  	delay(250);
  	digitalWrite(8, HIGH);
  	delay(250);
  	digitalWrite(12, LOW);
  	delay(250);
}

void right()
{
	digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
  	digitalWrite(10, LOW);
  	digitalWrite(2, HIGH);
  	delay(250);
  	digitalWrite(7, LOW);
  	delay(250);
  	digitalWrite(8, LOW);
  	delay(250);
  	digitalWrite(12, LOW);
  	delay(250);
}

void left()
{
	digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(9,LOW);
  	digitalWrite(10,HIGH);
  	digitalWrite(2, LOW);
  	delay(250);
  	digitalWrite(7, LOW);
  	delay(250);
  	digitalWrite(8, LOW);
  	delay(250);
  	digitalWrite(12, HIGH);
  	delay(250);
}

void backward()
{
	digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(9,LOW);
  	digitalWrite(10,HIGH);
  	digitalWrite(2, LOW);
  	delay(250);
  	digitalWrite(7, HIGH);
  	delay(250);
  	digitalWrite(8, LOW);
  	delay(250);
  	digitalWrite(12, LOW);
  	delay(250);
}

void stop()
{
  	digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
  	digitalWrite(10, LOW);
    digitalWrite(2, LOW);
  	delay(250);
  	digitalWrite(7, LOW);
  	delay(250);
  	digitalWrite(8, LOW);
  	delay(250);
  	digitalWrite(12, LOW);
  	delay(250);
}