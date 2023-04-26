#include <stdio.h>
int main(){
    int l=0,r=0,d=0;
    char i;
    scanf("%d%d%d",&l,&r,&d);
    i=(r>50)&&(l<r)&&(r>d)?'S':'N';
    printf("%c\n",i);
}