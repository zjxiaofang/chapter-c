#include <stdio.h>

int main(void) {
    int a, b;
    printf("请输入2个整数：");
    scanf("%d%d", &a, &b);
    printf("输入的2个数分别为%d,%d\n",a,b);

    if (a != b) puts("两个数不相等");
    	else puts("两个数相等");

        return 0;
}