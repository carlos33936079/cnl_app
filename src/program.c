void setup(void)
{
	pinMode(16, OUTPUT);
	pinMode(21, OUTPUT);
	
	pinMode(20, OUTPUT);
	pinMode(12, OUTPUT);
	
}

void loop(void)
{
	digitalWrite(16, HIGH);
	delay(300);
	digitalWrite(16, LOW);
	delay(100);
	
	
	digitalWrite(21, HIGH);
	delay(300);
	digitalWrite(21, LOW);
	delay(100);
	
	digitalWrite(20, HIGH);
	delay(300);
	digitalWrite(20, LOW);
	delay(100);
	
	
	digitalWrite(12, HIGH);
	delay(300);
	digitalWrite(12, LOW);
	delay(100);
}
 
