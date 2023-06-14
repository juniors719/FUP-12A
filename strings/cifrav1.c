#include <stdio.h>
int main(){
    int valorASC, rotacao;
    char caractere;
    scanf("%c", &caractere);
    scanf("%d", &rotacao);
    valorASC = caractere;
    valorASC += rotacao;
    if(valorASC > 122) valorASC -= 26;
    else if(valorASC < 97) valorASC += 26;
    printf("%c\n", valorASC);
}