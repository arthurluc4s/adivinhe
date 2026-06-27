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
    
    int acertou = (chute == numerosecreto);
    //Verifica o chute do usuário
    if (acertou)
        printf("Você acertou o número. Parabéns!\n");
    else {
        int maior = (chute > numerosecreto);
        if (maior) {
            printf("Tente um número menor!\n");
        } else {
            printf("Tente um número maior!\n");
        }
    }

    return 0;
}