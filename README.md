# 🎛️ Simulador de Acionamento de LEDs com Botões (Arduino)

Este projeto consiste em um laboratório prático de eletrônica e programação embarcada desenvolvido no **Tinkercad**. O objetivo principal é exercitar a lógica de controle de GPIOs utilizando o Arduino Uno, controlando múltiplos LEDs de forma independente através de botões (push-buttons).

---

## 🚀 Funcionamento

O circuito foi projetado para responder em tempo real ao comando do usuário:
* Cada botão está associado a um LED específico.
* **Clique rápido:** Aciona o LED correspondente instantaneamente.
* **Pressionamento contínuo:** Mantém o LED ligado pelo tempo que o botão permanecer pressionado.

---

## 🛠️ Componentes Utilizados

* 1x Arduino Uno R3
* 3x Protoboards (Matrizes de contatos interconectadas)
* 5x LEDs (Sendo 1 Vermelho, 1 Amarelo, 1 Verde, 1 Azul e 1 Cinza/Branco)
* 5x Resistores (Limitadores de corrente para os LEDs)
* 5x Push-buttons (Botões tácteis)
* Jumpers (Fios de conexão para dados e alimentação)

---

## 📐 Esquema do Circuito

O projeto utiliza uma rede de distribuição de energia unificada através das protoboards (barramentos de VCC e GND interligados). Os botões e LEDs estão mapeados diretamente nos pinos digitais do Arduino.

![Esquema do Projeto](./Copy%20of%20treino%20de%20arduino.png) *(Substitua pelo caminho correto da imagem no seu repositório)*

---

## 💻 Código Exemplo

Abaixo está a estrutura lógica base utilizada para o mapeamento e controle dos pinos:

```cpp
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


```
