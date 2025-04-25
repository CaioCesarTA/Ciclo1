#include <stdio.h>

int main() {

int i;
float a;

printf("idade: ");
scanf("%d", &i);

printf("altura: ");
scanf("%f", &a);

printf("\nVoce tem %d anos e mede %.2f metros de altura", i, a);

return 0;
}
