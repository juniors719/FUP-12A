#include <stdio.h>
typedef struct op
{
    int n1;
    int n2;
    int soma;
    int subtracao;
    int multiplicacao;
    float divisao;
} operacoes;

int main(){
    operacoes op;
    int n1, n2; scanf("%d %d", &op.n1, &op.n2);
    op.soma = op.n1 + op.n2;
    op.subtracao = op.n1 - op.n2;
    op.multiplicacao = op.n1 * op.n2;
    op.divisao = (float) op.n1 / op.n2;
    printf("%d %d %.1f %d\n", op.soma, op.subtracao, op.divisao, op.multiplicacao);

}