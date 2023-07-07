#include <stdio.h>
int main(){
    int l, c; scanf("%d %d", &l, &c);
    char tetris[l][c];
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            scanf(" %c", &tetris[i][j]);
        }
    }
    int qvariacoes = l;
    for(int i = 0; i < c; i++){
        int qVariacoesColuna = 0;
        int flag = 0;
        int achou = 0;
        for(int j = 0; j < l; j++){
            if(tetris[j][i] == 'o') achou = 1;
            if(achou){
                if(flag){
                    if(tetris[j][i] == '.'){
                        qVariacoesColuna++;
                        continue;
                    }else break;
                }
                if(tetris[j][i] == 'o' && tetris[j+1][i] != 'o'){
                    flag = 1;
                    continue;
                }
            }
        }
        if(achou && (qVariacoesColuna < qvariacoes)) qvariacoes = qVariacoesColuna;
    }

    if(qvariacoes){
        for(int i = l-1; i > 0; i--)
            for(int j = 0; j < c; j++){
                if(tetris[i][j]=='.'&&tetris[i-1][j]=='o')
                    tetris[i][j]='o';
                if(tetris[i][j]=='o'&&tetris[i-1][j]=='.')
                    tetris[i][j]='.';
            }
        for(int j = 0; j < c; j++)
            if(tetris[0][j]=='o')
                tetris[0][j]='.';
    }

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("%c", tetris[i][j]);
        }
        printf("\n");
    }

}