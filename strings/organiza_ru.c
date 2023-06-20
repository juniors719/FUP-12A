#include <stdio.h>
#include <string.h>

int eh_vogal(char caractere){
    char vogais[] = "aeiou";
    if(strchr(vogais, caractere)) return 1;
    else return 0;
}

int main(){
    char frase[100];
    char vogais[100];
    char consoantes[100];
    int qVogais = 0, qConsoantes = 0;
    scanf("%[^\n]", frase);
    for(int i = 0; i < strlen(frase); i++){
        if(frase[i] == ' ') continue;
        if(eh_vogal(frase[i])) vogais[qVogais++] = frase[i];
        else consoantes[qConsoantes++] = frase[i];
    }
    vogais[qVogais] = '\0';
    consoantes[qConsoantes] = '\0';
    printf("%s\n%s", vogais, consoantes);
}