#include <stdio.h>
#include <string.h>
int main(){
    char frase[100];
    
    int inicial, tamanho;
    scanf("%[^\n]", frase);
    scanf("%d %d", &inicial, &tamanho);
    char substring[tamanho+1];
    int aux = 0;
    for(int i = 0; i < tamanho; i++){
        substring[aux++] = frase[inicial++];
        if(aux == strlen(frase)) break;
    }
    substring[aux] = '\0';
    printf("%s\n", substring);
}