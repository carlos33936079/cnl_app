void setup(void)
{
	pinMode(21, OUTPUT);
}

void loop(void)
{
	digitalWrite(21, HIGH);
	delay(100);
	digitalWrite(21, LOW);
	delay(100);
}
 
