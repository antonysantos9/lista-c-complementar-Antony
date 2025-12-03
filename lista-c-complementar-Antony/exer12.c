#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    int raio, circunferencia;

    printf("Digite o raio da circunferencia: ");
    scanf("%d", &raio);

    circunferencia = 2 * 3.14 * raio;

    printf(" a circunferencia do circulo e igual a %d", circunferencia);

     system("pause");
    return 0;
}