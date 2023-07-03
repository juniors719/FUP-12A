#include <stdio.h>
#include <string.h>

int cont_caract(char frase[], int len, char caractere){
    if(len>0){
        if(frase[len-1] == caractere) return 1 + cont_caract(frase, len-1, caractere);
        else cont_caract(frase, len-1, caractere);
    }else{
        return 0;
    }
}

int main(){
    char frase[102];
    scanf("%[^\n]s", frase);
    int n = strlen(frase);
    char caractere; scanf(" %c", &caractere);
    printf("%d\n", cont_caract(frase, n, caractere));
}