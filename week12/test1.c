#include <stdio.h>

void swap(int* num1,int* num2);

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("enter num1 : %d, num2 : %d \n",a,b);

    swap(&a,&b);
    printf("function after switch -> num1 : %d, num2 : %d\n",a,b);
    return 0;
}

void swap(int* num1,int* num2){
    int tmp;
    tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}