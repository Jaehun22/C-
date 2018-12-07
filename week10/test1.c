#include <stdio.h>

int get_integer();

int main(){
    int a,b;
    printf("a = ? , b = ?\n");
    scanf("%d %d",&a,&b);
    printf("sum = ");
    get_integer(a,b);
}

int get_integer(int a,int b){
        int sum=0;
        sum = a + b;
        printf("%d",sum);
}