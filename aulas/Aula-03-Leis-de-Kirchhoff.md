# 📘 Aula 03 -- Leis de Kirchhoff

## 🎯 Objetivo da Aula

Compreender as Leis de Kirchhoff e aplicá-las na análise de circuitos
elétricos, entendendo o comportamento das correntes nos nós e das
tensões nas malhas.

------------------------------------------------------------------------

## 📖 Conceitos Fundamentais

As Leis de Kirchhoff são baseadas no princípio da conservação:

-   Conservação da carga elétrica → Lei das Correntes ou Lei dos Nós
-   Conservação da energia → Lei das Tensões ou Lei das Malhas

Elas são essenciais para análise de circuitos mais complexos.

------------------------------------------------------------------------

## 🔍 Explicação Técnica

### 1️⃣ Primeira Lei -- Lei das Correntes (Lei dos Nós)

Está relacionada à conservação da corrente elétrica.

📌 Definição: Em um nó, a soma das correntes que entram é igual à soma
das correntes que saem.

Matematicamente:

    I1 + I2 + (-I3) + (-I4) = 0

Ou de forma equivalente:

    Soma das correntes que entram = Soma das correntes que saem

🔎 Observação: - Correntes que entram no nó podem ser consideradas
positivas. - Correntes que saem podem ser consideradas negativas (ou
vice-versa, desde que mantenha o padrão).

Essa lei é aplicada em pontos de conexão chamados **nós**.

------------------------------------------------------------------------

### 🔌 Exemplo Conceitual

Na formação de um nó, temos:

-   Uma linha com o componente I1, que necessita de 5A, e um segundo componente I3, que necessita de 2A
-   Uma segunda linha com o componente I2, que necessita de 1A, e um segundo componente I4, que necessita de 4A
-   O nó esta localizado entre o I1 e I3 e também entre I2 e I4, fazendo uma interseção entre as duas linhas, formando um X. 

Por tanto:

    - Ao energizar ambas as linhas ao mesmo tempo, a correte passa pelos componentes I1 e I2, e chega até o nó e interseção. Nesse momento, é como se tivesse acumulado 6A ao todo.
    - Ao seguir para os próximos componentes (I3 e I4), a corrente é redistribuida automaticamente, para que vá exatos 2A para o I3, e 4A para o I4, suprindo assim a necessidade da reda.

Utilizando a formula: 
    
    I1 + I2 + (-I3) + (-I4) = 0
    ou
    5A + 1A + (-2A) + (-4A) = 0

Isso confirma a Lei das Correntes.

------------------------------------------------------------------------

### 2️⃣ Segunda Lei -- Lei das Tensões (Lei das Malhas)

Está relacionada à conservação da energia elétrica.

📌 Definição: A soma das tensões (DDP) em um percurso fechado é igual a
zero.

Matematicamente:

    VR1 + VR2 + VR3 - Vfonte = 0

Ou:

    Soma das quedas de tensão = Tensão da fonte

🔎 Observação: - Essa lei é aplicada em percursos fechados chamados
**malhas**. - O sinal das tensões depende do sentido escolhido para
percorrer a malha.

------------------------------------------------------------------------

### 🔌 Exemplo Conceitual

Em uma malha contendo:

-   Fonte de 10V
-   R1 com queda de 3V
-   R2 com queda de 5V
-   R3 com queda de 2V

Temos:

    3V + 5V + 2V - 10V = 0

Isso confirma a Lei das Tensões.

------------------------------------------------------------------------

## ⚠️ Pontos Importantes

-   A Lei dos Nós trabalha com correntes.
-   A Lei das Malhas trabalha com tensões.
-   Sempre defina um padrão de sinais antes de montar as equações.
-   As leis são válidas para qualquer tipo de circuito elétrico.
-   São fundamentais para análise de circuitos em série, paralelo e
    mistos.

------------------------------------------------------------------------

## 🧠 Observações Pessoais

-   A Lei dos Nós facilita a análise quando há muitos ramos no circuito.
-   A Lei das Malhas ajuda a entender como a energia se distribui.
-   Definir corretamente o sentido das correntes evita erros de sinal.
-   Essas leis são a base para métodos mais avançados como análise nodal
    e análise de malhas.

------------------------------------------------------------------------

## 📌 Resumo Rápido

As Leis de Kirchhoff permitem analisar circuitos elétricos complexos:

-   Lei dos Nós → Correntes que entram = Correntes que saem.
-   Lei das Malhas → A soma das tensões em um circuito fechado é zero.

Elas garantem a conservação da carga elétrica e da energia no circuito.
