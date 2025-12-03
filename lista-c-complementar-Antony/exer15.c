#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    int numero, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero < 1) {
        printf("Digite um numero maior ou igual a 1.\n");
        return 0;
    }
    for (int i = 1; i <= numero; i++) {
        soma += i;
    }
    printf("A soma de 1 até %d igual a %d\n", numero, soma);

     system("pause");
    return 0;
}