#include <stdio.h>
#include <string.h>
int main(){
    char frase[300], caractere;
    int contagem = 0;
    scanf("%[^\n]", frase);
    scanf(" %c", &caractere);
    for(int i = 0; i < strlen(frase); i++){
        if(frase[i] == caractere) contagem++;
    }
    printf("%d\n", contagem);
}