#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUMERO_DE_TENTATIVAS 5

int main() {
    srand(time(0));//seed do srand para gerar números aleatórios com base na data
    int numeroSecreto = rand() % 100;// mod de 100 para considerar números de 0 a 99
    int palpite;
    int isAcertou;
    int isMaiorNumero;
    int isMenorNumero;
    int isPalpiteValido;

    printf("************************************\n");
    printf("* BEM VINDO AO JOGO DE ADIVINHACAO *\n");
    printf("************************************\n");
    printf("* Nesse jogo eu vou pensar em um   *\n");
    printf("* numero e voce deve adivinhar     *\n");
    printf("************************************");

    for (int tentativas = NUMERO_DE_TENTATIVAS; tentativas > 0; tentativas--) {
        printf("\n\n");
        printf("Voce tem %d tentativas: \n", tentativas);
        printf("Qual seu palpite?\n");
        scanf("%d", &palpite);

        printf("Seu palpite foi %d\n", palpite);

        isAcertou = palpite == numeroSecreto;
        isMaiorNumero = palpite > numeroSecreto;
        isMenorNumero = palpite < numeroSecreto;
        isPalpiteValido = palpite > 0;

        if (!isPalpiteValido) {
            printf("Seu palpite deve ser maior que zero!");
            tentativas++;
            continue;
        }

        if (isAcertou) {
            printf("Parabens! Voce acertou!");
            break;
        }

        if (isMaiorNumero) {
            printf("Seu palpite e maior que o numero!");
            continue;
        }

        if (isMenorNumero) {
            printf("Seu palpite e menor que o numero!");
            continue;
        }
    }

    printf("\n\n");
    printf("Numero secreto e: %d", numeroSecreto);
    printf("\n\n");
    printf("************************************\n");
    printf("*            FIM DE JOGO           *\n");
    printf("************************************\n");
    return 0;
}



