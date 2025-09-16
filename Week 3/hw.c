//hw.c
#include <stdio.h>
#include <math.h>
#include "calc.h"

int main(void) {
    double P;
        P= 1000000;      
        double r;
        r= 0.10;
    int n = 12;              
    int t = 40;             

  
    double A = P * (1 + r / n, n * t);

    printf("40년 후의 투자금은 약 %.f원입니다.\n", A);

    return 0;
}
