#include <stdio.h>
#include <string.h>
int main(){
    char nome[100];
    scanf("%[^\n]", nome);
    int tamanho = strlen(nome);
    int soma_asc = 0;
    for(int i = 0; i < tamanho; i++) soma_asc += nome[i];
    int necessario = 50 - soma_asc;
    for(int i = 97, j = 0; j < 26; i++, j++){
        if((necessario + i) % 50 == 0){
            nome[tamanho] = i;
            nome[tamanho+1] = '\0';
            printf("%s\n", nome);
            return 0;
        }
    }
    printf("sem sorte\n");
}