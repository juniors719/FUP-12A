#include <stdio.h>
int main(){
    int n1,n2;
    char op;
    scanf("%d%d",&n1,&n2);
    scanf(" %c",&op);
    switch(op){
        case '+':printf("%d\n",n1+n2);break;
        case '-':printf("%d\n",n1-n2);break;
        case '*':printf("%d\n",n1*n2);break;
        case '/':printf("%d\n",n1/n2);break;
        default:printf("Operador desconhecido\n");break;
    }
}