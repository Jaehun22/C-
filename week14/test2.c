#include <stdio.h>
#include <string.h>

char *m_strlen(char *str1,char *str2);

int main(){
    char a[80],b[80];
    scanf("%s %s",a,b);
    // if(a=='0' || b=='0') break;
    int c = strlen(a);
    int d = strlen(b);
    if(c>d) printf("strlen 사용 : %s\n",a);
    else printf("strlen 사용 : %s \n",b);

    printf("m_strlen 사용 : ");

    printf("%s\n",m_strlen(a,b));

    return 0;
}

char *m_strlen(char *str1,char *str2){
    int cnt1 =0, cnt2 =0;
    char *a = str1, *b = str2;
    while(*str1 != '\0'){
        cnt1 ++;
        str1 ++;
    }
    while(*str2 != '\0'){
        cnt2 ++;
        str2 ++;
    }
    if(cnt1 >= cnt2) return a;
    else return b;
}