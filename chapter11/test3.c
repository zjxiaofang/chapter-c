#include <stdio.h>
char* str2(char* str,char* tmp)
{
    char *t = str;
    while (*str++ = *tmp++);
    return t;
       
}

int main(void)
{
    char str[128];
    char temp[128];
    printf("复制的是" );
    scanf("%s",temp);

    printf("复制后为\"%s\"\n",str2(str,temp) );

    return 0;
}

