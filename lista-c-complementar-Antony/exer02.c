#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    float base, altura, area;

    printf("digite a base do triangulo: ");
    scanf("%f", &base);
     printf("digite a altura do triangulo: ");
    scanf("%f", &altura);

    area = (base * altura)/2;

    printf("a area do seu quadrado e igual a %.2f", area);

     system("pause");
    return 0;
}