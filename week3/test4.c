#include <stdio.h>
#define PI 3.14

int main(){
    double a;
    printf("원의 반지름:");
    scanf("%lf",&a);
    printf("원의 면적: %lf",a * a * PI);
    return 0;
}