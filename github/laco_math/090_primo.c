#include <stdio.h>
int verificaPrimo(int n){
    int i,b=0;
    for(i=2;i<n;i++){
        if(n%i==0){
            b+=1;
        }
    }
    if(b>0)
        return 0;
    else
        return 1;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",verificaPrimo(n));
}