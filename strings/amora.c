#include <stdio.h>
#include <string.h>
int main(){
    char frase[101];
    char substring[20];
    char *pt;
    int count = 0;
    scanf("%[^\n]s", frase);
    //fflush(stdin);
    scanf(" %[^\n]s", substring);
    pt = strtok(frase, " ");
    while(pt){
        if(strstr(pt, substring) != NULL) count++;
        pt = strtok(NULL, " ");
    }
    printf("%d\n", count);
}