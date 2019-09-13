
void setup() {
  
  Serial.begin(9600);

  pinMode(LED_BUILTIN, OUTPUT);
  
}

void loop()
{

  if (Serial.available())
  {
    char a = Serial.read();
    
    if (a == '1') {
      digitalWrite(LED_BUILTIN, HIGH);
    }else
    {
      digitalWrite(LED_BUILTIN, LOW);
    }
  }
  
}
