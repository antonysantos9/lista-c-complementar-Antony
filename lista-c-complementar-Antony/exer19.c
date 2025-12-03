#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int idade;
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 12)
        printf("crianca\n");
    else if (idade <= 17)
        printf("adolescente\n");
    else if (idade <= 59)
        printf("adulto\n");
    else
        printf("idoso\n");

    return 0;
}
