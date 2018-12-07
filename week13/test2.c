#include <stdio.h>

void sum(int* arr,int size);

int main(){
    int arr[5];
    for(int i=0;i<5;i++) scanf("%d",&arr[i]);

    sum(arr,5);
    return 0;
}

void sum(int* arr,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum += arr[i];
    }
    printf("sum : %d\n",sum);
}