# Desafio de Monitoramento de Temperatura


**Aluna:** Suellen Carolynne Queiroz dos Santos  
**Disciplina:** Algoritimos e Pensamento Computacional
**Professora:** Karla Sartin  
**Título do projeto:** Monitoramento de Temperatura

---

## 2. Objetivo

O objetivo deste projeto é desenvolver, em linguagem C, um programa simples para monitorar leituras de temperatura.

O sistema permite que o usuário defina um limite de temperatura e, em seguida, informe várias leituras. O programa verifica se cada temperatura está acima ou dentro do limite estabelecido.

Quando são identificadas **três temperaturas consecutivas acima do limite**, o programa apresenta um alerta crítico e encerra automaticamente o monitoramento.

Também foram implementadas validações para impedir que entradas inválidas prejudiquem o funcionamento do programa.
# Monitoramento de Temperatura

## Limite de Temperatura

No início do programa, o usuário deve informar o limite de temperatura. Essa informação é solicitada por meio de uma estrutura `do...while`.

O valor informado precisa ser maior que zero. Caso seja digitado um número negativo, uma letra, símbolo ou qualquer entrada inválida, o programa apresenta uma mensagem de erro e solicita o valor novamente até que uma entrada válida seja fornecida.

## Leituras

As temperaturas são informadas continuamente durante a execução do programa.

Para isso, é utilizado um laço `while`, que solicita uma nova leitura a cada repetição e armazena o valor informado em uma variável do tipo `float`.

## Tratamento de Valores Inválidos

O programa verifica se os valores digitados são numéricos utilizando o retorno da função `scanf()`.

Caso o usuário digite letras ou símbolos no lugar de uma temperatura, a entrada é considerada inválida. O programa apresenta uma mensagem de erro, limpa a entrada incorreta e solicita um novo valor.

Esse processo é utilizado tanto na definição do limite quanto durante as leituras das temperaturas.

## Temperaturas Acima do Limite

Após cada leitura válida, o programa compara a temperatura informada com o limite definido no início.

Essa verificação é feita por meio de uma condição:

```c
if (temp > limite_temp)

O projeto permitiu praticar conceitos básicos da linguagem C, principalmente entrada e saída de dados, estruturas condicionais, variáveis de controle e estruturas de repetição.

A utilização de `while` e `do...while` foi importante para permitir que o programa continuasse executando enquanto determinadas condições fossem verdadeiras.
