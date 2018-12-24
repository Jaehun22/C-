#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    printf("\n");

    for(int n=2;n<=a;n++){
        for(int i=0;i<n;i++){
            for(int j=0;j<=(a+i)*3;j++){
                if(j >= (a-i)*3 && j <= (a+i)*3) printf("*"); 
                else printf(" ");
            }
            printf("\n");
        }
        // printf("\n");    
    }
    for(int i=0;i<=a/2;i++) {
        for(int j=0;j<=a*3;j++){
            if(j == a*3) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    printf(" Merry Christmas Geunhui");
}