#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("digite um numero maior que zero\n");
        return 0;
    }
     for (int i = 1; i <= numero; i++) {
        printf("%d\n", i);
    }

     system("pause");
    return 0;
}