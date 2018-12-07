#include <stdio.h>

int main(){
    printf("현재 가지고있는 돈:");
    int a;
    scanf("%d",&a);
    printf("최대로 살 수 있는 캔디의 개수:%d",a/300);
    printf("캔디 구입 후 남은 돈: %d",a%300);
    return 0;
}