#include  <stdio.h>
#include <stdlib.h>

int main(){
	char str[]= "tmp/texto.txt";
	FILE *fich;
	fich = fopen (str, "w");
	if (!fich)
		printf("Erro na abertura do ficheiro");
	else 
		printf("FIcheiro aberto com sucesso");
		fclose(fich);
	return 0;
}
