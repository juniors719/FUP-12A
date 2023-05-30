#include <stdio.h>

int existe(int vet[], int len, int valor){
    for(int i = 0; i < len; i++){
        if(valor == vet[i]) return 1;
    }
    return 0;
}

void BubbleSort(int vetor[], int tamanho){
	int memoria, troca, i, j;
	troca=1; 
	for(j=tamanho-1; (j>=1) && (troca==1); j--){
		troca=0; 
		for(i=0; i<j; i++){
				if(vetor[i]>vetor[i+1]){
					memoria=vetor[i];
					vetor[i]=vetor[i+1];
					vetor[i+1]=memoria;
					troca=1; 
			}
		}
	}
}

int main(){
    int qJoao, qFigurinhas = 0, aux; scanf("%d", &qJoao);
    int figJoao[qJoao];
    int quantidade[qJoao];
    int agrupados[qJoao];
    for(int i = 0; i < qJoao; i++) scanf("%d", &figJoao[i]);

    BubbleSort(agrupados, qFigurinhas);
    
    for(int i = 0; i < qJoao; i++){
        aux = 0;
        for(int j = 0; j < qJoao; j++){
            if(figJoao[i] == figJoao[j]) aux++;
        }
        if(aux > 1 && !existe(agrupados, qFigurinhas, figJoao[i])){
            agrupados[qFigurinhas] = figJoao[i];
            quantidade[qFigurinhas++] = aux - 1;
        }
    }
        
    if(qFigurinhas){
        for(int i = 0; i < qFigurinhas; i++){
            printf("%d %d\n", agrupados[i], quantidade[i]);
        }
    }else{
        printf("nenhum\n");
    }
    
    
}