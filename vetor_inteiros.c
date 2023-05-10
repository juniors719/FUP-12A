#include <stdio.h>

int main(){
    int q; scanf("%d", &q);
    int vetor[q];
    int vF = 0, p = 1;
    for(int i = 0; i < q; i++) scanf("%d", &vetor[i]);
    for(int i = q-1; i >= 0; i--){
        vF += vetor[i] * p;
        p *= 10;
    }
    printf("%d\n", vF);
    return 0;
}