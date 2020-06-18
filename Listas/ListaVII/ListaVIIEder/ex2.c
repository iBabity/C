#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int main(){
    FILE *p;
    char str[MAX];
    long fim[50];

    p = fopen("miku.txt", "w");

    if( p == NULL ){
        printf("404 ERROR");
        exit(1);
    }

    do{
        get(str);
        fim = strlen(str);
        if(str[fim] == '\n'){
            fputs(str, p);
            }
        }while(strcmp(str, "FIM") !=  0);
    fclose(p);
}
