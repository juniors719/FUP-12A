#include <stdio.h>
int main(){
    int matriz[5][5];
    int somaDiagPrincipal = 0, somaDiagSecundaria = 0;
    int l, c;
    for(l = 0, c = 4; l < 5; l++, c--){
        somaDiagPrincipal += matriz[l][l];
        somaDiagSecundaria += matriz[l][c];
    }
    printf("%d\n", somaDiagPrincipal - somaDiagSecundaria);
}