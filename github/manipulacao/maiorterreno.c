#include <stdio.h>
int main(){
    int c1,l1,c2,l2,a1,a2,maior;
    scanf("%d%d%d%d",&c1,&l1,&c2,&l2);
    a1=c1*l1;
    a2=c2*l2;
    maior=a1>a2?a1:a2;
    printf("%d\n",maior);
}