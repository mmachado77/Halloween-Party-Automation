#include <SoftwareSerial.h>

SoftwareSerial Bluetooth(10, 11);  // RX no pino 10, TX no pino 11

const int pirPin = 2;     // Pino do sensor PIR
const int relayOne = 6;    // Pino Relé 1
const int relayTwo = 7;    // Pino Relé 2

void setup() {
    Bluetooth.begin(9600);  // Inicializa a comunicação serial via Bluetooth
    pinMode(pirPin, INPUT);  // Define o pino do sensor PIR como entrada
    pinMode(relayOne, OUTPUT);  // Define o pino do Relé 1 como saída
    pinMode(relayTwo, OUTPUT);  // Define o pino do Relé 2 como saída
    Serial.begin(9600);  // Inicializa a comunicação via USB para monitoramento
    Bluetooth.println("Comunicação Estabelecida");  // Envia "1" via Bluetooth
    Serial.println("Comunicação Estabelecida");  
}

void loop() {
    int motion = digitalRead(pirPin);  // Lê o estado do sensor PIR
    if (motion == HIGH) {  // Se movimento detectado
        Bluetooth.println("1");  // Envia "1" via Bluetooth
        Serial.println("1");     // Para monitoramento no Serial Monitor via USB
        digitalWrite(relayOne, LOW);  // Ativa o Relé 1
        digitalWrite(relayTwo, LOW);  // Ativa o Relé 2
        delay(30000);  // Ajuste este delay para o tempo que durar sua automação.
    } else {
        Bluetooth.println("0");  // Envia "0" via Bluetooth
        Serial.println("0");     // Para monitoramento no Serial Monitor via USB
        digitalWrite(relayOne, HIGH);  // Desativa o Relé 1
        digitalWrite(relayTwo, HIGH);  // Desativa o Relé 2
        delay(500);  // Delay maior para evitar sobrecarga no módulo Bluetooth
    }
}
