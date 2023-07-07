#include <stdio.h>

// FILE *fopen(const char* nomearquivo, const char* modo);

// r -> read
// w -> write

int main(int argc, char *argv){
    FILE *pa; // ponteiro para arquivo(FILE)
    char ch;
    pa = fopen("arq.txt", "w"); 
    if(pa == NULL) printf("Arquivo não pode ser aberto.\n"); // se for nulo, imprime erro
    else{
        while(getc(pa) != EOF);     
        do{
            ch = getchar();
            putc(ch, pa);
        }while(ch != '$');
    }

}