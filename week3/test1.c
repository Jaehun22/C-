#include <stdio.h>
#define D_C_W 1100

int main(){
        printf("달러화 금액을 입력하시오: ");
        int a;
        scanf("%d",&a);
        printf("달러화 %d달러는 %d입니다.",a,a*D_C_W);
        return 0;

}