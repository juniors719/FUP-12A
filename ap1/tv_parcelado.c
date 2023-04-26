#include <stdio.h>
int main(){
    double preco, qParc, juros, parc;
    scanf("%lf%lf", &preco, &qParc);
    juros = ((qParc - 1) * 5)/100;
    parc = preco / qParc;
    parc *= (1 + juros);
    printf("%.2lf\n%.2lf\n", parc, (parc*qParc));
}