#include <stdio.h>
int main(){
    
    typedef struct end
    {
        char nome[101];
        char email[51];
        char telefone[20];
        int matricula;
    } endereco;

    endereco agenda[2];
    for(int i = 0; i < 2; i++){
        scanf(" %[^\n]s", agenda[i].nome);
        scanf(" %[^\n]s", agenda[i].email);
        scanf(" %[^\n]s", agenda[i].telefone);
        scanf("%d", &agenda[i].matricula);
    }

    for(int i = 0; i < 2; i++){
        printf("Nome %d: %s\n", i+1, agenda[i].nome);
        printf("Email %d: %s\n", i+1, agenda[i].email);
        printf("Telefone %d: %s\n", i+1, agenda[i].telefone);
        printf("Matrícula %d: %d\n", i+1, agenda[i].matricula);
        printf("===================\n");
    }

}