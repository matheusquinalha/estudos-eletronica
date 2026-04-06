# 🎮 Arduino – Jogo da Memória (Genius)

## 🎯 Descrição

Implementação de um jogo da memória estilo *Genius*, utilizando Arduino, com:

- Geração de sequência aleatória
- Armazenamento em memória
- Reprodução visual (LEDs) e sonora (buzzer)
- Leitura da entrada do usuário via botões
- Validação da sequência
- Controle de níveis progressivos

---

## 🧩 Componentes

- Arduino (Uno, Nano ou equivalente)
- 3x LEDs (vermelho, verde, amarelo)
- 3x resistores (~220Ω)
- 3x push buttons (4 terminais)
- 1x buzzer ativo, porém passivo fica mais elegante o som.
- Protoboard + jumpers

---

## 🔌 Mapeamento de Pinos

| Função        | Pino |
|---------------|------|
| Botão vermelho | 5 |
| Botão verde    | 6 |
| Botão amarelo  | 7 |
| LED vermelho   | 11 |
| LED verde      | 12 |
| LED amarelo    | 13 |
| Buzzer         | 8 |

---

## ⚡ Ligações

### 🔹 LEDs

Configuração padrão com resistor em série:


Pino → Resistor → LED → GND


Cada LED está ligado diretamente a um pino digital (11, 12, 13).

---

### 🔹 Botões (INPUT_PULLUP)

Os botões utilizam o resistor interno do Arduino:


GND ─── botão ─── pino digital


- Um lado do botão no GND
- Outro lado no pino (5, 6, 7)
- Não utilizar resistor externo

⚠️ Importante: usar terminais opostos do botão (evitar curto interno)

---

### 🔹 Buzzer

Ligação direta:

Pino 8 → Buzzer → GND

---

### 🔹A cada ciclo:

Um novo valor é adicionado à sequência
O nível aumenta
A sequência completa é exibida novamente

🔹 Geração da sequência
memoria[nivel] = portas[random(0, 3)];
nivel++;
Seleciona um LED aleatório
Armazena diretamente o número do pino
Permite comparação direta com entrada do usuário

🔹 Exibição da sequência
mostrarSequencia();
Itera sobre memoria
Aciona LEDs individualmente
Emite som via buzzer
Tempo controlado com delay

🔹 Leitura da entrada do usuário
bool lerSequencia();

---

### 🔹Fluxo:

Aguarda entrada com lerBotao()
Compara com memoria[i]
Retorna erro na primeira divergência

🔹 Leitura de botão
int lerBotao();
Loop bloqueante (while(true))
Detecta botão pressionado (LOW)
Retorna o pino do LED correspondente (11, 12 ou 13)

Isso permite comparação direta:

if (botao != memoria[i])

🔹 Feedback visual e sonoro
piscar(led) → resposta visual imediata
tone() → feedback auditivo
erro() → padrão de falha (som + todos LEDs)

🔹 Verifica a sequência, e caso erre, o código 'trava' no código abaixo:

if (!lerSequencia()) {
  erro();
  while (true) {}
}
