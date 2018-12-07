#include <stdio.h>

int main(){
    printf("매달 저축 금액을 입력하시오:");
    double a;
    scanf("%lf",&a);
    printf("30년후 재산: %lf", a*30*12);
    return 0;
}