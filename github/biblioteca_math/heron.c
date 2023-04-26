#include <stdio.h>
#include <math.h>
int main(){
    float l1,l2,l3,p,a;
    scanf("%f%f%f",&l1,&l2,&l3);
    p=(l1+l2+l3)/2;
    a=sqrt(p*(p-l1)*(p-l2)*(p-l3));
    printf("%.2f\n",a);
}