#include <stdio.h>

int main(){
        int a,b,n;
        scanf("%d",&n);
        printf("n번째 줄까지 차례대로 별을 출력. %d\n",n);
        for(a=0;a<n;a++){
            for(b=0;b<=n+a;b++){
                if( b < n-a ){
                    printf(" ");
                }
                else{
                    printf("*");
                }
            }
            printf("\n");
        }
        return 0;
}
