#include <stdio.h>
int main(){
    int a, b, c, h, l, cabe=0;
    scanf("%d%d%d%d%d", &a, &b, &c, &h, &l);
    if(a <= h){
        if((b <= l) || (c <= l)){
            cabe=1;
        }
    }
    if(b <= h){
        if((a <= l) || (c <= l)){
            cabe=1;
        }
    }
    if(c <= h){
        if((b <= l) || (a <= l)){
            cabe=1;
        }
    }
    if(cabe){printf("S\n");}else{printf("N\n");}
}