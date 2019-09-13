# arduino-appinventor
Repositorio de Arduino con AppInventor de la jornada Programador 2019.

## Aplicación App Inventor
<a href="Presentacion.apk" download>Descargar</a>
## Proyecto App Inventor
<a href="Presentacion.aia" download>Descargar</a>
## Código Arduino
```cpp
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
```
