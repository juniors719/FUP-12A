#include <stdio.h>
int getIndex(char alfabeto[], char caractere){
    for(int i = 0; i < 26; i++){
        if(caractere == alfabeto[i]) return i;
    }
}
int main(){
    char alfabeto[] = "abcdefghijklmnopqrstuvwxyz";
    char op1, op2, operando;
    scanf("%c %c %c", &op1, &operando, &op2);
    int num1 = getIndex(alfabeto, op1);
    int num2 = getIndex(alfabeto, op2);
    int res = (operando == '+') ? num1 + num2 : num1 - num2;
    if(res > 26) res %= 26;
    if(res < 0) res += 26;
    printf("%c\n", alfabeto[res]);
}