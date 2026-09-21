# Desafio de Monitoramento de Temperatura


**Aluna:** Suellen Carolynne Queiroz dos Santos  
**Disciplina:** Algoritmoss e Pensamento Computacional
**Professora:** Karla Sartin  
**Título do projeto:** Monitoramento de Temperatura

---

## 2. Objetivo

O objetivo deste projeto é desenvolver, em linguagem C, um programa simples para monitorar leituras de temperatura.

O sistema permite que o usuário defina um limite de temperatura e, em seguida, informe várias leituras. O programa verifica se cada temperatura está acima ou dentro do limite estabelecido.

Quando são identificadas **três temperaturas consecutivas acima do limite**, o programa apresenta um alerta crítico e encerra automaticamente o monitoramento.

Também foram implementadas validações para impedir que entradas inválidas prejudiquem o funcionamento do programa.

---

## 3. Funcionamento do programa

### Definição do limite de temperatura

No início do programa, o usuário deve informar o limite de temperatura que será utilizado durante o monitoramento.

Para este projeto, foi considerado como intervalo válido valores entre **-100 e 100 graus**.

Caso o usuário digite um texto ou um valor fora desse intervalo, o programa informa que a entrada é inválida e solicita um novo valor.

### Realização das leituras

Depois que o limite é definido corretamente, o programa começa a solicitar as temperaturas.

Cada temperatura digitada é analisada individualmente.

O programa permanece solicitando novas temperaturas enquanto não ocorrerem três leituras consecutivas acima do limite.

### Tratamento de valores inválidos

O programa verifica dois tipos de entrada inválida:

- valores que não são números, como letras ou palavras;
- temperaturas menores que -100 ou maiores que 100 graus.

Quando isso acontece, a leitura é ignorada e uma nova temperatura é solicitada.

### Identificação de temperaturas acima do limite

A comparação é realizada utilizando uma estrutura condicional `if`.

Quando a temperatura digitada é maior que o limite definido pelo usuário, o programa exibe uma mensagem de alerta e aumenta em 1 a variável responsável pela contagem de temperaturas consecutivas.

### Contagem de temperaturas consecutivas

A variável `consecutivas` começa com valor zero.

Sempre que uma temperatura ultrapassa o limite, essa variável é incrementada.

Por exemplo:

```text
1ª temperatura acima do limite -> consecutivas = 1
2ª temperatura acima do limite -> consecutivas = 2
3ª temperatura acima do limite -> consecutivas = 3
```

Caso seja informada uma temperatura igual ou menor que o limite, a contagem volta para zero.

Dessa forma, somente temperaturas realmente consecutivas são consideradas.

### Condição de encerramento

O monitoramento é encerrado quando a variável `consecutivas` chega ao valor 3.

Nesse momento, o programa apresenta uma mensagem de alerta crítico e finaliza a execução.

---

## 4. Estruturas de repetição utilizadas

Neste projeto foram utilizadas as estruturas `do...while` e `while`.

### do...while

O `do...while` foi utilizado na definição do limite de temperatura.

Ele foi escolhido porque o programa precisa solicitar o limite pelo menos uma vez. Caso a entrada seja inválida, o bloco é repetido até que seja informado um valor correto.

Trecho utilizado:

```c
do {
    /* leitura e validação do limite */
} while (entradaValida != 1);
```

### while

O `while` foi utilizado para manter o monitoramento das temperaturas.

O programa continua solicitando novas leituras enquanto ainda não existirem três temperaturas consecutivas acima do limite.

Trecho utilizado:

```c
while (consecutivas < 3) {
    /* leitura e análise das temperaturas */
}
```

Também foi utilizado um `while` menor para limpar caracteres inválidos do buffer de entrada quando o usuário digita letras no lugar de números.

A combinação das duas estruturas foi escolhida porque permite separar de forma simples a validação inicial do limite e o processo contínuo de monitoramento.

---

## 5. Como executar

### Compilação

Com o GCC instalado, abra o terminal na pasta do projeto e execute:

```bash
gcc monitoramento.c -o monitoramento
```

### Execução no Linux ou macOS

```bash
./monitoramento
```

### Execução no Windows

```bash
monitoramento.exe
```

---

## 6. Testes realizados

Foram realizados três cenários principais de teste.

### Teste 1: validação de entradas inválidas

**Objetivo:** verificar se o programa rejeita letras e temperaturas fora do intervalo permitido.

Exemplo:

```text
Informe o limite de temperatura (-100 a 100 graus): abc
Entrada invalida. Digite apenas numeros.

Informe o limite de temperatura (-100 a 100 graus): 150
Valor invalido. O limite deve estar entre -100 e 100 graus.

Informe o limite de temperatura (-100 a 100 graus): 30
Limite definido: 30.0 graus.

Digite a temperatura atual (-100 a 100 graus): teste
Entrada invalida. Digite apenas numeros.
```

**Resultado:** o programa identificou corretamente as entradas inválidas e solicitou novos valores sem encerrar a execução.

---

### Teste 2: temperaturas acima do limite, porém não consecutivas

**Limite utilizado:** 30 graus.

Leituras:

```text
35
25
38
29
40
```

Resultado esperado da contagem:

```text
35 -> acima do limite -> contagem = 1
25 -> dentro do limite -> contagem volta para 0

38 -> acima do limite -> contagem = 1
29 -> dentro do limite -> contagem volta para 0

40 -> acima do limite -> contagem = 1
```

**Resultado:** o programa não encerrou o monitoramento, pois as temperaturas acima do limite não ocorreram três vezes de forma consecutiva.

---

### Teste 3: três temperaturas consecutivas acima do limite

**Limite utilizado:** 30 graus.

Leituras:

```text
31
35
40
```

Resultado:

```text
31 -> contagem = 1
35 -> contagem = 2
40 -> contagem = 3
```

Após a terceira leitura consecutiva acima do limite, foi exibida a mensagem:

```text
ALERTA CRITICO!
Foram registradas 3 temperaturas consecutivas
acima do limite de 30.0 graus.
Monitoramento encerrado automaticamente.
```

**Resultado:** o programa identificou corretamente as três temperaturas consecutivas acima do limite e encerrou o monitoramento automaticamente.

---

## 7. Organização do projeto

```text
desafio-monitoramento/
│
├── monitoramento.c
├── README.md
└── evidencias/
    ├── teste01.png
    ├── teste02.png
    └── teste03.png
```

As imagens da pasta `evidencias` devem registrar a execução dos três testes apresentados anteriormente.

---

## Considerações finais

O projeto permitiu praticar conceitos básicos da linguagem C, principalmente entrada e saída de dados, estruturas condicionais, variáveis de controle e estruturas de repetição.

A utilização de `while` e `do...while` foi importante para permitir que o programa continuasse executando enquanto determinadas condições fossem verdadeiras.
