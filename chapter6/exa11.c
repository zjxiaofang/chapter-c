#include <stdio.h>

#define NUMBER 5

int max_of(int v[],int n)
{
    int max= v[0];int i;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] > max) max = v[i];
    }
    return max;

}

int main(void)
{
    int i,eng[NUMBER],mat[NUMBER],max_e,max_m;
    for (i = 0; i < NUMBER; i++)
    {
        printf("[%d]英语：", i + 1); scanf("%d", &eng[i]);
        printf("   数学："); scanf("%d", &mat[i]);
    }
    max_e = max_of(eng, NUMBER);
    max_m = max_of(mat, NUMBER);

    printf("英语的最高分=%d\n", max_e);
    printf("数学的最高分=%d\n", max_m);


    return 0;
}