#include <stdio.h>

int main() {

    float limite;
    float temperatura;
    float soma = 0;
    float media;
    float maior;
    float menor;

    int quantidade = 0;
    int acimaLimite = 0;
    int consecutivas = 0;
    int opcao;

    printf("SISTEMA DE MONITORAMENTO INDUSTRIAL\n");

    // Valida o limite de temperatura
    do {

        printf("\nDigite o limite de temperatura: ");
        opcao = scanf("%f", &limite);

        if (opcao != 1) {

            printf("Entrada invalida. Digite um numero.\n");

            while (getchar() != '\n') {
            }
        }

    } while (opcao != 1);

    // Realiza as leituras de temperatura
    while (consecutivas < 3) {

        printf("\nDigite a temperatura do sensor: ");
        opcao = scanf("%f", &temperatura);

        if (opcao != 1) {

            printf("Entrada invalida. Digite um numero.\n");

            while (getchar() != '\n') {
            }

        } else {

            quantidade++;

            soma = soma + temperatura;

            // Define maior e menor temperatura
            if (quantidade == 1) {

                maior = temperatura;
                menor = temperatura;

            } else {

                if (temperatura > maior) {
                    maior = temperatura;
                }

                if (temperatura < menor) {
                    menor = temperatura;
                }
            }

            // Verifica temperaturas acima do limite
            if (temperatura > limite) {

                acimaLimite++;
                consecutivas++;

                printf("Temperatura acima do limite!\n");
                printf("Temperaturas consecutivas: %d\n", consecutivas);

            } else {

                consecutivas = 0;

                printf("Temperatura dentro do limite.\n");
            }
        }
    }

    // Calcula a media
    media = soma / quantidade;

    // Relatorio final
    printf("\n===== RELATORIO FINAL =====\n");

    printf("Quantidade de leituras: %d\n", quantidade);
    printf("Media: %.2f\n", media);
    printf("Maior temperatura: %.2f\n", maior);
    printf("Menor temperatura: %.2f\n", menor);
    printf("Temperaturas acima do limite: %d\n", acimaLimite);

    printf("\nALERTA!\n");
    printf("Tres temperaturas consecutivas acima do limite.\n");
    printf("Monitoramento encerrado.\n");

    return 0;
}
