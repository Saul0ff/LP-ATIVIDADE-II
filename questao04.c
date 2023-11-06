#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
	
	int idade;

	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	if(idade >= 18){
		printf("Acesso permitido");
	} else{
		printf("Acesso negado");
	}

return 0;
}
