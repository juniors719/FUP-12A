#include <stdio.h>
#include <string.h>

int eh_vogal(char caractere){
    char vogais[] = "aeiouAEIOU";
    if(strchr(vogais, caractere)) return 1;
    else return 0;
}

int main(){
    char nome[100];
    scanf("%[^\n]", nome);
    for(int i = 0; i < strlen(nome); i++){
        if(nome[i] == ' ') continue;
        if(eh_vogal(nome[i])) nome[i] = 'v';
        else nome[i] = 'c';
    }
    printf("%s\n", nome);
}