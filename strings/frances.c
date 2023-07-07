#include <stdio.h>
#include <string.h>

int eh_vogal(char letra){
    char vogais[] = "aeiouAEIOU";
    if(strchr(vogais, letra) == NULL) return 0;
    return 1;
}

int main(){
    char frase[101];
    int flag = 0;
    scanf("%[^\n]s", frase);
    for(int i = 0; i < strlen(frase); i++){
        if((frase[i] != ' ' && frase[i+1] == ' ') && eh_vogal(frase[i]) && eh_vogal(frase[i+2]) && frase[i] == frase[i+2]){
            int a = i+1;
            while(frase[a] == ' ' || frase[a] == frase[i]){
                a++;
                continue;
            }
            i = a - 1;
        }
        printf("%c", frase[i]);
    }
    printf("\n");
}