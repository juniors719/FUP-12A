    #include <stdio.h>
    #include <string.h>
    int main(){
        char frase[101];
        char* palavras[20];
        int ordemLexicografica = 1, wordCount = 0;
        scanf("%[^\n]s", frase);
        char* token = strtok(frase, " ");
        while (token != NULL) {
            palavras[wordCount] = token;
            wordCount++;
            token = strtok(NULL, " ");
        }
        for(int i = 0; i < wordCount - 1; i++){
            int j = 0;
            int ordenado = 2;
            int tamanhoPalavra1 = strlen(palavras[i]);
            int tamanhoPalavra2 = strlen(palavras[i+1]);
            while(ordenado == 2 && j < tamanhoPalavra1 && j < tamanhoPalavra2){
                if(palavras[i][j] < palavras[i+1][j]) ordenado = 1;
                else if(palavras[i][j] == palavras[i+1][j]) j++;
                else ordenado = 0;
            }
            if(ordenado == 0){
                // printf("fora de dordem\n");
                ordemLexicografica = 0;
                break;
            }else if(ordenado == 2 && tamanhoPalavra1 > tamanhoPalavra2) ordemLexicografica = 0;
        }
        if(ordemLexicografica) printf("sim\n");
        else printf("nao\n");
    }