#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
     setlocale(LC_ALL, "portugues");
    char cidade[50], nome[50];

    printf("Digite seu nome: ");
    fgets(nome, 50,stdin);
    printf("Digite o nome da sua cidade: ");
    fgets(cidade, 50,stdin);
    
    printf("seu nome e %s e a sua cidade e %s", nome, cidade);


     system("pause");
    return 0;
}