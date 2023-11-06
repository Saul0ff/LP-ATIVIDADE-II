#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
setlocale(LC_ALL,"portuguese");

int contador, somaImpar = 0, numPar = 0, numImpar = 0, somaPar = 0, num = 0;
float mediaPar, mediaImpar;

do{
		printf("Digite o %dª número: ",contador + 1);
		scanf("%d", &num);
		
	if(num > 0){
	contador ++;
	
		
		if(num > 0 && num % 2 == 0){
			numPar++;
			somaPar += num;
		}else if(num %2 == 1){
			numImpar++;	
            somaImpar += num;
		}
	
	}
	
	}while(num > 0);
	
	mediaPar = somaPar / (float) numPar;
	
	mediaImpar = somaImpar / (float) numImpar;
	
	printf("Quantidade de números Pares: %d\n", numPar);
	printf("Quantidade de números Impares: %d\n", numImpar);
	printf("Média dos números Pares: %.2f\n", mediaPar);
	printf("Média dos números Impar: %.2f\n", mediaImpar);
	
}