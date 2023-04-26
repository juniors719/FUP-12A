/*Motivação
Os formatos de data e hora são diversos. Leia hora, minuto, dia, mês e ano e imprima no formato hh:mm dd/mm/aa. 
Você deve certificar-se de imprimir um 0 à esquerda para garantir que todas as informações tenham 2 dígitos.

Entrada:
hora, minuto, dia, mês e ano, um por linha.
Saída:
hh:mm dd/mm/aa.*/
#include <stdio.h>
int main(){
    int h,m,d,mt,a;
    scanf("%d%d%d%d%d",&h,&m,&d,&mt,&a);
    h=h%12;
    a=a%100;
    printf("%02d:%02d %02d/%02d/%02d\n",h,m,d,mt,a);
}