#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade = 0;
    float altura = 0;
    char nome[50] = "";

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    printf("Digite a altura:\n");
    scanf("%f", &altura);

    printf("Digite o nome:\n");
    scanf("%s", nome);

    printf("Dados informados:\n");
    printf("Idade: %d.\n", idade);
    printf("Altura: %.2f.\n", altura);
    printf("Nome: %s.\n", nome);
}