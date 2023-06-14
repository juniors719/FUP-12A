#include <stdio.h>
#include <string.h>
int main(){
    char frase[300];
    scanf("%[^\n]", frase);
    int a = 0, b = strlen(frase)-1;
    while(a <= b){
        char aux = frase[a];
        frase[a++] = frase[b];
        frase[b--] = aux;
    }
    printf("%s\n", frase);
}