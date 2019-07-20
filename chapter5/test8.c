#include <stdio.h>

#define NUMBER 80

int main(void) {
    int i, j, a, retry,num;
    int tensu[NUMBER];
    int fengbu[11] = {0};

    printf("请输入学生人数：");
    
    do {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("请输入1-%d的数：", NUMBER);
    } while (num < 1 || num > NUMBER);
    
    printf("请输入%d人的分数。\n", num);

    for (i = 0; i < num; i++)
    {
        printf("%2d号:", i + 1);
        do {
            scanf("%d", &tensu[i]);
            if (tensu[i] < 0 || tensu[i] > 100)
                printf("请输入1-100的数：");
        } while (tensu[i] < 0 || tensu[i] > 100);
        fengbu[tensu[i] / 10]++;
    }

    do {
        printf("是否加学生？【Yes……0/NO……9】：");
        scanf("%d", &retry);
        if(retry!=0) break;
        do {
            printf("输入成绩：");
            scanf("%d", &a);
            if (a < 0 || a > 100)
                puts("请不要输入非正整数！！！");
        } while (a < 0 || a > 100);
        fengbu[a / 10]++;
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