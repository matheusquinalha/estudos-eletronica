int cima_medio = 3;
int dir_cima = 4;
int dir_baixo = 5;
int baixo_medio = 6;
int esq_baixo = 7;
int esq_cima = 8;
int meio = 9;
int ponto = 10;

int dig_esq = 11;
int dig_dir = 12;

bool disp7seg[10][7] = {
  {1,1,1,1,1,1,0}, //0
  {0,1,1,0,0,0,0}, //1
  {1,1,0,1,1,0,1}, //2
  {1,1,1,1,0,0,1}, //3
  {0,1,1,0,0,1,1}, //4
  {1,0,1,1,0,1,1}, //5
  {1,0,1,1,1,1,1}, //6
  {1,1,1,0,0,0,0}, //7
  {1,1,1,1,1,1,1}, //8
  {1,1,1,1,0,1,1}, //9
};

const int pinos7seg[] = {
  cima_medio, 
  dir_cima,
  dir_baixo,
  baixo_medio,
  esq_baixo,
  esq_cima,
  meio,
};

void setup() {

  pinMode(dig_esq, OUTPUT);
  pinMode(dig_dir, OUTPUT);

  for (int i = 0; i < 7; i++) {
    pinMode(pinos7seg[i], OUTPUT);
  }
}

void loop() {

  for (int num = 0; num < 100; num++) {

    unsigned long tempo = millis();

    while (millis() - tempo < 100) {
      mostrarNumero(num);
    }

  }
}

// =========================
// MOSTRAR NÚMERO (multiplex)
// =========================
void mostrarNumero(int num) {

  int dezena = num / 10;
  int unidade = num % 10;

  // 🔹 mostra dezena (esquerda)
  digitalWrite(dig_esq, LOW);
  digitalWrite(dig_dir, HIGH);

  escreverNumero(dezena);
  delay(5);

  // 🔹 mostra unidade (direita)
  digitalWrite(dig_esq, HIGH);
  digitalWrite(dig_dir, LOW);

  escreverNumero(unidade);
  delay(5);
}

// =========================
// ESCREVER NÚMERO NO DISPLAY
// =========================
void escreverNumero(int n) {
  for (int j = 0; j < 7; j++) {
    digitalWrite(pinos7seg[j], disp7seg[n][j]);
  }
}