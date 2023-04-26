#include <stdio.h>
#include <stdbool.h>
int main(){
    bool w,l,a;
    int temp=0;
    scanf("%d",&temp);
    w=temp;
    scanf("%d",&temp);
    l=temp;
    scanf("%d",&temp);
    a=temp;
    if(!w){
        printf("you must connect to wifi\n");
        return 0;
    }
    if(!l){
        printf("you need to login first\n");
        return 0;
    }
    if(!a){
        printf("you need to login as admin\n");
        return 0;
    }

}