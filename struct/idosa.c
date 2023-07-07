#include <stdio.h>
#include <string.h>

typedef struct p
{
    char name[50];
    int age;
    char gender;
} people;

int main(){
    int qPeoples; scanf("%d", &qPeoples);
    people peoples[qPeoples];
    int qWomans = 0;
    for(int i = 0; i < qPeoples; i++){
        scanf("%s", peoples[i].name);
        scanf("%d", &peoples[i].age);
        scanf(" %c", &peoples[i].gender);
        if(peoples[i].gender == 'f') qWomans++;
    }
    if(qWomans){
        int major = 0;
        char nomeMaisVelha[50];
        for(int i = 0; i < qPeoples; i++){
            if(peoples[i].gender == 'f'){
                if(peoples[i].age > major){
                    major = peoples[i].age;
                    strcpy(nomeMaisVelha, peoples[i].name);
                }
            }
        }
        printf("%s\n", nomeMaisVelha);
    }else printf("nao tem mulher\n");
}