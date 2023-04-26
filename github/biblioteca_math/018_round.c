#include <stdio.h>
#include <math.h>
int main(){
    char op;
    float n;
    int r;
    scanf(" %c",&op);
    scanf("%f",&n);
    switch (op)
    {
    case 'c':
        r = ceil(n);
        break;
    case 'f':
        r = floor(n);
        break;
    case 'r':
        r = round(n);
        break;
    default:
        break;
    }
    printf("%d\n",r);
    return 0;
}