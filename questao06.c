#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
setlocale(LC_ALL,"portuguese");

int produto, preco;
char nome[80];

printf("1 - Camiseta\n2 - Calça\n3 - Sapato\n\n");
printf("Selecione o produto desejado: ");
scanf("%d",&produto);

if(produto == 1){
	preco = 25;
	strcpy(nome, "Camiseta");
}else if(produto == 2){
	preco = 80;
	strcpy(nome, "Calça");
}else if(produto == 3){
	preco = 65;
	strcpy(nome, "Sapato");
}

printf("Nome: %s\n",nome);
printf("Preço: R$%d\n",preco);
}
