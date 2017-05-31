#include <stdio.h>
#include <math.h>

main(){
int i,x, n;
printf("Teorema de Fermat\n");
printf("Digite um numero (1 a 5)\n");
scanf("%d", &n);
n = pow(2,n);
n = pow(2,n)+1;

for(i=2; i<n; i++){
    if(n % i > 0){
        printf("%d %% %d = %d\n", n,i, n%i);
        x += 1;
    }
}

if((x + 2 == n) && (n != 2)){
   printf("-----------------------------------------------\n%d nao eh primo", n);
}else{
   printf("-----------------------------------------------\n%d eh primo", n);
}
printf("\n-----------------------------------------------\n");
system("pause");
}
