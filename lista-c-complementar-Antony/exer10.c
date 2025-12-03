#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    int peso1, peso2;

    printf("Digite o primeiro peso: ");
    scanf("%d", &peso1);
    printf("Digite o segundo peso: ");
    scanf("%d", &peso2);

    if(peso1 > peso2){
        printf("O peso %d e maior!", peso1);
    }else if(peso1 < peso2){
        printf("O peso %d e maior!", peso2);
    }else{
        printf("Os o peso %d e %d sao iguais!", peso1, peso2);
    }




     system("pause");
    return 0;
}