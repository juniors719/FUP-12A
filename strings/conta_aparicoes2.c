#include <stdio.h>
#include <string.h>
int main(){
    char frase[100], caractere;
    scanf("%[^\n]", frase);
    scanf(" %c", &caractere);
    int contagem = 0;
    for(int i = 0; i < strlen(frase); i++){
        if(frase[i] == caractere || frase[i] == caractere-32 || frase[i] == caractere+32) contagem++;
    }
    printf("%d\n", contagem);
}