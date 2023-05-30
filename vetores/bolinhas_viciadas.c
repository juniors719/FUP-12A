#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int vetor[n];
    for(int i = 0; i < n; i++) scanf("%d", &vetor[i]);

    int digitos[] = {0,0,0,0,0,0,0,0,0,0};
    int maior_repeticao = 0, quant_digitos = 0, quant_mais_repetidos = 0;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < n; j++){
            if(i == vetor[j]) digitos[i]++;
        }
        // verifica se a quantidade de repetições é maior que a anterior
        maior_repeticao = (digitos[i] > maior_repeticao) ? digitos[i] : maior_repeticao;

        // se a contagem der maior que 1, é pq existe um dígito no vetor, e conta
        if(digitos[i] > 0) quant_digitos++;
    }

    printf("%d\n", quant_digitos);

    int mais_repetidos[quant_digitos];

    for(int i = 0; i < 10; i++){
        if(digitos[i] == maior_repeticao) mais_repetidos[quant_mais_repetidos++] = i;
    }

    for(int i = 0; i < quant_mais_repetidos; i++){
        printf("%d", mais_repetidos[i]);
        if(i == quant_mais_repetidos - 1) printf("\n");
        else printf(" ");
    }
}