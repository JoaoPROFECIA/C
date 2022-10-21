#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade = 0;
    float peso = 0;

    printf("Digite sua idade:\n");
    scanf("%d", &idade); // %d é o formato para inteiro

    printf("Digite seu peso:\n");
    scanf("%f", &peso); // %f é o formato para flutuante

    printf("Sua idade e %d e seu peso e %.2f.\n", idade, peso);	

}

int main1(){
    int a;
    float b;
    char c;
    char d[20];

    printf("Digite um valor inteiro: ");
    scanf("%d", &a);
    printf("Digite um valor real: ");
    scanf("%f", &b);
    printf("Digite um caractere: ");
    scanf("%c", &c);
    printf("Digite uma string: ");
    scanf("%s", &d);

    printf("Valor inteiro: %d. \n", a);
    printf("Valor real: %f. \n", b);
    printf("Valor real com 2 casas decimais: %.2f. \n", b);
    printf("Dado de texto: %c.\n", c);
    printf("Dado de texto: %s. \n", d);
}