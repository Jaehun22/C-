#include <stdio.h>

void max(int* ptrarr[], int size);

int main(){
    int arr[5];
    int* ptrarr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        ptrarr[i] = &arr[i];
    }

    max(ptrarr,5);
    return 0;
}

void max(int* ptrarr[], int size){
    int max = *ptrarr[0];
    for(int i=0;i<size;i++){
        if(max <= *ptrarr[i]) max = *ptrarr[i];
    }
    printf("max : %d\n",max);
}