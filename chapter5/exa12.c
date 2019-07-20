#include <stdio.h>

#define NUMBER 80

int main(void) {
    int i, j, num;
    int tensu[NUMBER];
    int bunpu[11]={0};

    do {
        printf("请输入学生人数");
        scanf("%d", &num);
        if (num > NUMBER ||num < 1)
            printf("重新输入"); 
    } while (num > NUMBER||num < 1);

    for (int i = 0; i < num; ++i) {
        do {
            printf("第%d人的分数：", i + 1 ); scanf("%d", &tensu[i]);
            if (tensu[i] > 100 || tensu[i] < 0) {
                puts("重输");
            }
        } while (tensu[i] > 100 || tensu[i] < 0);
        bunpu[tensu[i] / 10]++;
    }

    puts("\n——————分布图——————");
    printf(" 100: ");
    for (int i = 0; i < bunpu[10]; ++i)
        printf("*"); puts("");

    for (int i = 9; i >= 0; --i) {
        printf("%2d-%2d", 10 * i, 9 + 10 * i );
        for (int j = 0; j < bunpu[i]; ++j)
            printf("*"); puts("");
    }

    return 0;
}