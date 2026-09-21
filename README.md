# Desafio de Monitoramento de Temperatura


**Aluna:** Suellen Carolynne Queiroz dos Santos  
**Disciplina:** Algoritmos e Pensamento Computacional
**Professora:** Karla Sartin  
**Título do projeto:** Monitoramento de Temperatura

---

## 1. Objetivo

O objetivo deste projeto é desenvolver, em linguagem C, um programa simples para monitorar leituras de temperatura.

O sistema permite definir um limite de temperatura e realizar várias leituras. O programa verifica quando as temperaturas ultrapassam o limite estabelecido e encerra automaticamente quando são registradas três temperaturas consecutivas acima desse valor.

Também são calculadas a média, a maior e a menor temperatura, além da quantidade de leituras acima do limite.

---

## 2. Funcionamento do programa

### Limite de temperatura

No início do programa, o usuário informa o limite de temperatura.

O valor informado deve ser numérico. Caso seja digitada uma letra, símbolo ou outra entrada inválida, o programa apresenta uma mensagem de erro e solicita o valor novamente.

### Leituras

Após definir o limite, o programa começa a solicitar as temperaturas do sensor.

As leituras são realizadas continuamente enquanto não ocorrerem três temperaturas consecutivas acima do limite.

Cada temperatura válida é utilizada para calcular a média, identificar a maior e a menor temperatura e verificar se o valor está acima do limite.

### Tratamento de valores inválidos

O programa verifica o retorno da função `scanf()`.

Caso seja digitada uma entrada não numérica, o programa exibe uma mensagem de erro e solicita um novo valor.

A entrada inválida não é considerada nos cálculos.

### Temperaturas acima do limite

Após cada leitura válida, o programa compara a temperatura informada com o limite definido.

Essa verificação é feita por meio da condição:

```c
if (temperatura > limite)

## Questão final de reflexão

Utilizei o `do...while` para validar o limite, porque essa etapa precisa acontecer pelo menos UMA vez.

O `while` foi usado no monitoramento, pois é ele que verifica antes se ainda não ocorreram três temperaturas consecutivas acima do limite pedido.

A diferença foi muito importante porque o `do...while` testa a condição depois da execução, enquanto o `while` testa antes.
```
Quando a temperatura está acima do limite, o programa aumenta a quantidade de temperaturas acima do limite e também o contador de temperaturas consecutivas.

Contagem de temperaturas consecutivas

A variável consecutivas controla quantas temperaturas acima do limite ocorreram em sequência.

Quando uma temperatura ultrapassa o limite, o contador aumenta em 1.

Caso seja informada uma temperatura dentro ou abaixo do limite, a contagem volta para zero.

Encerramento do monitoramento

O programa encerra automaticamente quando são registradas três temperaturas consecutivas acima do limite.

Após o encerramento, é exibido um relatório com:

quantidade de leituras;
média das temperaturas;
maior temperatura;
menor temperatura;
quantidade de temperaturas acima do limite.

3. Estruturas de repetição utilizadas

Foram utilizadas as estruturas do...while e while.

O do...while foi utilizado para solicitar e validar o limite de temperatura, porque essa etapa precisa acontecer pelo menos uma vez.

O while foi utilizado para manter o monitoramento ativo enquanto ainda não ocorreram três temperaturas consecutivas acima do limite.

Também foi utilizado um while para limpar entradas inválidas digitadas pelo usuário.

4. Como executar o programa

O programa foi testado utilizando o compilador online OnlineGDB.

Para executar:

Acesse o OnlineGDB.
Selecione a linguagem C.
Cole o conteúdo do arquivo monitoramento.c.
Clique em Run para compilar e executar.

Também é possível compilar e executar localmente utilizando GCC:

gcc monitoramento.c -o monitoramento
./monitoramento

5. Testes realizados
Teste 1 - Validação de entradas inválidas

Foram inseridas entradas não numéricas tanto na definição do limite quanto durante a leitura da temperatura.

Entradas inválidas utilizadas: abc e teste.

Resultado: o programa identificou as entradas inválidas, exibiu uma mensagem de erro e solicitou novos valores sem interromper a execução.

Teste 2 - Temperaturas acima do limite, porém não consecutivas

Foi definido o limite de 80 graus.

Foram informadas temperaturas acima e abaixo desse valor.

Resultado: o programa identificou as temperaturas acima do limite, mas não encerrou o monitoramento porque elas não ocorreram três vezes de forma consecutiva.

Teste 3 - Três temperaturas consecutivas acima do limite

Foi definido o limite de 80 graus.

Foram informadas três temperaturas consecutivas acima desse valor.

Resultado: o contador chegou a três leituras consecutivas acima do limite, o programa exibiu o alerta, apresentou o relatório final e encerrou automaticamente.

6. Evidências

As evidências dos testes realizados estão disponíveis na pasta evidencias:

teste01.png
teste02.png
teste03.png
Questão final de reflexão

Utilizei o do...while para validar o limite, porque essa etapa precisa acontecer pelo menos uma vez.

O while foi usado no monitoramento, pois verifica antes se ainda não ocorreram três temperaturas consecutivas acima do limite.

A diferença foi importante porque o do...while testa a condição depois da execução, enquanto o while testa antes.


