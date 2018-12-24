#include <stdio.h>
#include <string.h>

void m_strtok(char* str1,char* str2);

int main(){
    char a[100],b[3];
    printf("나누려는 문자를 입력하시오 : ");
    scanf("%s",a);
    printf("나누는 기준이 되는 문자를 입력하시오 : ");
    scanf("%s",b);
//    int a_l = strlen(a);

    m_strtok(a,b);

}

void m_strtok(char* str, char* str2){
    while(*str != '\0'){
        if(*str == *str2){
            printf("\n");
        }

        else printf("%c",*str);
        
        str++;
    }
    
}
