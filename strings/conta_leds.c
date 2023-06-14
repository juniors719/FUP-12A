#include <stdio.h>
#include <string.h>
int main(){
    int qLeds[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int qLetreiros; scanf("%d", &qLetreiros);
    for(int i = 0; i < qLetreiros; i++){
        char letreiro[6];
        int contagem = 0;
        scanf("%s", letreiro);
        for(int j = 0; j < strlen(letreiro); j++){
            int n = letreiro[j] - 48;
            contagem += qLeds[n];
        }
        printf("%d leds\n", contagem);
    }
}