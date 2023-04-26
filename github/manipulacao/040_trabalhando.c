#include <stdio.h>
int main (){
    int d=0,h=0,m=0,t=0;
    scanf("%d%d%d",&d,&h,&m);
    if((d>=2)&&(d<=6)){
        if(h<=11){
            t=(h>=8)&&(h<=11)?1:0;
        }else{
            t=(h>=14)&&(h<=17)?1:0;
        }
    }else if(d==7){
        t=(h>=8)&&(h<=11)?1:0;
    }else{
        t=0;
    }
    if(t){printf("SIM\n");}else{printf("NAO\n");}
}