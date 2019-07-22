#include <stdio.h>
#define NUMBER 4

int main(void)
{
    int i;int j = 0;
    char s[NUMBER][128];

    for (i = 0; i < NUMBER; i++) {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);
    }

    for (i = 0; i < NUMBER; i++)

        printf("s[%d] = \"%s\"\n", i, s[i]);
    
    return 0;
}

/*
char buf[1024];
    while(!gets(buf))
    {
        char *substr = 0;
        if(substr = strstr(buf, "$$$"))
        {
            *substr = '\0';
            printf(buf);
            break;
        }
        else
            printf(buf);
    }