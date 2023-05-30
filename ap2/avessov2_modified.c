#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, grito, posicao;
    scanf("%d", &n);
    int operarios[n];
    for(int i = 0; i < n; i++) scanf("%d", &operarios[i]);
    
    while(1){
        scanf("%d", &grito);
        if(grito){
            for(int i = 0; i < n; i++){
                if(grito == abs(operarios[i])){
                    // muda a esquerda
                    if(i > 0) operarios[i-1] *= -1;
                    // muda a direita
                    if(i < n - 1) operarios[i+1] *= -1;
                }   
            }
        }else{
            printf("[");
            for(int i = 0; i < n; i++){
                printf("%d", operarios[i]);
                if(i < n - 1) printf(" ");
            }
            printf("]\n");
            return 0;
        }
    }
    
}