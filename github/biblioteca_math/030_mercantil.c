#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int real,j1,j2,dj1,dj2;
    scanf("%d%d%d",&real,&j1,&j2);
    dj1 = abs(j1-real);
    dj2 = abs(j2-real);
    if(dj1 < dj2){
        printf("primeiro\n");
    }else if(dj2 < dj1){
        printf("segundo\n");
    }else{
        printf("empate\n");
    }
}