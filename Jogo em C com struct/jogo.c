#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct dados_jogador {
    char nome[30];
    int pontos;
}jogador[999];

main(){

    int num, alea, cont = 1, i, j, qtd, aux=0;;
    srand( (unsigned)time(NULL) );
    alea = rand()% 100;

    printf("Bem-vindo ao jogo!\nQuantos iram jogar?\n");
    fflush(stdin);
    scanf("%d", &qtd);
    //printf("RESPOSTA: %d\n", alea);

    for(i=1; i<=qtd; i++){
        printf("Insira o nome do jogador %d\n", i);
        fflush(stdin);
        gets(jogador[i].nome);
    }

    for(i=1; i<=qtd; i++){
        system("cls");
        printf("\n--------------------------------------------------------------\n");
        printf("\nVez do(a) %s\n",jogador[i].nome);
        printf("\n--------------------------------------------------------------\n\n");
        printf("%s adivinhe um numero entre 0 e 100\n", jogador[i].nome);
        scanf("%d", &num);
        cont=0;
        while(alea != num){
            fflush(stdin);
            if(num < alea){
                fflush(stdin);
                printf("Dica: Eh maior do que %d\n", num);
            }else{
                printf("Dica: Eh menor do que %d\n", num);
            }
            if(cont > 3){
                if(alea % 2 == 0){
                    printf("Dica 2: Eh par\n");
                }else{
                    printf("Dica 2: Eh impa\n");
                }
            }

            if((cont > 8) && (alea > 5)){
                printf("Dica 3: Esta entre %d e %d\n", alea - 6, alea + 6);
            }

            printf("Tente novamente\n");
            fflush(stdin);
            scanf("%d", &num);
            cont++;
            fflush(stdin);

        }

        jogador[i].pontos = cont;
        if(num == alea){
            printf("Voce acertou em %d tentativas", cont);
        }

        alea = rand()% 100;
        system("cls");
        printf("RESPOSTA: %d\n", alea);
    }

    //ranking
    system("cls");
    printf("\n--------------------------------------------------------------\n");
    printf("\nRanking\n");
    printf("\n--------------------------------------------------------------\n\n");
    for(i=1; i<=qtd; i++){
        printf("%s: %d tentativas\n", jogador[i].nome, jogador[i].pontos);
    }
    printf("\n--------------------------------------------------------------\n");
    system("pause");
}
