#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *p;
    int i;
	char str[1000];

	if( (p = fopen("dados.txt", "w" ) ) == NULL ){
		printf("ERRO ao abrir o arquivo!");
		exit(1);
	}

	for( i = 1; i <= 100; i++ ){
		sprintf(str, "%d\n", i);
		fputs(str, p);
	}

	fclose(p);
}
