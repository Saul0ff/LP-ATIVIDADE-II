#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
setlocale(LC_ALL,"portuguese");

int numero, i, resultado = 0;

printf("Digite um número: ");
scanf("%d",&numero);
	
 for (i = 1; i <= numero; i++) {
    if (numero % i == 0) {
       resultado++;
    }
 }

if(resultado == 2){
	printf("%d é primo\n",numero);
}else{
	printf("%d não é primo\n",numero);
}


}
