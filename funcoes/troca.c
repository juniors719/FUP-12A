#include <stdio.h>

// usando ponteiros

void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    troca(&a, &b);
    printf("%d %d\n", a, b);
}