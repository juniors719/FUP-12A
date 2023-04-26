#include <stdio.h>
int main(){
    int j1,j2,j3,c;
    scanf("%d%d%d",&j1,&j2,&j3);
    if((j1==j2)&&(j1==j3))
        c=3;
    else if((j1==j2)||(j2==j3)||(j1==j3))
        c=2;
    else
        c=0;
    printf("%d\n",c);
}