#include <stdio.h>
int main(){
    int l1,l2,l3,b=1;
    scanf("%d%d%d",&l1,&l2,&l3);
    if((l1 >= l2+l3) || (l2 >= l1+l3) || (l3 >= l2+l1)){
        b=0;
    }
    if(b){printf("True\n");}else{printf("False\n");}
}