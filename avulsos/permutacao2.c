#include <stdio.h>
int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    for(int i = 0; i <= 9; i++){
        int na1 = n1;
        int na2 = n2;
        int c1 = 0, c2 = 0;
        while(na1 > 0){
            if(na1%10 == i){
                c1++;
            }
            na1/=10;
        }
        while(na2 > 0){
            if(na2%10 == i){
                c2++;
            }
            na2/=10;
        }
        if(c1 != c2){
            printf("False\n");
            return 0;
        }
    }
    printf("True\n");
    return 0;
}