#include <stdio.h>
int main(void) {
    int a, b, c, max, min;
    printf("输入3个数：");
    scanf("%d%d%d", &a, &b, &c);
    printf("输入的3个数为：%d,%d,%d\n", a, b, c);
    max = a;
    if ( b > a ) max = b;
    if (c>max) max = c;
    min = a;
    if (b < a)min = b;
    if (c<min) min = c;
    printf("3个数按序排列为：%d,%d,%d\n", min, a+b+c-min-max, max);
    return 0;
}