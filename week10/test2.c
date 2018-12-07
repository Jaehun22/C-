#include <stdio.h>

int get_max(int num1, int num2);

int main(){
    int num1 ,num2;
    scanf("%d %d",&num1,&num2);
    get_max(num1,num2);
    return 0;
}

int get_max(int num1, int num2){
    if(num1>num2)
        printf("%d",num1);
    else if(num1 < num2)
        printf("%d",num2);
    else   
        printf("%d = %d",num1,num2);
}