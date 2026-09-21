# Desafio de Monitoramento de Temperatura


**Aluna:** Suellen Carolynne Queiroz dos Santos  
**Disciplina:** Algoritmos e Pensamento Computacional
**Professora:** Karla Sartin  
**Título do projeto:** Monitoramento de Temperatura

---

## Objetivo

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

## Temperaturas Acima do Limite

Após cada leitura válida, o programa compara a temperatura informada com o limite definido no início.

Essa verificação é feita por meio de uma condição:

```c
if (temp > limite_temp)

O projeto permitiu praticar conceitos básicos da linguagem C, principalmente entrada e saída de dados, estruturas condicionais, variáveis de controle e estruturas de repetição.
A utilização de `while` e `do...while` foi importante para permitir que o programa continuasse executando enquanto determinadas condições fossem verdadeiras.

```
## Como executar 
Para executar:

1. Acesse o OnlineGDB.
2. Selecione a linguagem **C**.
3. Cole o conteúdo do arquivo `monitoramento.c`.
4. Clique em **Run** para compilar e executar o programa.

## Testes realizados

Foram realizados três testes no OnlineGDB ( como ensinado anteriormente ) para verificar o funcionamento do programa.

### Teste 1 - Validação de entradas inválidas

Foram inseridas entradas não numéricas tanto na definição do limite quanto na leitura da temperatura.

**Entradas inválidas utilizadas:** `abc` e `teste`.

**Resultado:** o programa identificou as entradas inválidas, exibiu uma mensagem de erro e solicitou novos valores sem interromper a execução.

### Teste 2 - Temperaturas acima do limite, porém não consecutivas

Foi definido o limite de 80 graus e foram informadas temperaturas acima e abaixo desse valor.

**Resultado:** o programa identificou as temperaturas acima do limite, mas não encerrou o monitoramento porque elas não ocorreram três vezes seguidas.

### Teste 3 - Três temperaturas consecutivas acima do limite

Foi definido o limite de 80 graus e foram informadas três temperaturas consecutivas acima desse valor.

**Resultado:** o contador chegou a três leituras consecutivas acima do limite, o programa exibiu o alerta, apresentou o relatório final e encerrou automaticamente.

