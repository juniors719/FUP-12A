#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,delta,x1,x2;
    scanf("%f%f%f",&a,&b,&c);
    delta=(pow(b,2))-(4*a*c);
    if(delta > 0){
        x1=((-b) + sqrt(delta)) / (2*a);
        x2=((-b) - sqrt(delta)) / (2*a);
        printf("%.2f\n%.2f\n",x1,x2);
    }else if(delta == 0){
        x1=((-b) + sqrt(delta)) / (2*a);
        printf("%.2f\n",x1);
    }else
        printf("nao ha raiz real\n");
}