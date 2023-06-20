#include <stdio.h>
#include <string.h>

// Função para trocar dois caracteres em uma string
void swap(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Função para inverter uma string a partir de um índice
void reverse(char* str, int start, int end) {
    while (start < end) {
        swap(&str[start], &str[end]);
        start++;
        end--;
    }
}

// Função para encontrar a n-ésima permutação lexicográfica de uma string
void findNthPermutation(char* str, int n) {
    int len = strlen(str);

    // // Ordena a string em ordem lexicográfica
    // for (int i = 0; i < len - 1; i++) {
    //     for (int j = i + 1; j < len; j++) {
    //         if (str[i] > str[j]) {
    //             swap(&str[i], &str[j]);
    //         }
    //     }
    // }

    // Encontra a n-ésima permutação lexicográfica
    while (n > 1) {
        int i = len - 2;

        // Encontra o elemento que precisa ser trocado
        while (i >= 0 && str[i] >= str[i + 1]) {
            i--;
        }

        int j = len - 1;

        // Encontra o próximo elemento em ordem lexicográfica
        while (j > i && str[j] <= str[i]) {
            j--;
        }

        // Troca os elementos
        swap(&str[i], &str[j]);

        // Inverte a parte restante da string
        reverse(str, i + 1, len - 1);

        n--;
    }

    printf("%s\n", str);
}

int main() {
    char str[100];
    int n;

    scanf("%s", str);

    scanf("%d", &n);

    findNthPermutation(str, n+1);

    return 0;
}
