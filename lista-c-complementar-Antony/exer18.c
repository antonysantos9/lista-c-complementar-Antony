#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    float real, cotacao;

    printf("Quantos reais voce quer converter?: ");
    scanf("%f", &real);

    cotacao = real / 5.31;

    printf("seu dinheiro em dolares sao iguais a %.1f", cotacao);

     system("pause");
    return 0;
}