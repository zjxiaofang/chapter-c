#include <stdio.h>
int main(void) {
    int i;
    int x[5];
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        printf("%-2d号：", i+1);
        scanf("%d", &x[i]);
        sum += x[i];
    }
    printf("总分:%5d\n", sum);
    printf("平均分:%5.1f\n", (double)sum / 5 );

    return 0;
}