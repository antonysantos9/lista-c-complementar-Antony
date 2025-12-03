#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    float valor, precoFinal, aumento;

    printf("qual o valor do produto?: ");
    scanf("%f", &valor);

    aumento = valor * 0.15;
    precoFinal = valor + aumento;

printf("Preco final com aumento e R$ %.2f\n", precoFinal);




     system("pause");
    return 0;
}