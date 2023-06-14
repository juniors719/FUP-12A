#include <stdio.h>
#include <math.h>

double eleva(double b, int e){
    double res = 1;
    for(int i = 0; i < e; i++) res *= b;
    return res;
}

int main(){
    double x, res;
    int n;
    scanf("%lf %d", &x, &n);
    printf("O numero %.1f elevado a %d e igual a: %.1f\n", x, n, eleva(x, n));
}