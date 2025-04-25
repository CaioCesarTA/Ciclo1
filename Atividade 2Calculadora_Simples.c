#include <stdio.h>

int main (){
int a, b;

printf("Digite o primeiro numero: ");
scanf("%d",&a);

printf("Digite o segundo numero: ");
scanf("%d",&b);

int soma = a + b;
int sub = a - b;
int mult = a * b;
float div = a/b;

printf("Soma: %d", soma);
printf("\nSubtracao: %d", sub);
printf("\nMultiplicacao: %d", mult);
printf("\nDivisao: %.2f", div);

return 0;
}
