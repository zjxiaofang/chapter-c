#include <stdio.h>


void mat_p(const int a[4][3],const int b[4][3])
{
    for (int i = 0; i < 4; ++i)
    {
        printf("{{");
        for (int j = 0; j < 2; ++j)
            printf("%d，",a[i][j]);
            printf("%d} {",a[i][2]);

        for (int j = 0; j < 2; ++j)
            printf("%d，",b[i][j]);
            printf("%d}} ",a[i][2]);
    }

}

int main(void)
{
    int i, j;
    int tensu1[4][3] = {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}};
    int tensu2[4][3] = {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}};
   
    mat_p(tensu1,tensu2);

    return 0;
}