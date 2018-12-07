#include <stdio.h>

void maxMin(int* arr,int size,int* max,int* min);

int main(){
    int arr[5];
    int a,b;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        printf("%d ",arr[i]);
    }
    printf("\n");

    maxMin(arr,5,&a,&b);

//    printf("max : %d \n",a);
//    printf("min : %d \n",b);
    return 0;
}

void maxMin(int* arr,int size,int* max,int* min){
    *max = arr[0];
    *min = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i] >= *max){
            *max = arr[i];
        }
        if(arr[i] <= *min){
            *min = arr[i];
        }
    }
    printf("max : %d \n",*max);
    printf("max : %d \n",*min);
}
