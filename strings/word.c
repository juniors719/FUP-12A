#include <stdio.h>
#include <string.h>
int main(){
    char frase[101];
    scanf("%[^\n]s", frase);
    char opcao;
    scanf(" %c", &opcao);
    switch (opcao){
    case 'm':
        for(int i = 0; i < strlen(frase); i++){
            int caractere = frase[i];
            if(caractere >= 'A' && caractere <= 'Z') caractere += 32;
            frase[i] = (char)caractere;
        }
        break;
    case 'M':
        for(int i = 0; i < strlen(frase); i++){
            int caractere = frase[i];
            if(caractere >= 'a' && caractere <= 'z') caractere -= 32;
            frase[i] = (char)caractere;
        }
        break;
    case 'p':
        for(int i = 0; i < strlen(frase); i++){
            if(frase[i] != ' ' && frase[i+1] == ' ' && (frase[i-1] == ' ' || i == 0)){
                if(frase[i] >= 65 && frase[i] <= 90){
                    frase[i] += 32;
                }
                continue;
            }
            else if(frase[i - 1] == ' ' && frase[i] != ' '){
                if(frase[i] >= 97 && frase[i] <= 122){
                    frase[i] -= 32;
                }
            }
        }
        break;
    case 'i':
        for(int i = 0; i < strlen(frase); i++){
            int caractere = frase[i];
            if(caractere >= 'a' && caractere <= 'z') caractere -= 32;
            else if(caractere >= 'A' && caractere <= 'Z') caractere += 32;
            frase[i] = (char)caractere;
        }
        break;
    default:
        break;
    }

    printf("%s\n", frase);
}