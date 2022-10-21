#include <stdio.h> // inclui a biblioteca padrão de entrada e saída
#include <stdlib.h> // para usar o system("pause")

int main(){

    printf("Hello, World!\n");

    printf("Valor inteiro: %d. \n", 10); // %d é o formato para inteiro
    printf("Valor real: %f. \n", 3.14159265); // %f é o formato para flutuante
    printf("Valor real com 2 casas decimais: %.2f. \n", 10.5); // %.2f é o formato para real com 2 casas decimais
    printf("Dado de texto: %c.\n", 'a'); // %c é o formato para caractere
    printf("Dado de texto: %s. \n", "testando"); // %s é o formato para string
}