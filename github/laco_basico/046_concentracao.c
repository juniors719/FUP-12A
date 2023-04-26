#include <stdio.h>
int main(){
    int n1,n2,i;
    scanf("%d %d",&n1,&n2);
    printf("[");
    for(i=0;i<=(n2-n1);i++){
        printf(" %d %d",n1+i,n2-i);
    }
    printf(" ]\n");
}