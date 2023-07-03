// Pedrinho quer saber qual o maior palíndromo formado pelo produto de 2 números de N dígitos. AjudePedrinho nessa missão.
// Ação
// Dado dois inteiros N e M, retornar os M maiores palíndromos formados pelo produto de dois números de N dígitos.

// Entrada:
// 2 Inteiros N, M.

// Saida:
// Os M maiores palíndromos formados pelo produto de dois números cuja quantidade de dígitos é N.

// Exemplos
// >>>>>>>>
// 2 3
// ========
// 9009
// 8448
// 8118
// <<<<<<<<

// USE VETOR

#include <stdio.h>
int main(){
    int n, m; scanf("%d %d", &n, &m);
    int maior = 0;
    for(int i = 0; i < n; i++) maior = maior * 10 + 9;
    int menor = maior / 10;
    int palindromos[m];
    int indice = 0;
    for(int i = maior; i > menor; i--){
        for(int j = maior; j > menor; j--){
            int produto = i * j;
            int aux = produto;
            int inverso = 0;
            while(aux > 0){
                inverso = inverso * 10 + aux % 10;
                aux /= 10;
            }
            if(produto == inverso){
                palindromos[indice] = produto;
                indice++;
            }
        }
    }
    for(int i = 0; i < m; i++) printf("%d\n", palindromos[i]);
}