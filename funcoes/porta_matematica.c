#include <stdio.h>
#include <math.h>
int collatz(int x){
    int q = 1;
	while (x != 1){
        if(x % 2 == 0) x /= 2;
        else x = (3*x)+1;
        q++;
    }
    return q;
}

int ehQuadPerf(int n){
    float x = sqrt(n);
    x -= floor(x);
    if(x > 0) return 0;
    else return 1;
}

int main(){
    int n; scanf("%d", &n);
    int indice = -1, quantMaiorcollatz = 0;
    int portas[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &portas[i]);
        if(ehQuadPerf(portas[i])){
            int qcollatz = collatz(portas[i]);
            if(qcollatz > quantMaiorcollatz){
                quantMaiorcollatz = qcollatz;
                indice = i;
            }
        }
    }
    if(indice >= 0) printf("%d\n", portas[indice]);
    else printf("a porta nao existe\n");

}