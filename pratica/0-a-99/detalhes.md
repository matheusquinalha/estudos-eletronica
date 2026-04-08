# 🔢 Arduino – Display de 7 Segmentos (2 Dígitos) com Multiplexação

## 🎯 Descrição

Este projeto implementa um contador de **00 a 99** utilizando um display de **7 segmentos com 2 dígitos**, controlado por Arduino.

A exibição dos dois dígitos é feita através de **multiplexação**, técnica que permite controlar múltiplos displays utilizando o mesmo conjunto de pinos de segmento.

---

## 🧩 Componentes

- Arduino (Uno, Nano, etc.)
- Display de 7 segmentos com 2 dígitos
- Resistores (recomendado para cada segmento)
- Jumpers
- Protoboard

---

## 🔌 Mapeamento de Pinos

### 🔹 Segmentos

| Segmento        | Pino |
|----------------|------|
| A (topo)        | 3 |
| B (direita cima)| 4 |
| C (direita baixo)| 5 |
| D (baixo)       | 6 |
| E (esquerda baixo)| 7 |
| F (esquerda cima)| 8 |
| G (meio)        | 9 |
| DP (ponto)      | 10 |

---

### 🔹 Seleção de Dígitos

| Dígito | Pino |
|--------|------|
| Esquerdo | 11 |
| Direito  | 12 |

---

## ⚡ Conceito de Multiplexação

Os dois dígitos compartilham os mesmos pinos de segmento.

A distinção entre eles é feita ativando apenas um dígito por vez:

1. Ativa dígito esquerdo → escreve dezena
2. Ativa dígito direito → escreve unidade
3. Repete rapidamente

Esse processo ocorre em alta frequência, criando a **ilusão de exibição simultânea**.

---

## 🧠 Estrutura de Dados

### Tabela de segmentos

* bool disp7seg[10][7];

Cada linha representa um número (0–9) e define quais segmentos devem ser ligados.

Exemplo:

{1,1,1,1,1,1,0} // número 0
{0,1,1,0,0,0,0} // número 1

e por ai vai.

🔹 Array de pinos

const int pinos7seg[];

Mapeia os segmentos físicos do componente (A–G) para os pinos do Arduino.

---

🔁 Lógica de Funcionamento
🔹 1. Contador principal
for (int num = 0; num < 100; num++)

Itera de 0 até 99.

🔹 2. Controle de tempo com millis()
unsigned long tempo = millis();

while (millis() - tempo < 1000) {
  mostrarNumero(num);
}

Mantém o número atual sendo exibido por aproximadamente 1 segundo, mas pode ser alterado para um sequencial também mais rápido.

🔹 3. Separação de dígitos

Aqui esta um macete, pois com os cálculos abaixo, conseguimos exibir os numeros corretamente sem muita burocracia, separando a dezena e a unidade

int dezena = num / 10;
int unidade = num % 10;

Por exemplo, para exibirmos os números 42 e 60:

| Número | Dezena | Unidade |
|--------|------|------|
| 42 | 4 | 2 |
| 60 | 6 | 0 |

---

🔹 4. Multiplexação

Assim mostramos as dezenas: 

digitalWrite(dig_esq, HIGH);
digitalWrite(dig_dir, LOW);

E assim mostramos as unidades:

digitalWrite(dig_esq, LOW);
digitalWrite(dig_dir, HIGH);

e dentro da Multiplexação, setamos um delay de 10 milisegundos para exibir cada numero, a fim de não ser possível distinguir com o olho humano essa diferença, e darmos a sensação de que realmente estamos exibindo os numeros corretamente.

---

🔹 5. Escrita nos segmentos

digitalWrite(pinos7seg[j], disp7seg[n][j]);

Define quais segmentos devem acender para formar o número.

---

⚠️ Considerações Técnicas
* O sistema depende de multiplexação contínua
* delay() excessivo pode causar flicker
* millis() evita bloqueio total do sistema

* Displays podem ser:
 * Ânodo comum
 * Cátodo comum

Caso o comportamento esteja invertido, ajustar os comandos digitarWrite, alternando as variaveis 'n' e 'j'.

---

📌 Conclusão

O projeto demonstra o uso de:

* Controle direto de hardware
* Multiplexação de displays
* Manipulação de tempo com millis()
* Representação numérica em um display duplo de 7 segmentos
