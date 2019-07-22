#include <stdio.h>

void mat_add(const int a[4][3],const int b[4][3],int sum[4][3])
{
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 3; ++j)
            sum[i][j] = a[i][j] + b[i][j];
}

void mat_print(const int a[4][3])
{
    printf("{");
    for (int i = 0; i < 3; ++i)
    {
        printf("{");
        for (int j = 0; j < 2; ++j)
            printf("%d，",a[i][j]);
            printf("%d",a[i][2]);
            printf("},");

    }
    printf("{");
        for (int j = 0; j < 2; ++j)
            printf("%d，",a[3][j]);
            printf("%d",a[3][2]);
            printf("}");

    printf("}");
}

int main(void)
{
    int i, j;
    int tensu1[4][3] = {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}};
    int tensu2[4][3] = {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}};
    int sum[4][3];

    mat_add(tensu1,tensu2,sum);

    printf("第一次考试的分数"); mat_print(tensu1);puts("");

    printf("第二次考试的分数"); mat_print(tensu2);puts("");

    printf("总分"); mat_print(sum); puts("");

    return 0;
}