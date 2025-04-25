#include <stdio.h>

int main () {

int c;

printf("Digite a temperatura em Celsius: ");
scanf("%d", &c);

float F = (c*9/5) + 32;

printf("Temperatura em Fahrenheit: %.2f", F);

return 0;
}
