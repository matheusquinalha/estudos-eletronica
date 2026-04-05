int botaoVermelho = 5;
int botaoVerde = 6;
int botaoAmarelo = 7;

int ledVermelho = 11;
int ledVerde = 12;
int ledAmarelo = 13;

int portas[3] = {11,12,13};
int botoes[3] = {5,6,7};

int buzzer = 8;

int memoria[10];

int nivel = 0;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));

  pinMode(botaoAmarelo, INPUT_PULLUP);
  pinMode(botaoVerde, INPUT_PULLUP);
  pinMode(botaoVermelho, INPUT_PULLUP);

  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);

  pinMode(buzzer, OUTPUT);
}

void loop() {

  // 🔹 aumenta nível
  memoria[nivel] = portas[random(0, 3)];
  nivel++;

  Serial.print("Nivel: ");
  Serial.println(nivel);

  // 🔹 mostra sequência completa
  mostrarSequencia();

  delay(300);

  // 🔹 jogador repete
  if (!lerSequencia()) {
    erro();
    while (true) {} // trava jogo
  }

  // 🔹 acertou nível
  tone(buzzer, 2000, 200);
  delay(300);

  delay(1000);
}


// =========================
// MOSTRAR SEQUÊNCIA
// =========================
void mostrarSequencia() {

  for (int i = 0; i < nivel; i++) {

    digitalWrite(memoria[i], HIGH);
    tone(buzzer, 800, 200);
    delay(400);

    digitalWrite(memoria[i], LOW);
    delay(400);
  }
}


// =========================
// LER SEQUÊNCIA DO USUÁRIO
// =========================
bool lerSequencia() {

  for (int i = 0; i < nivel; i++) {

    int botao = lerBotao();

    if (botao != memoria[i]) {
      return false; // erro
    }

    tone(buzzer, 1500, 100);
    delay(150);
  }

  return true; // acertou tudo
}


// =========================
// LER BOTÃO
// =========================
int lerBotao() {

  while (true) {

    if (digitalRead(botaoVermelho) == LOW) {
      piscar(ledVermelho);
      while (digitalRead(botaoVermelho) == LOW) {}
      return 11;
    }

    if (digitalRead(botaoVerde) == LOW) {
      piscar(ledVerde);
      while (digitalRead(botaoVerde) == LOW) {}
      return 12;
    }

    if (digitalRead(botaoAmarelo) == LOW) {
      piscar(ledAmarelo);
      while (digitalRead(botaoAmarelo) == LOW) {}
      return 13;
    }
  }
}


// =========================
// PISCAR LED
// =========================
void piscar(int led) {
  digitalWrite(led, HIGH);
  delay(200);
  digitalWrite(led, LOW);
}


// =========================
// ERRO
// =========================
void erro() {

  Serial.println("ERROU!");

  for (int i = 0; i < 3; i++) {
    tone(buzzer, 400, 200);
    delay(250);
  }

  // pisca tudo
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledAmarelo, HIGH);

  delay(500);

  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, LOW);
}