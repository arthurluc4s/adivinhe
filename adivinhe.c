#include <stdio.h> //Necessária para o printf
#include <stdlib.h> //Necessária para rand, srand, abs
#include <time.h> //Necessária para time

//Diretiva que funciona como constante
#define N_TENTATIVAS 5

int main() {
    
    //Variáveis
    srand(time(0)); //Alimenta a semente da função rand
    int numerosecreto = rand() % 101;
    int chute;
    float pontos = 100;

    //Imprime a introdução do jogo
    printf("##########################\n");
    printf("#         Adivinhe       #\n");
    printf("##########################\n");

    //Loop de tentativas
    for(int i = 1; i <= N_TENTATIVAS; i++) {

        printf("# Tentativa %d/%d #\n", i, N_TENTATIVAS);
        //Lê e imprime o chute do usuário
        printf("Digite seu chute: ");
        scanf("%d", &chute);

        //Validação da entrada do usuário: números negativos
        if (chute < 0) {
            printf("# Não vale números negativos #\n\n");
            i--;
            continue;
        } 

        //Testes condicionais do jogo
        int acertou = (chute == numerosecreto);
        int maior = (chute > numerosecreto);
        
        //Verifica o chute do usuário
        if (acertou) {
            printf("Parabéns!\n%d é o número secreto.\nVocê acertou.\n\n", chute);
            //Encerra o loop quando acertar o número
            break;
        } else if (maior)
            printf("%d é maior que o número secreto.\n\n", chute);
        else
            printf("%d é menor que o número secreto.\n\n", chute);
        pontos -= abs(numerosecreto - chute) / 2.0;
    }
    printf("#    Fim de jogo   #\n");
    printf("#  Pontuação: %.1f #\n", pontos);

    return 0;
}