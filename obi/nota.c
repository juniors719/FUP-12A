#include <stdio.h>

int verificamedia(double m, int t);
int main() {
    double nota[4];
    double media, mediae, notat=0, m, notaexame;
    int peso[]={2,3,4,1};
    int pesot=0,i,caso,t;
    scanf("%lf %lf %lf %lf",&nota[0],&nota[1],&nota[2],&nota[3]);
    for(i=0;i<4;i++){
        pesot+=peso[i];
        notat+=(nota[i]*peso[i]);
    }
    media = notat/pesot;
    if((media<7)&&(media>=5)){
        scanf("%lf",&notaexame);
        mediae = (media + notaexame)/2;
        
    }
    printf("Media: %.1lf\n",media);
    caso = verificamedia(media,1);
    if(caso==2){
        printf("Nota do exame: %.1lf\n",notaexame);
        verificamedia(mediae,2);
        printf("Media final: %.1lf\n",mediae);
    }
    return 0;
}

int verificamedia(double m, int t){
    switch(t){
        case 1:
            if(m>=7){
                printf("Aluno aprovado.\n");
                return 1;
            }else if((m<7)&&(m>=5)){
                printf("Aluno em exame.\n");
                return 2;
            }else if(m<5){
                printf("Aluno reprovado.\n");
                return 3;
            }
            break;
        case 2:
            if(m>=5){
                printf("Aluno aprovado.\n");
                return 1;
            }else if(m<5){
                printf("Aluno reprovado.\n");
                return 2;
            }
            break;
    }
    
}