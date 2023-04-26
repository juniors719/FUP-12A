#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 2; i <= n/i; i++){
        if(n % i == 0){
            printf("0\n");
            return 0;
        }
    }
    printf("1\n");
    return 0;
}