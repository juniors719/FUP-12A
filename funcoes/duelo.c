#include <stdio.h>

typedef struct j
{
    int life;
    int attack;
}jogador;

int main(){
    jogador jog1;
    jogador jog2;
    scanf("%d %d %d %d", &jog1.life, &jog1.attack, &jog2.life, &jog2.attack);
    while(jog1.life > 0 && jog2.life > 0){
        jog1.life -= jog2.attack;
        jog2.life -= jog1.attack;
        printf("HP Jogador 1: %d\n", jog1.life);
        printf("HP Jogador 2: %d\n", jog2.life);
    }
    if(jog1.life <= 0 && jog2.life <= 0) printf("Empate\n");
    else if(jog1.life <= 0) printf("Personagem 2\n");
    else printf("Personagem 1\n");
}