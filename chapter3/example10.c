#include <stdio.h>
int main(void) {
    int no;
    printf("请输入一个正数：");
    scanf("%d", &no);

    if (no > 0) {
        if (no % 2)
            puts("该正数为奇数");
        else
            puts("该正数为偶数");
    } else
        puts("您输入的不是正数");

    return 0;
}