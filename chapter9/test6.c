#include <stdio.h>

int str_chnum(const char s[], int c) {
    int i = 0, num = 0;

   while(s[i]){
   	if (s[i]=='c') num++;
   	i++;
   }
    return num;
}


int main(void) {
    char str[128];
    printf("输入一个字符串"); scanf("%s", str);
    printf("%d\n", str_chnum(str, 'c') );
}