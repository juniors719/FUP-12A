#include <stdio.h>
int main(){
    int h,p,f,d,i,cont;
    scanf("%d %d %d %d",&h,&p,&f,&d);
    if(d=(-1)){
        if((p<f)&&(p>h)){
            printf("N\n");
        }else{
            printf("S\n");
        }
    }else if(d=1){
        if((p>f)&&(p<h)){
            printf("N\n");
        }else{
            printf("S\n");
        }
    }
}