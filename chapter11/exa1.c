#include <stdio.h>

int main(void)
{
    char str[] = "ABCsdsdadsa"; /*用数组实现的字符串*/
    char* ptr[] = {"as","sdf","sd"};
int a[5] = {1, 2, 3, 4, 5};
    printf("str = \"%s\"\n", str);/*str是指向第一个字符的指针*/
    // for printf("ptr = \"%s\"\n", ptr);/*ptr是指向第一个字符的指针*/
	printf("%lu\n",sizeof(a) );
                printf("%lu\n",sizeof(ptr*) );


        printf("%lu\n",sizeof(char) );


    return 0;
}