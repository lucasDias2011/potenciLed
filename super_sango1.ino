// Declaração de variaveis
byte ledGreen = 2;
byte ledYellow =3;
byte ledBlue =4;
byte ledWhite = 5;
byte ledRed = 6;
int potencia = A0;

// inicialização das variaveis
void setup() {
  pinMode (ledGreen, OUTPUT);
  pinMode (ledYellow, OUTPUT);
  pinMode (ledBlue, OUTPUT);
  pinMode (ledWhite, OUTPUT);
  pinMode (ledRed, OUTPUT);
  pinMode (potencia, INPUT);
  Serial.begin(9600);

}

// Lógica de funcionamento
void loop() {
  	int estado = analogRead(potencia);	
	Serial.println(estado); 
  
 
if (estado >=0 & estado < 205) {
	digitalWrite(ledGreen, 1);
}

if (estado >=205 & estado < 410) {
	digitalWrite(ledYellow, 1);
}

if (estado >=410 & estado < 620) {
	digitalWrite(ledBlue, 1);
}
  
if (estado >=620 & estado < 840) {
	digitalWrite(ledWhite, 1);
}
  
if (estado >=840 & estado < 1000) {
	digitalWrite(ledRed, 1);

}  
	}