#include <stdio.h>
int main(){
    float v,t,c,s,d;
    scanf("%f%f%f",&v,&t,&c);
    t=t/60;
    s=v*t;
    d=s/c;
    printf("%.2f",d);
}