#include <stdio.h>
#define PMAX 100
int main(){
    int p, r;
    int part[PMAX];
    int nPart, ordem, acao, pos;
    int teste = 0;
    int i,j,k;
    scanf("%d %d", &p, &r);
    while(p||r){
        printf("Teste %d\n", ++teste);
        for(int i = 0; i < p; i++) scanf("%d",&(part[i]));
        for(int i = 0; i < r; i++){
            scanf("%d %d", &nPart, &ordem);
            pos = 0;
            for(int j = 0; j < nPart; j++){
                scanf("%d", &acao);
                if(acao == ordem){
                    pos++;
                }else{
                    for(k=(pos+1);k<nPart;k++) part[k-1] = part[k];
                }
            }
        }
        printf("%d\n", part[0]);
        scanf("%d %d", &p, &r);
    }
    return 0;
}