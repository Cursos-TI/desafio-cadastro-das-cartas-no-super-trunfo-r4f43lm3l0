#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    int escolhajogador, escolhacomputador;
    srand(time(0));

    printf("Jogo de Jokenpô\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolhajogador);

    escolhacomputador = rand() % 3 + 1;

    switch (escolhajogador)
    {
        case 1:
            printf("Jogador: Pedra - ");
            break;
        case 2:
            printf("Jogador: Papel - ");
            break;
        case 3:
            printf("Jogador: Tesoura - ");  
            break;
        default:    
            printf("Opção Inválida\n");
            break;
    }
    switch (escolhacomputador)
    {
        case 1:
            printf("Jogador: Pedra\n");
            break;
        case 2:
            printf("Jogador: Papel\n ");
            break;
        case 3:
            printf("Jogador: Tesoura\\n ");  
            break;
    }
            if (escolhacomputador == escolhajogador)
            {
                printf("### Jogo empatou! ###\n");
            }else if ((escolhajogador ==1) && (escolhajogador ==3) ||
                     (escolhajogador ==2) && (escolhajogador ==1)||
                     (escolhajogador ==3) && (escolhajogador ==2))
            {
                printf("### Parabéns, você ganhou!\n");
            } else {
                printf("###Você Perdeu!###");
            }






    return 0;


}