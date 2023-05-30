#include <stdio.h>
#include <string.h>

int eh_vogal(char caractere){
    char vogais[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for(int j = 0; j < 10; j++){
        if(caractere == vogais[j]) return 1;
    }
    return 0;
}

int main(){
    char frase[300];
    scanf(" %[^\n]", frase);
    int q = strlen(frase);
    for(int i = 0; i < q; i++){
        printf("%c", frase[i]);
        if(eh_vogal(frase[i]) && !eh_vogal(frase[i+1]) && i < q-1 && frase[i+1] != ' '){
            printf("-");
        }
    }printf("\n");
    return 0;
}