#include <stdio.h>
#define TMAX 100
int main(){
    int nT;
    int i,j;
    int qpontM;
    int pM[TMAX];
    int climbD = 0, climbE = 0;
    int Mi;
    scanf("%d", &nT);
    for(i = 0; i < nT; i++){
        scanf("%d", &qpontM);
        for(j = 0; j < qpontM; j++) scanf("%d", &pM[j]);
        for(j = 0; j < qpontM; j++){
            // scanf("%d", &pM[j]);
            if(j){
                if(pM[j] > Mi)
                    climbD = pM[j] - Mi;
            }else{
                Mi = pM[j];
            }
        }
        for(j = (qpontM-1); j >= 0; j--){
            // scanf("%d", &pM[j]);
            if(j = (qpontM-1)){
                if(pM[j] > Mi)
                    climbE = pM[j] - Mi;
            }else{
                Mi = pM[j];
            }
        }
        printf("%d\n", climbD);
        printf("%d\n", climbE);
    }
}