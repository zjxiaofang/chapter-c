#include <stdio.h>

char *str_chr(char *s, char c) {
    while (*s) {
        if (*s == 'c')
            return s;
        s++;
    }
    return NULL;
}

int main(void) {
    
     printf("123");scanf("%s",s);
     printf("2");scanf("%s",&c);
    // printf("输入字符串"); scanf("%s", s);
    // printf("输入字符"); scanf("%c", &c);
   // printf("请输入字符串："); scanf("%s", s);
   // printf("请输入目标字符："); scanf(" %c", &c);


    printf("%s中%c的指针为%p\n", s, c, str_chr(s, c) );
    return 0;
}


    //printf("请输入字符串："); scanf("%s", s);
    //printf("请输入目标字符："); scanf(" %c", &c);
