#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int a = rand();
    printf("동전던지기 게임 시작:");
    if(a % 2 == 1) printf("앞면입니다.");
    else printf("뒷면입니다.");
    return 0;
}