#include <stdio.h>

int main(void)
{
    char str[] = "ABC"; /*用数组实现的字符串*/
    char *ptr = "123";  /*用指针实现的字符串*/

    printf("str = \"%s\"\n", str);/*str是指向第一个字符的指针*/
    printf("ptr = \"%s\"\n", ptr);/*ptr是指向第一个字符的指针*/
    printf("%lu\n",sizeof(ptr) );
            printf("%lu\n",sizeof(str) );

        printf("%lu\n",sizeof(char) );


    return 0;
}