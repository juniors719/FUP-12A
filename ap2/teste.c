// crie um programa para calcular o mdc de dois numeros inteiros de forma recursiva

#include <stdio.h>

int mdc(int a, int b){
    if(b == 0) return a;
    return mdc(b, a%b);
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", mdc(a, b));
}