int ledPin = 13; int buttonPin = 2; //puertos donde esta conectado el botón y el led

void setup(){
    pinMode(ledPin, OUTPUT); //led como salida
    pinMode(buttonPin, INPUT); //// Configura el pin del botón como entrada
}

void loop(){
    bool EsButton = digitalRead(buttonPin); //comprueba si esta apretado o no el boton
    if(EsButton==HIGH){ //Si el boton está apretado => prende led
        digitalWrite(ledPin, HIGH);
    } else if(EsButton==LOW){ //Si el boton no está apretado => prende y apaga el led cad 1ms
        for (int i = 0; i < 16000; i++) {
            digitalWrite(ledPin, HIGH);
        }
        for (int i = 0; i < 16000; i++) {
            digitalWrite(ledPin, LOW); 
        }
    digitalWrite(ledPin, LOW); // Apaga el led una vez que termine no esté pulsado el botón.
    }
}