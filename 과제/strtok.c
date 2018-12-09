#include <stdio.h>
#include <string.h>

void m_strtok(char* str1,char* str2);

int main(){
    char a[30], b[5];
    printf("나누려는 문자를 입력하시오 : ");
    scanf("%s",a);
    printf("나누는 기준을 입력하시오 : ");
    scanf("%s",b);


    m_strtok(a,b);

    return 0;
}

void m_strtok(char* str1,char* str2){
    int  cnt[30];
    char *ch = str1;

 /*   while(*str1 != '\0'){
        for(int i=0;i<s_l;i++){
            while(*str1 != *str2){
             str1++;
            
            }
            cnt[i] = *str1;
        }
        break;
    }
*/

    for(int i=0;*str1 == '\0';i++){
        while(*str1 != *str2){
             str1++;
            
            }
            cnt[i] = *str1;
    } 

    char* p_cnt;
    int p_cnt_c =0;
    while(*p_cnt !='\0'){
        p_cnt++;
        p_cnt_c++;
    }
    
    for(int z=0;z<p_cnt_c;z++){
        printf("%s",ch[cnt[z]]);
    }

}

