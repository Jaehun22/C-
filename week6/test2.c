#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int a,cnt;
    scanf("%d",&a);
    int b = rand() % 10;
    do
    {
        cnt ++;
        printf("up\n");
        scanf("%d",a);
    }while(a>b);
    do
    {
        cnt ++;
        printf("down\n");
        scanf("%d",&a);
    }while(a<b);
    printf("good, #d\n",cnt);
    return 0;
}