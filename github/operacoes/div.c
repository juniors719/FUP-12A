/*5a série do ensino fundamental. O professor me prometeu muito poder. Disse que se aprendesse sua técnica especial 
secreta passada apenas de geração em geração para os escolhidos, eu nunca mais teria que pensar em quociente e resto. 
Seria um número apenas e apenas um. Uma divisão teria dois números entrando e apenas um número saindo. Seria um sonho né. 
O maldito professor só esqueceu de me avisar que agora ia ter uma tal duma vírrrrrgula e as vezes muuuuuitos números depois dela.

Ação
Aprenda a fazer divisão inteira e quebrada.

Entrada
Dois valores inteiros do usuário, n1 e n2, um por linha.

Saída
1a linha: o resultado da divisão inteira de n1 por n2
2a linha: o resto da divisão de n1 por n2
3a linha: o resultado da divisão quebrada com 2 casas decimais.*/

#include <stdio.h>
int main(){
    int n1=0,n2=0;
    double f=0;
    scanf("%d%d",&n1,&n2);
    f=(double)n1/n2;
    printf("%d\n%d\n%.2f",n1/n2,n1%n2,f);
}