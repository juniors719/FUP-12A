#include <stdio.h>
int main(){
    char caractere;
    scanf("%c", &caractere);
    int valorASC = caractere;
    if(valorASC >= 65 && valorASC <= 90) valorASC += 32;
    else if(valorASC >= 97 && valorASC <= 122) valorASC -= 32;
    printf("%c\n", valorASC);
}