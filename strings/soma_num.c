#include <stdio.h>
#include <string.h>
int eh_numero(char caractere){
    if(caractere >= 48 && caractere <= 57) return 1;
    else return 0;
}
int main(){
    char frase[200];
    int soma = 0;
    
    scanf("%[^\n]s", frase);
    for(int i = 0; i < strlen(frase); i++){
        int n = 0;
        if(eh_numero(frase[i])){
            n = (int)frase[i] - 48;
            int a = i + 1;
            while(eh_numero(frase[a])){
                n *= 10;
                n += (int)frase[a] - 48;
                a++;
            }
            i = a;
            soma += n;
        }
    }
    printf("%d\n", soma);
}