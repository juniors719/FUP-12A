#include <stdio.h>
int main(){
	int dia, mes, ano;
	printf("Entre com a data do seu aniversario (dd mm aa): ");
	scanf("%d %d %d", &dia, &mes, &ano);
	printf("Voce nasceu em %d/%d/%d\n", dia, mes, ano);
}
