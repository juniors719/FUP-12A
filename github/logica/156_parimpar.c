#include <stdio.h>
int main(){
    int p,d1,d2,total;
    scanf("%d%d%d",&p,&d1,&d2);
    total=d1+d2;
    if(total%2==0)
        printf("%d",p);
    else
        printf("%d",1-p);
}