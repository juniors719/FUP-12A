#include <stdio.h>
#include <math.h>
int main(){
    float j1,real;
    char j2,c;
    scanf("%f",&j1);
    scanf(" %c",&j2);
    scanf("%f", &real);
    if(j1!=real){
        c=(real>j1)?'M':'m';
        if(c==j2)
            printf("segundo\n");
        else
            printf("primeiro\n");
    }else
        printf("primeiro\n");
}