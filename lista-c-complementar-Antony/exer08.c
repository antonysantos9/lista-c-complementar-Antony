#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int dobro(int num);

int main(){

    float numero, resp;
    

    printf("digite um numero: ");
    scanf(" %f", &numero);

    resp = dobro(numero);
    printf("O dobro do numero e %.1f:", resp);
    system("pause");
    return 0;
}

int dobro(int num){
    float res;
    res = num * 2;
    return res;

}