#include <stdio.h>
int main(){
    int n; scanf("%d", &n);
    char matriz[n][n];
    int qGlad = 0, qCond = 0;
    for(int l = 0; l < n; l++){
        int qAuxGlad = 0, qAuxCond = 0, lion = 0;
        for(int c = 0; c < n; c++){
            scanf(" %c", &matriz[l][c]);
            if(lion) continue;
            if(matriz[l][c] == 'G') qAuxGlad += 2;
            else if(matriz[l][c] == 'C'){
                qAuxCond += ((l+c) == n - 1) ? 2 : 1;
            }
            else{
                qAuxCond = 0;
                qAuxGlad = 0;
                lion = 1;
            }
        }
        qGlad += qAuxGlad;
        qCond += qAuxCond;
    }
    if(qGlad > qCond) printf("Gladiadores\n");
    else if(qGlad < qCond) printf("Condenados a morte\n");
    else printf("Ninguem\n");
}