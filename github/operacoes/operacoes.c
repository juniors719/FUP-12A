/*Leia dois números e imprima a soma, a subtração, a multiplicação, a divisão e o resto da divisão entre eles respectivamente.

Entrada:
Valores de A, B em inteiro, um por linha.

Saída:
Valores da soma, subtração, multiplicação, divisão e resto da divisão.
Valor da divisão deve ser em ponto flutuante de duas casas decimais.
O valor de B nunca será 0, então não se preocupe com divisão por 0.*/

#include <stdio.h>
int main(){
    int n1=0,n2=0;
    float d=0;
    scanf("%d%d",&n1,&n2);
    d=(float)n1/n2;
    printf("%d\n%d\n%d\n%.2f\n%d\n",n1+n2,n1-n2,n1*n2,d,n1%n2);
}