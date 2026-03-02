# 📘 Aula 04 – Componentes, Códigos e Rótulos

## 🎯 Objetivo da Aula

Compreender como identificar e interpretar códigos e rótulos de componentes eletrônicos, com foco em resistores e capacitores, incluindo sistema de cores, multiplicadores, tolerância e coeficiente de temperatura.

---

## 📖 Conceitos Fundamentais

### 🔹 Unidades, Múltiplos e Submúltiplos

Na eletrônica utilizamos potências de 10 para representar valores muito grandes ou muito pequenos.

Exemplos:

- 10³ = 1.000  
- 10⁶ = 1.000.000  
- 10⁻³ = 0,001  
- 10⁻⁶ = 0,000001  
- 10⁻¹² = 0,000000000001  

Resistores geralmente utilizam valores em múltiplos (kΩ, MΩ).  
Capacitores normalmente utilizam submúltiplos (µF, nF, pF).

---

## 🔍 Explicação Técnica

# 🔸 Resistores

Os resistores podem ser representados por dois símbolos principais:

- Retângulo
- Linha em zigue-zague

---

## 🎨 Código de Cores

Cada cor representa um número:

| Cor       | Número |
|------------|--------|
| Preto      | 0 |
| Castanho   | 1 |
| Vermelho   | 2 |
| Laranja    | 3 |
| Amarelo    | 4 |
| Verde      | 5 |
| Azul       | 6 |
| Violeta    | 7 |
| Cinza      | 8 |
| Branco     | 9 |

---

## 🌡 Coeficiente de Temperatura (ppm):

| Cor        | Coeficiente |
|------------|------|
| Castanho   | 100  |
| Vermelho   | 50   |
| Laranja    | 15   |
| Amarelo    | 25   |

---

## 📊 Tabela de Multiplicador

| Cor | Multiplicador |
|------|--------------|
| Preto | ×1 |
| Castanho | ×10 |
| Vermelho | ×100 |
| Laranja | ×1.000 |
| Amarelo | ×10.000 |
| Verde | ×100.000 |
| Azul | ×1.000.000 |
| Violeta | ×10.000.000 |
| Dourado | ×0,1 |
| Prata | ×0,01 |

---

## 📐 Tabela de Tolerância

| Cor | Tolerância |
|------|------------|
| Dourado | ±5% |
| Prata | ±10% |
| Castanho | ±1% |
| Vermelho | ±2% |
| Verde | ±0,5% |
| Azul | ±0,25% |
| Violeta | ±0,1% |
| Cinza | ±0,05% |

---

## 📏 Sistema de 4 Bandas

- 1ª e 2ª bandas → Dígitos  
- 3ª banda → Multiplicador  
- 4ª banda → Tolerância  

### 🔎 Exemplo:

4,7kΩ ±10%  
Amarelo (4), Violeta (7), Vermelho (×100), Prata (±10%)

---

## 📏 Sistema de 5 Bandas

- 1ª, 2ª e 3ª → Dígitos  
- 4ª → Multiplicador  
- 5ª → Tolerância  

### 🔎 Exemplo:

68kΩ ±5%  
Azul (6), Cinza (8), Preto (0), Vermelho (×100), Dourado (±5%)

---

## 📏 Sistema de 6 Bandas

- 1ª, 2ª e 3ª → Dígitos  
- 4ª → Multiplicador  
- 5ª → Tolerância  
- 6ª → Coeficiente de temperatura  

### 🔎 Exemplo:

560kΩ ±0.1%  
Verde (5), Azul (6), Preto (0), Laranja (×1000), Violeta (±0.1%), Vermelho (50ppm)

# 🔸 Capacitores

Os capacitores podem ser representados por:

- Duas placas paralelas  
- Uma placa reta e uma placa curva, ou uma placa branca e outra placa preta (polarizado)  

---

## 🔋 Polaridade

Nos capacitores eletrolíticos:

- Terminal menor → Negativo  
- Terminal maior → Positivo  

⚠️ A inversão pode danificar o componente.

---

## 🎨 Código de Cores em Capacitores

Embora hoje seja menos comum, alguns capacitores utilizam faixas horizontais com a seguinte lógica:

- 1ª e 2ª faixas → Dígitos  
- 3ª faixa → Multiplicador  
- 4ª faixa → Tolerância  
- 5ª faixa → Tensão nominal  

---

## 🔎 Tensão Nominal

A tensão nominal indica o valor máximo que o capacitor pode suportar, como:

- 250V  
- 400V  
- 630V  

Nunca deve ser excedida.

---

## ⚠️ Pontos Importantes

- Sempre verifique a tolerância antes de usar o componente.  
- Nunca ultrapasse a tensão nominal de um capacitor.  
- Atenção à polaridade em capacitores eletrolíticos.  
- O multiplicador define a ordem de grandeza do valor final.  
- Sistemas de 5 e 6 bandas são mais precisos.  

---

## 🧠 Observações

- A leitura correta das cores evita erros de montagem.  
- Componentes pequenos podem representar valores muito grandes ou muito pequenos.  
- A prática com multímetro ajuda a validar os valores.  
- Entender múltiplos e submúltiplos facilita muito a leitura técnica.  

---

## 📌 Resumo Final

Resistores utilizam código de cores para indicar valor, multiplicador e tolerância.  
Capacitores possuem identificação por código, valor nominal e tensão máxima.  
Interpretar corretamente rótulos e cores é essencial para montar circuitos com segurança e precisão.
