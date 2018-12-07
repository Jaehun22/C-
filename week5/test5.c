#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int a, b=rand()%3;
    scanf("%d",a);
    if(a==0 && b==1 ||a==1 && b==2 || a==2 && b == 0) { 
        printf("%d",a);
        printf("%d",b);
        printf("com win");
    }
    else if( a==b)
        printf("no win");
    else {
        printf("%d",a);
        printf("%d",b);
        printf("people win");
    }
    return 0;
}