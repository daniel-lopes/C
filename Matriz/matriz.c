#include <stdio.h>
#include <stdlib.h>

//char palavra[30];
    //printf("Insira uma palavra: ");
    //gets(palavra);
    //int i, cont=0, t = strlen(palavra);
    //for(i=0; i<t; i++){
        //if(palavra[i] == 'a'){
            //palavra[i] = 'b';
            //cont++;
        //}
        //printf("%c", palavra[i]);
    //}
    //printf("\nCom %d alteracoes", cont);


main(){
    int matriz[3][3];
    int i,j,soma=0;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Digite a nota da posicao %d,%d: da matriz: ", i+1,j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf(" %d ", matriz[i][j]);
            //soma += matriz[i][j];

        }
        printf("\n");
    }
    //printf("\n%d", soma);
    int linha=0, coluna=0;
    printf("Digite a linha para ser exibida: ");
    scanf("%d", &linha);
    for(i=0; i<3; i++){
        printf(" %d ", matriz[linha-1][i]);
    }

    printf("\nDigite a coluna para ser exibida: ");
    scanf("%d", &coluna);
    for(i=0; i<3; i++){
        printf(" %d\n", matriz[i][coluna-1]);
    }
}

