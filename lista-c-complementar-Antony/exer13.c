#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){


    int numero1, numero2, numero3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &numero3);

    if (numero1 >= numero2 && numero1 >= numero3) {
        printf("O maior numero e o %d", numero1);
    } 
    else if (numero2 >= numero1 && numero2 >= numero3) {
        printf("O maior numero e o %d", numero2);
    } 
    else {
        printf("O maior numero e o %d", numero3);
    }

     system("pause");
    return 0;
}