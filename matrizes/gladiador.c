#include <stdio.h>
int main(){
    int n; scanf("%d", &n);
    char matriz[n][n];
    for(int l = 0; l < n; l++){
        for(int c = 0; c < n; c++){
            scanf(" %c", &matriz[l][c]);
        }
    }
    
}