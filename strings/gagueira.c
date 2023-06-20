#include <stdio.h>
#include <string.h>
int main(){
    char frase[200];
    char* words[10];
    int wordCount = 0;
    scanf("%[^\n]", frase);
    char* token = strtok(frase, " ");
    while (token != NULL){
        words[wordCount++] = token;
        token = strtok(NULL, " ");
    }
    for(int i = 0; i < wordCount; i++){
        if(i!=0) printf(" ");
        printf("%s %s", words[i],words[i]);
        if(i==wordCount-1) printf("\n");
    }
}