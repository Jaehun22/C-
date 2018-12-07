#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    while(1){
        int a=rand()%10,b=rand()%10,c=rand()%19;
        if(a+b != c) {
            printf("%d + %d = %d\n",a,b,c);
            printf("no");
        }
        else {
            printf("%d + %d = %d\n",a,b,c);
            printf("good");
            break;
        }
    }
    return 0;
}