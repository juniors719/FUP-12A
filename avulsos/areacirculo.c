#include <stdio.h>
#include <math.h>
int main(){
	float raio;
	printf("Digite o raio do círculo: ");
	scanf("%f", &raio);
	printf("A área do círculo é: %.2f \n", 3.14*pow(raio,2));
	printf("O perímetro do círculo é: %.2f \n", 2*3.14*raio);
}
