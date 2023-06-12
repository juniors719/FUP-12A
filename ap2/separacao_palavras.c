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
    scanf(" %[^\n]", frase); // leio a frase, e uso esse modo de leitura para ler espaços
    int q = strlen(frase); // pego o tamanho da frase
    for(int i = 0; i < q; i++){ // percorro a frase
        printf("%c", frase[i]);  // imprimo o caractere atual
        if(eh_vogal(frase[i]) && !eh_vogal(frase[i+1]) && i < q-1 && frase[i+1] != ' '){ // se o caractere atual for vogal, e o próximo não for, e não for o último caractere, e não for um espaço
            printf("-"); // imprimo um traço
        }
    }printf("\n");
    return 0;
}