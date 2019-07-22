#include <stdio.h>
int main(void) {
    int a[4][3];
    int b[3][4];
    int c[4][4];
    int i, j, k, num;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("第%d行%d列为", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
        puts("");
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("第%d行%d列为", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
        puts("");
    }
    puts("第一个数组:");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j)
            printf("%5d  ", a[i][j]);
        puts("");
    }
    puts("第二个数组");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j)
            printf("%5d  ", a[i][j]);
        puts("");
    }
    puts("乘积的数组");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            for (int k = 0; k < 3; ++k) 
                c[i][j] = a[i][k] * b[k][j];
            printf("%5d  ", c[i][j]);
        }
        puts("");
    }

    return 0;
}