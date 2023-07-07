#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int ehpalindromo(char str[]){
    for(int i = 0, j = strlen(str)-1; i < strlen(str); i++, j--){
        if(str[i] != str[j]) return 0;
    }
    return 1;
}

void insertionSort(int arr[], int size){
    int i, j, key;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i;
        while (j > 0 && arr[j-1] < key) {
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = key;
    }
}

int inVector(int arr[], int size, int numero){
    for(int i = 0; i < size; i++){
        if(arr[i] == numero) return 1;
    }
    return 0;
}

int main(){
    int nDigitos, nPalindromos, qPalindromos = 0;
    scanf("%d %d", &nDigitos, &nPalindromos);
    int palindromos[300];
    int inicial = (pow(10, nDigitos))-1;
    int final = (pow(10, (nDigitos-1)));
    for(int i = inicial; i >= (inicial / 2); i--){
        for(int j = inicial; j >= (inicial / 2); j--){
            if(nPalindromos == 0) return 0;
            char resultado[15];
            int r = i * j;
            sprintf(resultado, "%d", r);
            if(ehpalindromo(resultado)){
                int resultadoint = atoi(resultado);
                if(!inVector(palindromos, qPalindromos, resultadoint)){palindromos[qPalindromos++] = resultadoint;}
            }
        }
    }
    insertionSort(palindromos, qPalindromos);
    for(int i = 0; i < nPalindromos; i++){
        printf("%d\n", palindromos[i]);
    }
}