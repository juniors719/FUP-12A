#include <stdio.h>
#include <string.h>
int main(){
    char numero[21];
    scanf("%[^\n]", numero);
    int somaPares = 0, somaImpares = 0;
    for(int i = 0; i < strlen(numero); i++){
        int n = numero[i] - 48;
        if(i%2==0) somaPares += n;
        else somaImpares += n;
    }
    if((somaPares - somaImpares)%11==0) printf("sim\n");
    else printf("nao\n");
}