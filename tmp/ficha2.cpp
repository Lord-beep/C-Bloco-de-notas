#include <stdio.h>
#include <stdlib.h>
 int main(){
 		FILE *fp;
 	char string [100];
 	int i;
 	fp = fopen("tmp/texto.txt", "w");
 	
 	if (!fp){
 		printf ("Erro na abertura do arquivo");
 		exit(0);
	 }
	 printf("Insira a string a gravar no ficheiro: ");
	 gets(string);
	 for(i=0; string[i]; i++)
	 	fputc(string[i], fp);
	 	
	 	fclose(fp);
	 	return (0);
 }
