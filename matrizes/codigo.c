#include <stdio.h>
int main(){
    int n; scanf("%d", &n);
    int sequencia[n];
    int quantRepeticoes = 0;
    for(int i = 0; i < n; i++) scanf("%d", &sequencia[i]);
    for(int i = 0; i < n-2; i++) if(sequencia[i] == 1 && sequencia[i+1] == 0 && sequencia[i+2] == 0) quantRepeticoes++;
    printf("%d\n", quantRepeticoes);
}