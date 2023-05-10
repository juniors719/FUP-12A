#include <stdio.h>

int mmc(int n[]){
    int d = 2;
    int mmc = 1;
    while(n[0] > 1 || n[1] > 1){
        int a = 0;
        // calcula o mmc no primeiro número
        if(n[0] % d == 0){
            n[0] /= d;
            a = 1;
        }
        // calcula o mmc no segundo número
        if(n[1] % d == 0){
            n[1] /= d;
            a = 1;
        }
        // printf("%d %d | %d\n", n[0], n[1], d);
        // se puder imprimir, multiplica o mmc
        if(a){
            mmc *= d;
        }else{
            d++;
        }
    }
    return mmc;
}

int main(){
    int n[2];
    scanf("%d %d", &n[0], &n[1]);
    printf("%d\n", mmc(n));
}