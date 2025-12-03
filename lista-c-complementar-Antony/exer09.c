#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    

    int nota;

    printf("Digite sua nota: ");
    scanf("%d", &nota);

    if(nota >= 7){
        printf("Voce esta aprovado!");
    }else{
        printf("Voce esta reprovado!");
    }

     system("pause");
    return 0;
}