#include <stdio.h>
int main(){
    float n1,n2,mf,af;
    scanf("%f%f%f",&n1,&n2,&af);
    mf=(n1+n2)/2;
    if(mf>=7){
        printf("aprovado\n");
        return 0;
    }
    if(mf<4){
        printf("reprovado\n");
        return 0;
    }
    if((mf>=4)&&(mf<7)){
        mf=(mf+af)/2;
        if(mf>=5){
            printf("aprovado na final\n");
        }else{
            printf("reprovado na final\n");
        }
    }
}