#include <stdio.h>
int main(){
    int n,m,p=2,c;
    scanf("%d",&n);
    m=n;
    while(m>=1){
        c=0;
        while((m%p==0)){
            m = m/p;
            c++;
        }
        if(c>0)
            printf("%d %d\n",p,c);
        p++;
        if(m==1)
            break;
        
    }
}