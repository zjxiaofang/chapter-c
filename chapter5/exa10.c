#include <stdio.h>
int main(void) {
#define number 5
    int i;
    int sum = 0;
    int tensu[number];
    for (int i = 0; i < number; ++i) {
        printf("%-2d号:", i + 1);
        scanf("%d", &tensu[i]);
        sum += tensu[i];
    }
    printf("和为：%3d\n", sum);
    printf("平均数为：%3.2f\n",(double)sum/number);

    return 0;
}