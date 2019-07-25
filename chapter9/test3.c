#include <stdio.h>
#include <string.h>
#define NUMBER 4

int main(void)
{
    int i;int end;
    char s[NUMBER][128];
    char str[] = "$$$$$";

    for (int i = 0; i < NUMBER; ++i)
    {
        printf("输入%d字符串",i);
        scanf("%s",s[i]);
        if (strcmp(s[i],str)){
            end = i;
        }
    }
    for (i = 0; i < end; i++)
        printf("s[%d] = \"%s\"\n", i, s[i]);
    return 0;
}

