#include <stdio.h>

void sum2(int* arr1,int* arr2,int* arr3,int size);

int main(){
    int a1[5], a2[5], a3[5];
    for(int i=0;i<5;i++) {
        scanf("%d",a1[i]);
    }
    for(int j=0;j<5;j++) {
        scanf("%d",a2[j]);
    }

    sum2(a1,a2,a3,5);

    return 0;
}

void sum2(int* arr1,int* arr2,int* arr3,int size){
    for(int i=0;i<size;i++) arr3[i] = arr1[i] +arr2[i];

    printf("sum2 :");
    for(int i=0;i<size;i++) printf("%d ",arr3[i]);
    printf("\n");
}