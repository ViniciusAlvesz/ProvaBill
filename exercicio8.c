#include <stdio.h>

int main(){
    int a, resultado;
    printf("Insira um Numero: \n");
    scanf("%d", &a);

    int ePar;
    resultado = a % 2;


    if(resultado == 0){
        printf("Seu numero é Par. \n");
    }else{
        printf("Seu numero é Ímpar.");
    }
    return 0;
}