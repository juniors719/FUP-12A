#include <stdio.h>

int main() {
    int num1, num2, dig1, dig2;
    int count1, count2, i;

    scanf("%d %d", &num1, &num2);

    for (i = 0; i <= 9; i++) {  // Inicializando a contagem de dígitos com zero
        count1 = 0;
        count2 = 0;

        // Contando quantas vezes cada dígito aparece no primeiro número
        dig1 = i;
        while (num1 > 0) {
            if (num1 % 10 == dig1)
                count1++;
            num1 /= 10;
        }

        // Contando quantas vezes cada dígito aparece no segundo número
        dig2 = i;
        while (num2 > 0) {
            if (num2 % 10 == dig2)
                count2++;
            num2 /= 10;
        }
        // Verificando se a contagem de dígitos é a mesma para ambos os números
        if (count1 != count2) {
            printf("False\n");
            return 0;
        }
    }

    printf("True\n");

    return 0;
}
