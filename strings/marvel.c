#include <stdio.h>
#include <string.h>
int main(){
    char heroi[50], maispoderoso[50];
    int powerIronTeam = 0, powerCaptainTeam = 0, poder;
    int powerMostPowerful = 0;
    int quantIronTeam; scanf("%d", &quantIronTeam);
    for(int i = 0; i < quantIronTeam; i++){
        scanf(" %[^\n]s", heroi);
        scanf("%d", &poder);
        powerIronTeam += poder;
        if(poder > powerMostPowerful){
            powerMostPowerful = poder;
            strcpy(maispoderoso, heroi);
        }
    }
    int quantCaptainTeam; scanf("%d", &quantCaptainTeam);
    for(int i = 0; i < quantCaptainTeam; i++){
        scanf(" %[^\n]s", heroi);
        scanf("%d", &poder);
        powerCaptainTeam += poder;
        if(poder > powerMostPowerful){
            powerMostPowerful = poder;
            strcpy(maispoderoso, heroi);
        }
    }
    if(powerIronTeam > powerCaptainTeam) printf("Team Iron Wins\n");
    else if(powerIronTeam < powerCaptainTeam) printf("Team Captain Wins\n");
    else printf("Draw\n");
    printf("%s\n", maispoderoso);
}