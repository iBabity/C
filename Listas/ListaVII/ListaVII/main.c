#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX 1000

void ex1();
void ex2();
void ex3();
void ex4();
void teste();

int main(){
    ex4();
    // teste();
}

void ex4(){

    FILE *p;
    char str[MAX];
    char fim[MAX];

    p = fopen("notepad.txt", "w");

    if( p == NULL ){
        printf("404 ERROR");
        exit(1);
    }

    do{
        get(str);
        fim = strlen(str);
        if(str[fim] == '\n'){

        }

        fputs(str, p);

    }while(strcmp(str, "FIM") !=  0);

    fclose(p);

}

void ex3(){

    char str[1000];
    char c;
    FILE *p;
    int i = 0;

    p = fopen("file.txt", "r" );

    if( p == NULL ){
        printf("ERRO ao abrir o arquivo!\n");
        exit(1);
    }


    do{
        printf("linha %d : %s", i, fgets(str, 1000, p));
        i++;
    }while( !feof(p));

    fclose(p);
}

void ex1(){
	FILE *p;
	char str[MAX];

	if( (p = fopen("dados.txt", "w" ) ) == NULL ){
		printf("ERRO ao abrir o arquivo!");
		exit(1);
	}

	for(int i = 1; i <= 100; i++ ){
		sprintf(str, "%d\n", i);
		fputs(str, p);
	}

	fclose(p);
}

void ex2(){
    FILE *p;

    int i;
    char c;
    char option[1];

    if( (p = fopen("dados.txt", "r" ) ) == NULL ){
        printf("ERRO ao abrir o arquivo!\n");
        exit(1);
    }

    while( !feof(p)){
        c = getc(p);
        printf("%c", c);
    }

    getch();
    fclose(p);
}

void teste(){

}


























