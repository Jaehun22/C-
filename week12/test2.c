#include <stdio.h>

int maxArr(int* arr,int size);

int main(){
    int a[5];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d",a[i]);
    }
    printf("\n");

    printf("max : %d\n",maxArr(a,5));

    return 0;
}

int maxArr(int* arr,int size){
    int max = arr[0];
    for(int i=0;i<size;i++){
        if(max <= arr[i]) max = arr[i];
    }
    return max;
}