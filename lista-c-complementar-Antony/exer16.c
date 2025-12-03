#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int quadrado(int num);

int main(){

    float numero, resp;
    

    printf("digite um numero: ");
    scanf(" %f", &numero);

    resp = quadrado(numero);
    printf("O quadrado do numero e %.1f:", resp);
    system("pause");
    return 0;
}

int quadrado(int num){
    float res;
    res = num * num;
    return res;

}