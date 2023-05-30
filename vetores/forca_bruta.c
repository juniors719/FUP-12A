#include <stdio.h>
#include <string.h>
int main(){
    int tamanho_senha, quant_geracoes, quant_digitos;
    scanf("%d %d", &tamanho_senha, &quant_geracoes);
    
    int posicoes[tamanho_senha + 1];
    char senha[tamanho_senha + 1];
    char nova_senha[tamanho_senha + 1];
    
    char possiveis_caracteres[100];
    scanf("%s", possiveis_caracteres);
    quant_digitos = strlen(possiveis_caracteres);
    
    char partida[100];
    scanf("%s", partida);
    
    for(int i = 0; i < tamanho_senha; i++){
        for(int j = 0; j < quant_digitos; j++){
            if(partida[i] == possiveis_caracteres[j]){
                posicoes[i] = j;
                break;
            }
        }
    }
    
    
    for(int i = 0; i < quant_geracoes; i++){
        int posicao_atual = tamanho_senha - 1;
        while(posicao_atual >= 0){
            posicoes[posicao_atual]++;
            if(posicoes[posicao_atual] == quant_digitos){
                posicoes[posicao_atual] = 0;
                posicao_atual--;
            }
            else{
                break;
            }
        }
        for(int j = 0; j < tamanho_senha; j++){
            nova_senha[j] = possiveis_caracteres[posicoes[j]];
        }
        nova_senha[tamanho_senha] = '\0';
        printf("%s\n", nova_senha);
    }
}