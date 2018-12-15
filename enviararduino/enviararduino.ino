const int LED = 13;

int val; //val se emplea para almacenar el estado del boton
char mssg; // 0 LED apagado, mientras que 1 encendido
int old_val; // almacena el antiguo valor de val
void setup() {
  pinMode(LED, OUTPUT);
  
  Serial.begin(9600);
}
void loop() {
  if (Serial.available() > 0)
  {
    delay(100);
    mssg = Serial.read();
    //Serial.read(mssg);


    if ((mssg == '1')||(mssg == '2')||(mssg == 'i')||(mssg == 'o')||(mssg == 'v') )
    {
      digitalWrite(LED, HIGH);
      delay(10000);
    
    }
    else if (((mssg == '1')||(mssg == '2')||(mssg == 'i')||(mssg == 'o')||(mssg == 'v') ) && (old_val == 1))
    {
      digitalWrite(LED, LOW);
      delay(10000);
     

    }









    //    if ((val == HIGH) && (old_val == LOW)&&(mssg=='a')) {
    //      state = 1 - state;
    //      delay(10);
    //    }
    //    old_val = val; // valor del antiguo estado
    //    if (state == 1) {
    //      digitalWrite(LED, HIGH); // enciende el LED
    //    }
    //    else {
    //      digitalWrite(LED, LOW); // apagar el LED
    //    }

  }
}
