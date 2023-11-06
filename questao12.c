#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"portuguese");

int i;
float nota, soma = 0, media = 0;

for ( i = 0; i <= 4; i++) {
    printf("Digite a %dª nota: ", i + 1);
    scanf("%f",&nota);

    soma += nota;
}

media = soma / i;

printf("Média: %.1f", media);

getchar();
return 0;
}