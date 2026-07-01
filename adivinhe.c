#include <stdio.h>

//Diretiva que funciona como constante
#define N_TENTATIVAS 5

int main() {
    //Variáveis
    int numerosecreto = 42;
    int chute;

    //Imprime a introdução do jogo
    printf("##########################\n");
    printf("#        Adivinhe!       #\n");
    printf("##########################\n");

    //Loop de tentativas
    for(int i = 1; i <= N_TENTATIVAS; i++) {

        printf("# Tentativa %d/%d #\n", i, N_TENTATIVAS);
        //Lê e imprime o chute do usuário
        printf("Digite seu chute: ");
        scanf("%d", &chute);
        printf("Você chutou o número: %d\n", chute);

        int acertou = (chute == numerosecreto);

        //Verifica o chute do usuário
        if (acertou) {
            printf("Você acertou o número. Parabéns!\n");
            //Encerra o loop quando acertar o número
            break;
        }
        else {
            int maior = (chute > numerosecreto);
            if (maior) {
                printf("Tente um número menor!\n");
            } else {
                printf("Tente um número maior!\n");
            }
        }
    }
    printf("# Fim de jogo! #\n");

    return 0;
}