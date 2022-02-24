#include <stdio.h>

void main() {
    //int valor = 'a';

   // float test = 12;

    //printf("Valor e: %f", test);

    /*
    int valorPonteiro = 10;
    int segundoValor = 20;

    int *ptr_Ponteir = &valorPonteiro;
    int *ptr_SegundoValor = &segundoValor;

    int test;
    scanf("%i", &test);

    printf("%i \n", ptr_Ponteir);
    printf("%i \n", ptr_SegundoValor);
    printf("%p", &test);*/

    int valor = 12;
    int segundoValor = &valor;

    segundoValor = 15;

    printf("%i", valor);
}
