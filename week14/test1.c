#include <stdio.h>
#include <string.h>

void m_strcpy(char * str1,char *str2);

int main(){
    char a[10],b[10];
    scanf("%s %s",a,b);
    printf("첫번째 문자열은 : %s \n두번째 문자열은 : %s",a,b);
    
    m_strcpy(b,a);
    printf("복사하기\n");
    printf("첫번째 문자열은 : %s \n두번째 문자열은 : %s",a,b);

    return 0;
}

void m_strcpy(char *str1,char *str2){
    while(*str2 != '\0'){
        *str1 == *str2;
        str1++;
        str2++;
    }
}