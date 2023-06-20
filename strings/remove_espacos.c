#include <stdio.h>
#include <string.h>
int main(){
    char frase[150];
    scanf("%[^\n]", frase);
    for(int i = 0; i < strlen(frase); i++){
        if(frase[i] == ' ' && frase[i+1] == ' ') continue;
        else printf("%c", frase[i]);
    }
    printf("\n");
}