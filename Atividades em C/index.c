#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int questao;
    printf("________________________________________________________________________________\n");
    printf("Escolha uma questão de 1 a 11 ou digite 0 para sair:\n");
    printf("________________________________________________________________________________\n");
    printf("\n\n» ");
    scanf("%d", &questao);

        while(questao < 0 || questao > 11){
            system("color e");
            printf("ERRO!\nEscolha SOMENTE NÚMEROS de 1 a 11 ou digite 0 para sair: ");
            scanf("%d", &questao);


        }system("color 7");

    switch (questao){
    case 0:
    system("exit");
    break;

    case 1:
    questao1();
    break;

    case 2:
    questao2();
    break;

    case 3:
    questao3();
    break;

    case 4:
    questao4();
    break;

    case 5:
    questao5();
    break;

    case 6:
    questao6();
    break;

    case 7:
    questao7();
    break;

    case 8:
    questao8();
    break;

    case 9:
    questao9();
    break;

    case 10:
    questao10();
    break;

    case 11:
    questao11();
    break;

    }
}

inicio(int id){
    system("cls");
    fflush(stdin);
    printf("________________________________________________________________________________\n");
    printf("%d°) QUESTÃO\n",id);
    printf("________________________________________________________________________________\n");
}

fim(){
    system("pause");
    system("cls");
    main();
}

questao1(){
    inicio(1);
    int semanas;
    printf("Insira a quantidade de semanas que faltão para suas ferias:\n");
    scanf("%d", &semanas);
    printf("---------------------------------------------------------\n");
    printf("            Faltão %d dias para suas ferias!\n", semanas * 7);
    printf("---------------------------------------------------------\n");
    fim();
}

questao2(){
    inicio(2);
    int p,g;
    printf("Quantidades de alvos pequenos acertados:\n");
    scanf("%d", &p);
    printf("Quantidade de alvos grandes acertados:\n");
    scanf("%d", &g);
    printf("---------------------------------------------------------\n");
    printf("                 Vc obteve %d pontos!\n", g*2+p);
    printf("---------------------------------------------------------\n");
    fim();
}

questao3(){
    inicio(3);
    float r1, r2, r3, r4;
    printf("Quantidades de calorias consumidas na 1° refeicão:\n");
    scanf("%f", &r1);
    printf("Quantidades de calorias consumidas na 2° refeicão:\n");
    scanf("%f", &r2);
    printf("Quantidades de calorias consumidas na 3° refeicão:\n");
    scanf("%f", &r3);
    printf("Quantidades de calorias consumidas na 4° refeicão:\n");
    scanf("%f", &r4);
    printf("---------------------------------------------------------\n");
    printf("             Vc Consumiu %.2f calorias\n", r1+r2+r3+r4 );
    printf("---------------------------------------------------------\n");
    fim();
}

questao4(){
    inicio(4);
    float calorias, temp=0;
    printf("Quantidades de calorias consumidas na 1° refeicão:\n");
    scanf("%f", &calorias);
    temp += calorias;
    printf("Quantidades de calorias consumidas na 2° refeicão:\n");
    scanf("%f", &calorias);
    temp += calorias;
    printf("Quantidades de calorias consumidas na 3° refeicão:\n");
    scanf("%f", &calorias);
    temp += calorias;
    printf("Quantidades de calorias consumidas na 4° refeicão:\n");
    scanf("%f", &calorias);
    temp += calorias;
    printf("---------------------------------------------------------\n");
    printf("              Vc Consumiu %.2f calorias\n", temp);
    printf("---------------------------------------------------------\n");
    fim();
}

questao5(){
    inicio(5);
    float Vgasolina, Cmedio, distancia, gasto;
    printf("Insira o valor atual da gasolina:\n");
    scanf("%f", &Vgasolina);
    printf("Insira a quantidade de quilometros que seu transporte faz com 1 litro:\n");
    scanf("%f", &Cmedio);
    printf("Insira a distancia a ser percorrida:\n");
    scanf("%f", &distancia);
    gasto = (distancia/Cmedio)*Vgasolina;

    printf("---------------------------------------------------------\n");
    printf("           Vc gastara R$%.2f com gasolina\n", gasto);
    printf("---------------------------------------------------------\n");
    fim();
}

