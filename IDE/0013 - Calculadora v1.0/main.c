#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, soma, subtracao, multi, div;

    printf("Calculadora v1.0\n");
    printf("Entre com dois numeros a serem processados: ");
    scanf("%i%i", &num1, &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multi = num1 * num2;
    div = num1 / num2;

    printf( "A soma e: %i\n", soma );
    printf( "A subtracao e: %i\n", subtracao );
    printf( "O produto e: %i\n", multi );
    printf( "A divisao e: %i\n", div );

    return 0;
}
