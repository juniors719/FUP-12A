#include <stdio.h>
#include <string.h>
int eh_numero(char caractere){
    if(caractere >= 48 && caractere <= 57) return 1;
    else return 0;
}
int main(){
    char frase[101];
    int soma = 0;
    scanf("%[^\n]", frase);
    for(int i = 0; i < strlen(frase); i++){
        if(eh_numero(frase[i])){
            int n = frase[i] - 48;
            soma += n;
        }
    }
    printf("%d\n", soma);
}