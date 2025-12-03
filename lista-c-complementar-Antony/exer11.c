#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero %2== 0){
        printf("O numero %d e par", numero);
    }else{
        printf("o numero %d e impar", numero);
    }

     system("pause");
    return 0;
}