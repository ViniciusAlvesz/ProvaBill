#include <stdio.h>

struct Pessoa {
    char nome [50];
    int idade;
    float altura;
};

int main() {
    struct Pessoa p;
    printf("Digite o nome: ");
    scanf("%s", p.nome);

    printf("Digite a idade: ");
    scanf("%d", &p.idade);

    printf("Digite a altura: ");
    scanf("%f", &p.altura);

    printf("\nSeus dados sao:\n");
    printf("nome: %s\n", p.nome);
    printf("idade: %d\n", p.idade);
    printf("sltura: %.2f metros\n", p.altura);

    return 0;
}