// C++ code
//

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);

  pinMode(D1, OUTPUT);//PIN 1 SALIDA
  pinMode(D2, OUTPUT);//PIN 2 SALIDA
  pinMode(D3, OUTPUT);//PIN 3 SALIDA
  pinMode(D4, OUTPUT);//PIN 4 SALIDA


}

void loop()
{
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  delay(1000);
  int i;
  for ( i = 1; i < 17; i++) //CICLO DEL TOTAL DE VALORES
  {
    if ( i == 1) //i ES IGUAL AL VALOR 1
    {
      digitalWrite(D1, HIGH);//PRENDE PIN 1
      delay(1000); // Wait for 1000 millisecond(s)


    }
    else if (i == 2)
    {
      digitalWrite(D1, LOW);//APAGA PIN 1
      digitalWrite(D2, HIGH);//PRENDE PIN 2
      delay(1000); // Wait for 1000 millisecond(s)

    }
    else if (i == 3)
    {
      digitalWrite(D1, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)

    }
    else if (i == 4)
    {
      digitalWrite(D1, LOW);
      digitalWrite(D2, LOW);
      digitalWrite(D3, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)

    }
    else if (i == 5)
    {

      digitalWrite(D1, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)

    }
    else if (i == 6)
    {
      digitalWrite(D1, LOW);
      digitalWrite(D2, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)

    }
    else if (i == 7)
    {
      digitalWrite(D1, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)

    }
    else if (i == 8)
    {
      digitalWrite(D1, LOW);
      digitalWrite(D2, LOW);
      digitalWrite(D3, LOW);
      digitalWrite(D4, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)

    }
    else if ( i == 9)
    {
      digitalWrite(D1, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)


    }
    else if (i == 10)
    {
      digitalWrite(D1, LOW);
      digitalWrite(D2, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)

    }
    else if (i == 11)
    {
      digitalWrite(D1, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)

    }
    else if (i == 12)
    {
      digitalWrite(D1, LOW);
      digitalWrite(D2, LOW);
      digitalWrite(D3, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)

    }
    else if ( i == 13)
    {
      digitalWrite(D1, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)


    }
    else if (i == 14)
    {
      digitalWrite(D1, LOW);
      digitalWrite(D2, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)

    }
    else if (i == 15)
    {
      digitalWrite(D1, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)

    }
    else if (i == 16)
    {
      digitalWrite(D1, LOW);
      digitalWrite(D2, LOW);
      digitalWrite(D3, LOW);
      digitalWrite(D4, LOW);
      delay(1000); // Wait for 1000 millisecond(s)
      i = 0;
    }
  }


  digitalWrite(LED_BUILTIN, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(100); // Wait for 1000 millisecond(s)
}
