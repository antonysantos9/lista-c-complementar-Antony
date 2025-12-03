#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int horas, minutos;

    printf("digite as horas que voce quer converter: ");
    scanf("%d", &horas);

    minutos = horas * 60;

    printf("o resultado da conversao e igual a %d", minutos);


     system("pause");
    return 0;
}