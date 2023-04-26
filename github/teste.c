#include <stdio.h>
#include <math.h>
int contaDigitos(int n){
    int t=1,c=0;
    while(n>=t){
        c++;
        t*=10;
    }
    return c;
}
int main(){
    int a,b,t=1,c=0,da,db,i;
    scanf("%d %d",&a,&b);
    da = contaDigitos(a);
    db = contaDigitos(b);
    int na[da];
    int nb[db];
    for(i=0;i<da;i++){
        na[i] = a / pow(10,((da - i)-1));
        a-=na[i];
    }
    printf("%d\n", na[0]);
    printf("%d\n", na[1]);
}