#include <stdio.h>
int ordena(int n[]);
int main(){
    int numeros[3];
    ordena(numeros);
    return 0;
}
int ordena(int n[]){
    int i, tamanhon;
    tamanhon = sizeof(n)/sizeof(n[0]);
    /* for(i=0<i<sizeof(n);i++){

    } */
    printf("%d\n",tamanhon);
}