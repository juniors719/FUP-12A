#include <stdio.h>
int main(){
    int n,i,lateral,l,m,o;
    scanf("%d",&n);
    o=n;
    for(i=1;i<=n;i++){
        for(l=1;l<o;l++){
            printf(".");
        }
        for(m=1;m<=i;m++){
            printf("%d.",n);
        }
        for(l=1;l<(o-1);l++){
            printf(".");
        }
        o--;
        printf("\n");
    }
}