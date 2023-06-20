#include <stdio.h>
#include <string.h>
int main(){
    int qIronTeam, qCaptainTeam, total_IronTeam = 0, total_CaptainTeam = 0;
    scanf("%d", &qIronTeam);
    char* heroes_ironTeam[qIronTeam];
    int power_ironTeam[qIronTeam];
    int power_bestHeroe = 0, index_bestHeroe, team_bestHeroe;
    for(int i = 0; i < qIronTeam; i++){
        char heroi[100];
        scanf("%[^\n]", heroi);
        heroes_ironTeam[i] = heroi;
        int leitura;
        scanf("%d", &leitura);
        power_ironTeam[i] = leitura;
        total_IronTeam += leitura;
        if(power_ironTeam[i] > power_bestHeroe){
            power_bestHeroe = power_ironTeam[i];
            index_bestHeroe = i;
            team_bestHeroe = 1;
        }
    }
    scanf("%d", &qCaptainTeam);
    char* heroes_CaptainTeam[qCaptainTeam];
    int power_CaptainTeam[qCaptainTeam];
    for(int i = 0; i < qCaptainTeam; i++){
        char heroi[100];
        scanf("%[^\n]", heroi);
        heroes_CaptainTeam[i] = heroi;
        int leitura;
        scanf("%d", &leitura);
        power_CaptainTeam[i] = leitura;
        total_CaptainTeam += leitura;
        if(power_CaptainTeam[i] > power_bestHeroe){
            power_bestHeroe = power_CaptainTeam[i];
            index_bestHeroe = i;
            team_bestHeroe = 2;
        }
    }
    if(total_CaptainTeam > total_IronTeam) printf("Team Captain Wins\n");
    else if(total_CaptainTeam < total_IronTeam) printf("Team Iron Wins\n");
    else printf("Draw\n");
    if(team_bestHeroe == 1) printf("%s\n", heroes_ironTeam[index_bestHeroe]);
    else printf("%s\n", heroes_CaptainTeam[index_bestHeroe]);
}