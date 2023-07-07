#include <stdio.h>

void converte_tempo(int tempo, int *hor, int *min, int *seg){
    *seg = tempo % 60;
    tempo /= 60;
    *min = tempo % 60;
    tempo /= 60;
    *hor = tempo % 24;
}

int main(){
   int tempo, h, m, s;
   scanf("%d", &tempo);

   converte_tempo(tempo, &h, &m, &s);

   printf("%d:%d:%d\n", h, m, s);
}