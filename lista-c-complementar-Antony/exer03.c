#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    float km, ms;

    printf("digite os km para fazermos a conversao: ");
    scanf("%f", &km);

    ms = km / 3,6;

    printf("a conversao foi igual a %.2f", ms);


    system("pause");
    return 0;
}