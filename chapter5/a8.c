#include <stdio.h>

int main(void) {
    int i, j, a, retry;
    int fengbu[11] = {0};
    do {
        do {
            printf("输入成绩：");
            scanf("%d", &a);
            if (a < 0 || a > 100)
                puts("请不要输入非正整数！！！");
        } while (a < 0 || a > 100);

        fenbu[a / 10]++;
        printf("是否继续执行？【Yes……0/NO……9】：");
        scanf("%d", &retry);

    } while (retry == 0);

    puts("\n---分布图---");
    for (int i = 0; i <= 9; ++i) {
        printf("%2d-%2d", i * 10, i * 10 + 9);
        for (j = 0; j < fengbu[i]; ++j) {
            printf("*");
        }
        puts("");
    }

    printf("  100:");
    for (i = 0; i < fengbu[10]; ++i) {
        printf("*");
    }
    puts("");

    return 0;
}