#include <stdio.h>
int main(){
    int cartela[4][4] = {
        {1, 9, 27, 23},
        {34, 20, 37, 47},
        {30, 87, 55, 69},
        {13, 60, 99, 66}
    };
    
    int q = 0, peda;
    
    for(int i = 0; i < 6; i++){
        scanf("%d", &peda);
        for(int l = 0; l < 4; l++){
            for(int c = 0; c < 4; c++){
                if(peda == cartela[l][c]) q++;
            }
        }
    }
    
    printf("%d\n", q);
}