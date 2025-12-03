#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    float idade1, idade2, idade3 , media;

    printf("Digite o primeiro numero: ");
    scanf("%f", &idade1);
     printf("Digite o segundo numero: ");
    scanf("%f", &idade2);
 printf("Digite o terceiro numero: ");
    scanf("%f", &idade3);

    media = (idade1 + idade2 + idade3)/3;

    printf("a media das idades e igual a %.2f", media);



     system("pause");
    return 0;
}
