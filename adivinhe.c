#include <stdio.h> //Necessária para o printf
#include <stdlib.h> //Necessária para rand, srand, abs
#include <time.h> //Necessária para time

int main() {
    
    //Variáveis
    srand(time(0)); //Alimenta a semente da função rand
    int numerosecreto = rand() % 101;
    int chute;
    float pontos = 100;
    int n_tentativas;
    int nivel;

    //Imprime a introdução do jogo
    printf("##########################\n");
    printf("#         Adivinhe       #\n");
    printf("##########################\n\n");

    printf("#     Níveis do jogo     #\n");
    printf("#(1) Fácil               #\n");
    printf("#(2) Médio               #\n");
    printf("#(3) Difícil             #\n");
    printf("Digite o nível: ");
    scanf("%d", &nivel);
    printf("\n");

    switch (nivel) {
        case 1:
            n_tentativas = 9;
            break;
        case 2:
            n_tentativas = 6;
            break;
        case 3:
            n_tentativas = 3;
            break;
    }

    //Loop de tentativas
    for(int i = 1; i <= n_tentativas; i++) {

        printf("# Tentativa %d/%d #\n", i, n_tentativas);
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
            printf("#  Pontuação: %.1f #\n", pontos);
            //Encerra o loop quando acertar o número
            break;
        } else if (maior)
            printf("%d é maior que o número secreto.\n\n", chute);
        else
            printf("%d é menor que o número secreto.\n\n", chute);
        pontos -= abs(numerosecreto - chute) / 2.0;
    }
    printf("#    Fim de jogo   #\n");
    return 0;
}