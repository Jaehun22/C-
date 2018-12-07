#include <stdio.h>

void arr_reverse(int* arr, int size){
    for(int i=0;i<5/2;i++){
        int tmp;
        tmp = arr[i];
        arr[i] = arr[4-i];
        arr[4-i] = tmp;
    }

}

int mian(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter 5 elements : %d %d %d %d %d \nmain's before reverse arr: %d %d %d %d %d",arr[0],arr[2],arr[3],arr[4],arr[5],arr[0],arr[2],arr[3],arr[4],arr[5]);
    printf("function's before reverse arr : %d %d %d %d %d",arr[0],arr[2],arr[3],arr[4],arr[5]);
    arr_reverse(arr,5);
    printf("function's after reverse arr : %d %d %d %d %d",arr[0],arr[2],arr[3],arr[4],arr[5]);
    printf("main's after reverse arr : %d %d %d %d %d",arr[0],arr[2],arr[3],arr[4],arr[5]);
    return 0;
}

