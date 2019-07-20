#include <stdio.h>
#define NUM 80
int main(void) {
    int retry, i, j,a;
    int bunpu[11] = {0};

    do {
        do {
            printf("输入成绩：");
            scanf("%d", &a);
            if (a < 0 || a > 100)
                puts("请不要输入非正整数！！！");
        } while (a < 0 || a > 100);

        bunpu[a / 10]++;
        printf("是否继续执行？【Yes……0/NO……9】：");
        scanf("%d", &retry);
        
    } while (retry == 0);
        
        puts("\n---分布图---");
        printf("  100:");
        for (j = 0; j < bunpu[10]; j++)
            putchar('*');
        putchar('\n');

        for (i = 9; i >= 0; i--) {
            printf("%2d-%2d:", i * 10, i * 10 + 9);
            for (j = 0; j < bunpu[i]; j++)
                putchar('*');
            putchar('\n');
        }

        

    return 0;
}