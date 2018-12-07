#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d %d",&a,&b);
    while(b!=0){
        int r;
        r = a%b;
        a = b;
        b = r;
    }
    printf("%d",a);
    return 0;
}