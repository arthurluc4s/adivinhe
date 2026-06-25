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

    return 0;
}