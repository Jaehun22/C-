#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("%lf년 후의 원리금 = %lf",c,a*pow((1+b),c));
    return 0;
}
