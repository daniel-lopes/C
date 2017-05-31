#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    float peso, cintura, massa_magra, gordura, calc;
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite a circunferência da cintura: ");
    scanf("%f", &cintura);

    peso = peso *  2.20462262; // KG em Libras
    calc = peso * 1.082 + 94.42; // passo 2
    cintura = cintura * 0.393700787; // cintura em polegadas
    massa_magra = calc - cintura * 4.15;
    gordura = (peso - massa_magra) * 100 / peso - 2.75; // 2,75 corresponde a uma gambiarra
    printf("Voce tem %.2f %c de gordura corporal\n", gordura,37);
    system("pause");

}
