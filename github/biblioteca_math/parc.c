#include <stdio.h>
int main(){
    float v=0,m=0,p=0,j=0;;
    scanf("%f%f",&v,&p);
    j=(p>1)?j=5*(p-1):0;
    m=v/p+(v/p*(j/100));
    printf("%.2f\n%.2f\n",m,m*p);
}