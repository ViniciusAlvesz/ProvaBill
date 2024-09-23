#include <stdio.h>

int main() {
    int n2;
    int n1;
    printf("Escolha um número: ");
    scanf("%d", &n1);
    printf("Escolha outro número: ");
    scanf("%d", &n2);

    if (n1 == n2) {
        printf("os numeros so iguais");
    }
    else if (n1 > n2) {
        printf("o numero %d e maior que o numero %d", n1, n2);
    } else { (n2 > n1); }
    {
        printf("o numero %d e maior que o numero %d", n2, n1);
    }
    return 0;
}