#include <stdio.h>
#include <string.h>

void m_strtok(char* str);

int main(){
    char a[100];
    printf("나누려는 문자를 입력하시오 : ");
    scanf("%s",a);
//    int a_l = strlen(a);

    m_strtok(a);

}

void m_strtok(char* str){
    while(*str != '\0'){
        if(*str == ' ' || *str ==',' || *str == '!' || *str == '?'){
            printf("\n");
        }

        else printf("%c",*str);
        
        str++;
    }
    
}