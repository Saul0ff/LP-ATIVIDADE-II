#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"portuguese");

int numero, numeroDois, maior, menor;

printf("Digite um número: ");
scanf("%d",&numero);

printf("Digite outro número: ");
scanf("%d",&numeroDois);

maior = numero > numeroDois ? numero : numeroDois;
menor = numero < numeroDois ? numero : numeroDois;

printf("Maior número: %d\n", maior);
printf("Menor número: %d\n", menor);

getchar();
return 0;
}