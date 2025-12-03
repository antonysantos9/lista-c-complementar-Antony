#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    float nota;
    scanf("%f", &nota);

    if (nota >= 0 && nota <= 10)
        printf("nota valida %.2f\n", nota);
    else
        printf("nota invalida\n");

    return 0;
}
