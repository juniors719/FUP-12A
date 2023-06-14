#include <stdio.h>
#include <string.h>
int main(){
    char nome[100];
    scanf("%[^\n]", nome);
    int soma_asc = 0;
    for(int i = 0; i < strlen(nome); i++) soma_asc += nome[i];
    printf("%d\n", soma_asc%50);
}