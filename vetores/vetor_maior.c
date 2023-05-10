#include <stdio.h>
int main(){
    int nums[5];
    int maior = 0, menor = 0;
    for(int i = 0; i < 5; i++){
        scanf("%d", &nums[i]);
        if(nums[i] >= nums[maior]) maior = i;
        if(nums[i] <= nums[menor]) menor = i;
    }
    printf("%d\n", nums[maior] + nums[menor]);
}