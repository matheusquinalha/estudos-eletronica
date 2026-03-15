# 📘 Aula 07 – Transistores (Outros Tipos)

## 🎯 Objetivo da Aula

Conhecer outros tipos de transistores além do NPN/PNP, entendendo suas aplicações, funcionamento e diferenças, incluindo:

- Fototransistor
- Darlington
- FET / JFET 
- MOSFET
- IGBT

---

# 🔎 Fototransistor

O **fototransistor** é um transistor sensível à luz.

Ele é usado no lugar de um **fotodiodo comum**, pois possui ganho de corrente (hFE), o que aumenta bastante a corrente no circuito.

O fotodiodo possui corrente muito baixa, enquanto o fototransistor consegue amplificar o sinal.

### Características

- Sensível à luminosidade
- Pode ter apenas 2 terminais
- Possui coletor e emissor
- A base é controlada pela luz

### Observação

Existem fototransistores com:

- 2 terminais (coletor e emissor)
- 3 terminais (base, coletor e emissor)

---

# 🔎 Darlington

O **transistor Darlington** é formado por **dois transistores ligados juntos**.

A principal vantagem é o **alto ganho de corrente**, pois os dois hFE se multiplicam.

### Vantagens

- Alto ganho de corrente
- Permite controlar cargas grandes com pequena corrente

### Desvantagens

- Mais lento
- Baixo desempenho em altas tensões
- Maior queda de tensão interna

---

# 🔎 FET / JFET

O **FET (Field Effect Transistor)** é um transistor controlado por campo elétrico.

O **JFET** possui uma estrutura onde existe uma espécie de **porta (Gate)** que controla a passagem de corrente.

Se a tensão na porta for alta, ela pode:

- Diminuir a passagem de corrente
- Estrangular o canal
- Interromper o circuito

### Terminais do FET

| Terminal | Função |
|---------|---------|
| Gate (G) | Controle |
| Drain (D) | Entrada |
| Source (S) | Saída |

---

# 🔎 MOSFET

O **MOSFET** é um tipo de transistor que funciona através de campo elétrico.

Ao aplicar tensão na **porta (Gate)**, cria-se um campo que permite a condução entre:

- Drain (D)
- Source (S)

Ele é muito usado em:

- Fontes chaveadas
- Arduino / microcontroladores
- Controle de motores
- Eletrônica de potência

### Tipos de MOSFET

- Canal N (N-channel)
- Canal P (P-channel)

### Terminais

| Terminal | Nome |
|---------|------|
| G | Gate |
| D | Drain |
| S | Source |

---

# 🔎 IGBT

O **IGBT** é um transistor que combina características de:

- Transistor bipolar
- MOSFET
- FET

Ele é usado quando precisamos controlar:

- Alta tensão
- Alta corrente
- Alta potência

Muito utilizado em:

- Inversores
- Motores elétricos
- Equipamentos industriais
- Eletrônica de potência

---

# 📌 Comparação Geral

| Tipo | Característica |
|------|---------------|
| NPN / PNP | Controle por corrente |
| Fototransistor | Controle por luz |
| Darlington | Alto ganho |
| JFET | Controle por campo |
| MOSFET | Alta eficiência |
| IGBT | Alta potência |

---

# ⚠️ Observações Importantes

- Cada transistor tem aplicação específica.
- MOSFET é muito usado em eletrônica moderna.
- Darlington aumenta ganho, mas diminui velocidade.
- Fototransistor é usado em sensores.
- IGBT é usado em potência alta.

---

# 📌 Conclusão

Existem vários tipos de transistores, cada um com sua função específica.

Escolher o transistor correto depende de:

- Tensão
- Corrente
- Velocidade
- Tipo de controle
- Potência do circuito

Conhecer esses modelos é essencial para trabalhar com eletrônica.
