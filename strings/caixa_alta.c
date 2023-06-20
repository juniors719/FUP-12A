#include <stdio.h>
#include <string.h>
int main(){
    char frase[200];
    scanf("%[^\n]", frase);
    for(int i = 0; i < strlen(frase); i++){
        if(frase[i] >= 65 && frase[i] <= 90) frase[i] += 32;
        else if(frase[i] >= 97 && frase[i] <= 122) frase[i] -= 32;
        printf("%c", frase[i]);
        if(i == strlen(frase)-1) printf("\n");
    }
}