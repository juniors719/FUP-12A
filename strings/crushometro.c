#include <stdio.h>
#include <string.h>
int conta_vogais(char nome[]){
    int contagem = 0;
    char vogais[] = "aeiouAEIOU";
    for(int i = 0; i < strlen(nome); i++){
        if(strchr(vogais, nome[i]) != NULL) contagem++;
    }
    return contagem;
}

int eh_vogal(char caractere){
    char vogais[] = "aeiouAEIOU";
    if(strchr(vogais, caractere) != NULL) return 1;
    else return 0;
}



int main(){
    int porcentagem = 0;
    char nome1[100], nome2[100];
    scanf("%s", nome1);
    scanf("%s", nome2);
    if(conta_vogais(nome1) == conta_vogais(nome2)) porcentagem += 30;
    if(nome1[0] == nome2[0]) porcentagem += 20;
    if(strlen(nome1) == strlen(nome2)) porcentagem += 30;
    if((eh_vogal(nome1[strlen(nome1)-1]) && eh_vogal(nome2[strlen(nome2)-1])) || (!eh_vogal(nome1[strlen(nome1)-1]) && !eh_vogal(nome2[strlen(nome2)-1]))) porcentagem += 20;
    else porcentagem -= 10;
    if(porcentagem < 0) porcentagem = 0;
    printf("As chances do crush te dar bola sao: %d%%!", porcentagem);
}