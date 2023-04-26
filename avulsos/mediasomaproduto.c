#include <stdio.h>
int main(){
	float n1, n2, n3;
	printf("Digite o primeiro número: ");
	scanf("%f", &n1);
	printf("Digite o segundo número: ");
	scanf("%f", &n2);
	printf("Digite o terceiro número: ");
	scanf("%f", &n3);
	printf("Soma: %.1f\nProduto: %.1f\nMédia: %.1f", n1+n2+n3, n1*n2+n3, (n1+n2+n3)/3);
}
