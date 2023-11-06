#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main()
{
setlocale(LC_ALL,"portuguese");

int opcao;
float valor, convercao;

 do {
        printf("1 - Quilômetros para Milhas\n");
        printf("2 - Celsius para Fahrenheit\n");
        printf("0 - Sair do programa\n");
        printf("Escolha a opção desejada: ");
        scanf("%d", &opcao);


        switch (opcao) {
            case 1:
                printf("Digite os quilômetros: ");
                scanf("%f", &valor);
                
                convercao = valor * 0.621371;
                
                printf("%.2f quilômetros são %.2f milhas.\n", valor, convercao);
                break;
            case 2:
                printf("Digite os graus Celsius: ");
                scanf("%f", &valor);
                
                convercao = (valor * 9/5) + 32;
                
                printf("%.2f graus Celsius são %.2f graus Fahrenheit.\n", valor, convercao);
                break;
            default:
                printf("Opção inválida\n Tente novamente...\n");
                sleep(3);
                break;
        } 
    }while(opcao != 0);
}