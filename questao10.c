#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
setlocale(LC_ALL,"portuguese");

int numero, numeroDois, soma, subtracao, resultado;
char operacao;

printf("Digite um número: ");
scanf("%d",&numero);

printf("Digite outro número: ");
scanf("%d",&numeroDois);

fflush(stdin);

printf("+ = soma\n- = subtração\nDigite qual operação deseja realizar: ");
scanf("%c",&operacao);

switch (operacao) {
case '+':
    soma = numero + numeroDois;
    resultado = soma;
    break;

case '-':
    subtracao = numero - numeroDois;
    resultado = subtracao;
    break;

default:
    printf("Operação selecionada inválida !!!");
    break;
}

system("cls || clear");

printf("Resultado: %d %c %d = %d", numero, operacao, numeroDois, resultado);

getchar();
return 0;
}