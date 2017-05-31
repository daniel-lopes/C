#include <stdio.h>
#include <string.h>

struct data{
	int dia,mes,ano;
};
struct aluno{
	char nome[50];
	struct data nascimento;
};
void imprime (struct aluno p [3]);
int main(){
	int i;
	struct aluno al[3];
	for(i=0;i<3;i++)
	{printf("digite nome\n");
	gets(al[i].nome);
	fflush(stdin);
	printf("digite dia\n");
	scanf("%d",&al[i].nascimento.dia);
	fflush(stdin);
	printf("digite mes\n");
	scanf("%d",&al[i].nascimento.mes);
	fflush(stdin);
	printf("digite ano\n");
	scanf("%d",&al[i].nascimento.ano);
	fflush(stdin);}
	printf("\n\n----dados----\n\n");
	imprime (al);
	busca (al);
		return (0);}
void imprime (struct aluno s[3]){
int i;
for(i=0;i<3;i++){
printf("%s",s[i].nome);
printf("\n data de nascimento %d/%d/%d\n\n"
, s[i].nascimento.dia,s[i].nascimento.mes,s[i].nascimento.ano);}}

 void busca (struct aluno s[3]){
 	char op[30];
	printf("digite nome para busca\n");
	gets(op);
	int i;
	for(i=0;i<3;i++){
	if(strcmp(op,s[i].nome)==0){
		printf("%s",s[i].nome);
		printf("\ndata de nascimento:%d/%d/%d\n\n",s[i].nascimento.dia,s[i].nascimento.mes,s[i].nascimento.ano);

    }}}
