#include <stdio.h>

typedef struct expressao{
    int n1;
    int n2;
    char operador;
} expression;

int operation(expression ep){
    switch (ep.operador)
    {
    case '+':
        return ep.n1 + ep.n2;
        break;
    case '-':
        return ep.n1 - ep.n2;
        break;
    case '*':
        return ep.n1 * ep.n2;
        break;
    case '/':
        return ep.n1 / ep.n2;
        break;
    }
}

int main(){
    expression ep;
    scanf("%d", &ep.n1);
    scanf("%d", &ep.n2);
    scanf(" %c", &ep.operador);
    printf("%d\n", operation(ep));
}