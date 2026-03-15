# 📘 Aula 06 – Transistores Unipolares (NPN)

## 🎯 Objetivo da Aula

Compreender o funcionamento básico de um transistor, sua estrutura interna, seus terminais e como ele pode ser utilizado para controlar cargas em um circuito.

---

# 🔎 Conceito de Transistor

O transistor é um componente eletrônico semicondutor utilizado principalmente para:

- **Amplificar sinais**
- **Controlar corrente**
- **Atuar como chave eletrônica**

Sua estrutura é semelhante à de um diodo, porém ao invés de possuir **2 camadas de material semicondutor**, o transistor possui **3 camadas**.

Essas camadas formam duas junções internas que podem ser comparadas a **dois diodos conectados entre si**.

---

# 🧱 Estrutura do Transistor

O transistor possui **3 terminais principais**:

| Terminal | Função |
|--------|--------|
| **Base (B)** | Terminal de controle |
| **Coletor (C)** | Entrada da corrente principal |
| **Emissor (E)** | Saída da corrente |

O funcionamento básico é:

> O transistor só permite a passagem de corrente entre **coletor e emissor** quando existe corrente aplicada na **base**.

---

# 🔋 Funcionamento

Quando aplicamos um pequeno sinal na **base**, o transistor permite a condução entre **emissor e coletor**.

Isso significa que:

- **Pequena corrente na base**
- **Controla uma corrente maior no coletor**

Por isso o transistor pode funcionar como **amplificador ou chave eletrônica**.

---

# 🔹 Tipos de Transistores

Um dos modelos mais comuns é o **NPN**.

No transistor **NPN** temos:

- Dois materiais **negativos (N)** nas extremidades
- Um material **positivo (P)** no meio

Estrutura:

N → Coletor
P → Base
N → Emissor

---

# ⚙️ Estados de Operação

A base do transistor pode operar em três estados:

### 🔹 Corte
- Não há corrente na base
- O transistor **não conduz**
- Funciona como **interruptor aberto**

---

### 🔹 Saturação
- Corrente máxima na base
- O transistor conduz totalmente
- Funciona como **interruptor fechado**

---

### 🔹 Região de Operação (ativa)

O transistor conduz parcialmente.

É a região utilizada para **amplificação de sinais**.

---

# 🔌 Exemplo de Circuito

No exemplo do circuito temos:

- Fonte de **12V**
- Uma **lâmpada de 12V / 1A**
- Um transistor **NPN**
- Um sinal de comando de **5V**

A lâmpada é ligada ao **coletor do transistor**.

A base recebe o sinal de controle de **5V**, passando por um **resistor limitador**, que protege o transistor.

---

# ⚡ Queda de Tensão no Transistor

Em cada junção do transistor ocorre uma queda de tensão aproximada de 0,7V

Portanto:

### Base – Emissor

Vbe = Vf - 0.7
Vbe = 5V - 0.7V
Vbe = 4.3V

---

### Coletor – Emissor

Vce = Vf - 0.7
Vce = 12V - 0.7V
Vce = 11.3V

---

# 📊 Fator de Amplificação (hFE)

O **hFE** é o fator de amplificação do transistor.

Ele indica quantas vezes a corrente da base pode ser amplificada no coletor.

Exemplo:

Ib = 20 mA
hFE = 100

Então a corrente no coletor pode ser:

Ic = 2000 mA
Ic = 2 A

Ou seja, uma pequena corrente pode controlar uma corrente muito maior.

---

# 🧮 Cálculo do Resistor da Base

Para proteger o transistor, colocamos um resistor na base.

Usamos a **Lei de Ohm**:

R = V / I

Sabendo que:

V = 4.3V
I = 0.01A

Então:

R = 4.3 / 0.01
R = 430 Ω

Logo, o resistor necessário é aproximadamente:

430 Ω

---

# 📌 Conclusão

O transistor é um componente fundamental na eletrônica e pode ser utilizado para:

- amplificar sinais
- controlar cargas
- funcionar como chave eletrônica

Seu funcionamento depende da corrente aplicada na **base**, que controla a condução entre **coletor e emissor**.

A escolha correta do **resistor de base** é essencial para evitar danos ao transistor.
