#include <stdio.h>

void le_vet(double vet[], int len){
    for(int i = 0; i < len; i++){
        scanf("%lf", &vet[i]);
    }
}

double media_alt(double vet[], int q){
    double total = 0;
    for(int i = 0; i < q; i++) total+=vet[i];
    return total/q;
}

char check_height(double altura, double media){
    if(altura == media){
        return 'M';
    }else if(altura > media){
        return 'G';
    }else{
        return 'P';
    }
}

void check_soldados(double vet[], int len, double media){
    for(int i = 0; i < len; i++){
        printf("%c", check_height(vet[i], media));
        if(i < (len-1)) printf(" ");
    }
    printf("\n");
}

int main(){
    int qSold; scanf("%d", &qSold);
    double soldados[qSold];
    le_vet(soldados, qSold);
    double media = media_alt(soldados, qSold);
    if(qSold > 1) printf("%.2f\n", media);
    check_soldados(soldados, qSold, media);
}