#include <stdio.h>
int main(){
    float a,g,ra,rg,ca,cg;
    scanf("%f %f %f %f",&a,&g,&ra,&rg);
    ca = ra/a;
    cg = rg/g;
    if(ca>cg)
        printf("A\n");
    else
        printf("G\n");
}