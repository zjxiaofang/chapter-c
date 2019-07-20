#include <stdio.h>
int main(void) {
    int a, b, c, min, max;
    do {
        printf("输入3个正整数:");
        scanf("%d%d%d",&a,&b,&c);
        if (a <= 0 || b <= 0 || c <= 0)
            printf("不是正整数 ");
    } while (a <= 0 || b <= 0 || c <= 0);

    printf("三个整数分别为%d,%d,%d\n",a,b,c);
    max = ((a>b)?a:b>c)?((a>b)?a:b):c;
    min = ((a<b)?a:b<c)?((a<b)?a:b):c;
    printf("从大到小：%d,%d,%d\n", min,a+b+c-min-max,max);

    return 0;
}