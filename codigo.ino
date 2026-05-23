// Definição dos pinos dos Botões
const int pinoAmarelo = 8;
const int pinoVerde = 7;
const int pinoVermelho = 6;
const int pinoAzul = 3;
const int pinoBranco = 2;

// Definição dos pinos dos LEDs
const int ledVerde = 9;
const int ledAmarelo = 10;
const int ledVermelho = 11;
const int ledAzul = 5;
const int ledBranco = 4;

void setup() {
  // Configura os pinos dos LEDs como saída
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(ledBranco, OUTPUT);

  // Configura os pinos dos botões como entrada com pull-up interno
  pinMode(pinoAmarelo, INPUT_PULLUP);
  pinMode(pinoVerde, INPUT_PULLUP);
  pinMode(pinoVermelho, INPUT_PULLUP);
  pinMode(pinoAzul, INPUT_PULLUP);
  pinMode(pinoBranco, INPUT_PULLUP);


}

void loop() {
  
  // --- CONTROLE DO LED VERDE ---
  // Se o botão verde for pressionado (LOW), acende o LED verde. Senão, apaga.
  if (digitalRead(pinoVerde) == LOW) {
    digitalWrite(ledVerde, HIGH);
  } else {
    digitalWrite(ledVerde, LOW);
  }

  // --- CONTROLE DO LED AMARELO ---
  if (digitalRead(pinoAmarelo) == LOW) {
    digitalWrite(ledAmarelo, HIGH);
  } else {
    digitalWrite(ledAmarelo, LOW);
  }

  // --- CONTROLE DO LED VERMELHO ---
  if (digitalRead(pinoVermelho) == LOW) {
    digitalWrite(ledVermelho, HIGH);
  } else {
    digitalWrite(ledVermelho, LOW);
  }

   // --- CONTROLE DO LED AZUL ---
  if (digitalRead(pinoAzul) == LOW) {
    digitalWrite(ledAzul, HIGH);
  } else {
    digitalWrite(ledAzul, LOW);
  }
  
   // --- CONTROLE DO LED BRANCO ---
  if (digitalRead(pinoBranco) == LOW) {
    digitalWrite(ledBranco, HIGH);
  } else {
    digitalWrite(ledBranco, LOW);
  }
}
