#include <stdio.h>
#define c 4
int main(void) {
    int i, j;
    int fen1[c][3];
    int fen2[c][3];
    int sum[c][3];

    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < 3; ++j) {
            do {
                printf("第一次分数:");
                scanf("%d", &fen1[i][j]);
                printf("第二次分数:");
                scanf("%d", &fen2[i][j]);

                if ((fen1[i][j]>100 || fen2[i][j] > 100) || (fen1[i][j]<0 || fen2[i][j] < 0))
                puts("重新输入：");

            } while ((fen1[i][j]>100 || fen2[i][j] > 100) || (fen1[i][j]<0 || fen2[i][j] < 0));
        }
    }
    puts("第一次考试分数：");
    for (int i = 0; i < c; ++i)
    {
        for(j = 0;j<3;++j) {
            printf("%4d", fen1[i][j]);
        }
        puts("");
    }
    puts("第二次考试分数：");
     for (int i = 0; i < c; ++i)
    {
        for(j = 0;j<3;++j) {
            printf("%4d", fen2[i][j]);
        }
        puts("");
    }
    puts("和");
    for (int i = 0; i < c; ++i)
    {
        for(j = 0;j<3;++j) {
            sum[i][j] = fen1[i][j] + fen2[i][j];
            printf("%4d", sum[i][j]);
        }
        puts("");
    }

    return 0;
}