questao6(){
    inicio(6);
    float C,F;
    printf("Insira uma temperatura em graus centigrados:\n");
    scanf("%f", &C);
    F = (9*C+160) / 5;
    printf("---------------------------------------------------------\n");
    printf("          %.1f° Centigrados = %.1f° Fahrenheit\n", C, F);
    printf("---------------------------------------------------------\n");
    fim();
}

questao7(){
    inicio(7);
    int hora, minuto, x;
    printf("Insira somente a hora atual:\n");
    scanf("%d", &hora);
    printf("Insira somente os minutos:\n");
    scanf("%d", &minuto);
    if((hora == 0) || (hora == 00)){
        hora = 24;
    }
    x = hora*60+minuto;
    printf("----------------------------------------------------------\n");
    printf("     Já se passaram %d minutos desde o comeco do dia\n",x);
    printf("----------------------------------------------------------\n");
    fim();
}

questao8(){
    inicio(8);
    int dia, hora, minuto, x;
    printf("Insira somente o dia atual:\n");
    scanf("%d", &dia);
    printf("Insira somente a hora atual:\n");
    scanf("%d", &hora);
    printf("Insira somente os minutos:\n");
    scanf("%d", &minuto);
    if((hora == 0) || (hora == 00)){
        hora = 24;
    }
    x = dia*24*60+hora*60+minuto;
    printf("---------------------------------------------------------\n");
    printf("Passaram-se %d minutos desde o inicio do mes ate agora\n",x);
    printf("---------------------------------------------------------\n");
    fim();
}

questao9(){
    inicio(9);
    int vitoria, derrota, empate;
    float x;
    printf("Quantas vitorias o time teve:\n");
    scanf("%d", &vitoria);
    printf("Quantas empates o time teve:\n");
    scanf("%d", &empate);
    printf("Quantas derrotas o time teve:\n");
    scanf("%d", &derrota);
    printf("total de partidas: %d\n",vitoria+empate+derrota);
    x = (float)(vitoria*3+empate)/(vitoria+empate+derrota);
    printf("--------------------------------------------------------------------------\n");
    printf("O time fez %d pontos e a media de pontos por partidadas foi de %.1f pontos\n",vitoria*3+empate, x);
    printf("--------------------------------------------------------------------------\n");
    fim();
}

questao10(){
    inicio(10);
    int i;
    float deposito, mes[6], mesAnt=0;
    printf("Valor a depositar:\n");
    printf("R$ ");
    scanf("%f", &deposito);
    printf("--------------------------------\n");
    printf("Extrato bancario\n\n");

    for(i=1; i<7; i++){
        mes[i] = mesAnt * 0.08 + mesAnt + deposito;
        mesAnt = mes[i];
        printf("%d° mês: R$ %.2f\n", i, mes[i]);
    }
    printf("--------------------------------\n");
    fim();
}

questao11(){
    inicio(11);
    int i;
    float deposito, mes[6], mesAnt=0, rendimento;
    printf("Valor a depositar:\n");
    printf("R$ ");
    scanf("%f", &deposito);
    printf("Redimento por mês:\n");
    printf("%% ");
    scanf("%f", &rendimento);
    printf("--------------------------------\n");
    printf("Extrato bancario\n\n");

    if(rendimento > 0.9999){
        rendimento = rendimento / 100;
    }

    for(i=1; i<7; i++){
        mes[i] = mesAnt * rendimento + mesAnt + deposito;
        mesAnt = mes[i];
        printf("%d° mês: R$ %.2f\n", i, mes[i]);
    }
    printf("--------------------------------\n");
    fim();
}
