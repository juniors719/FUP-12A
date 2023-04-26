#include <stdio.h>
int main(){
    int hD, mD, sD;
    int hA, mA, sA;
    int hR=0, mR=0, sR=0;
    scanf("%d %d %d", &hD, &mD, &sD);
    scanf("%d %d %d", &hA, &mA, &sA);
    if(sA < sD){
        sA += 60;
        mD++;
    }
    sR = sA - sD;
    if(mA < mD){
        mA += 60;
        hD++;
    }
    mR = mA - mD;
    if(hA < hD)
        hA += 24;
    hR = hA - hD;
    printf("%02d %02d %02d\n", hR, mR, sR);
}