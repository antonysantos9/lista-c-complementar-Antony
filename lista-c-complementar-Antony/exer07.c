#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    
    int num, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("\nTabuada de mais do %d:\n", num);

    for (i = 0; i <= 10; i++) {
        printf("%d - %d = %d\n", num, i, num - i);
    }

     system("pause");
    return 0;
}