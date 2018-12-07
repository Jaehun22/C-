#include <stdio.h>

/*void get_lcm_gcd(int x,int y,int* p_lcm,int* p_gcd){
    int max;
    if(x>=y) max = x;
    else max=y;
    for(int i=max;i<=x*y;i++){
        if(i%x == 0 || i%y == 0){
            *p_lcm =i;
            break;
        }
    }
    while(y!=0){
        *p_gcd =x%y;
        x = y;
        y = *p_gcd;
    }
    printf("%d %d \n",x,*p_lcm);
}

int main(){
    int a,b,lcm=0,gcd=0;
    scanf("%d %d",&a,&b);
    get_lcm_gcd(a,b,&lcm,&gcd);
} */


void get_lcm_gcd(int x,int y, int* p_lcm, int* p_gcd);

int main(){
    int a,b,lcm,gcd;
    scanf("%d %d",&a,&b);
    printf("a : %d, b : %d \n",a,b);

    get_lcm_gcd(a,b,&lcm,&gcd);
    return 0;
}


void get_lcm_gcd(int x,int y,int* p_lcm,int* p_gcd){
    int lcm = x*y;
    int tmp;
    while(y != 0){
        tmp =x%y;
        x = y;
        y = tmp;
    }
    *p_gcd = x;
    *p_lcm = lcm / x;

    printf("p_lcm : %d, P_gcd : %d \n",*p_lcm,*p_gcd);
} 