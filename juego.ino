//juego leds.ino

int verde[]={13, 12, 11, 10, 9}; //arreglo con leds verdes
int rojo[]={8, 7, 6, 5, 4}; //arreglo con leds rojos

int pinCount= 5; //cantidad de pins conectados por cada color

int velocidad = 30;

void setup() {                

	for(int thisPin = 0; thisPin < pinCount; thisPin++){ //se recorren todos los pins para dejarlos como OUTPUT
		pinMode(verde[thisPin], OUTPUT);
		
	}
	
	for(int thisPin = 0; thisPin < pinCount; thisPin++){ //se recorren todos los pins para dejarlos como OUTPUT
		pinMode(rojo[thisPin], OUTPUT);
		
	}

}


void loop() {



//Se iluminan los leds de 1 en 1 de ida y vuelta

	for(int i=0; i < pinCount; i++){
		digitalWrite(verde[i], HIGH);
		delay(velocidad);
		digitalWrite(verde[i], LOW);
		delay(velocidad);
	}
	
	for(int i=0; i < pinCount; i++){

		digitalWrite(rojo[i], HIGH);
		delay(velocidad);
		digitalWrite(rojo[i], LOW);
		delay(velocidad);
	}
	
	for(int i = pinCount -1; i >= 0; i--){
		digitalWrite(rojo[i], HIGH);
		delay(velocidad);
		digitalWrite(rojo[i], LOW);
		delay(velocidad);
	}

	for(int i = pinCount -1; i >= 0; i--){
		digitalWrite(verde[i], HIGH);
		delay(velocidad);
		digitalWrite(verde[i], LOW);
		delay(velocidad);
	}


///////////////////////////

//se iluminan y apagan progresivamente los leds

	for(int i=0; i < pinCount; i++){
		digitalWrite(verde[i], HIGH);
		delay(velocidad);
	}

	for(int i=0; i < pinCount; i++){
		digitalWrite(rojo[i], HIGH);
		delay(velocidad);
	}

	for(int i=0; i < pinCount; i++){
		digitalWrite(verde[i], LOW);
		delay(velocidad);
	}

	for(int i=0; i < pinCount; i++){
		digitalWrite(rojo[i], LOW);
		delay(velocidad);
	}
	


	for(int i = pinCount -1; i >= 0; i--){
		digitalWrite(rojo[i], HIGH);
		delay(velocidad);
	}

	for(int i = pinCount -1; i >= 0; i--){
		digitalWrite(verde[i], HIGH);
		delay(velocidad);
	}

	for(int i = pinCount -1; i >= 0; i--){
		digitalWrite(rojo[i], LOW);
		delay(velocidad);
	}

	for(int i = pinCount -1; i >= 0; i--){
		digitalWrite(verde[i], LOW);
		delay(velocidad);
	}

/////////////////////////

}//fin del loop
