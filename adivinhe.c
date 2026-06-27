#include <stdio.h>

int main() {
    //Variáveis
    int numerosecreto = 42;
    int chute;

    //Imprime a introdução do jogo
    printf("##########################\n");
    printf("#        Adivinhe!       #\n");
    printf("##########################\n");

    //Lê chute do usuário
    printf("Digite seu chute: ");
    scanf("%d", &chute);

    printf("Você chutou o número: %d\n", chute);

    //Verifica o chute do usuário
    if (chute == numerosecreto)
        printf("Você acertou o número. Parabéns!\n");
    else {
        printf("Você errou o número. Tente novamente.\n");
        if (chute > numerosecreto) {
            printf("Tente um número menor!\n");
        }
        if (chute < numerosecreto) {
            printf("Tente um número maior!");
        }
    }

    return 0;
}