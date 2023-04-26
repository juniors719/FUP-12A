#include <stdio.h>
#include <math.h>
int main(){
    // int n;
    // scanf("%d", &n);
    for(int n = 1; n < 100; n++){
        int c = 0;
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                c++;
            }
        }
        if(!c)
            printf("%d\n", n);
    }
    
    // printf("1\n");
    return 0;
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 2; i <= (sqrt(n)); i++){
        if(n % i == 0){
            printf("0\n");
            return 0;
        }
    }
    printf("1\n");
    return 0;
}