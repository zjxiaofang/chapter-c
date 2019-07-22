#include <stdio.h>

#define NUMBER 5

int tensu[NUMBER];

int top(void);

int main(void)
{
    extern int tensu[];
    int i;

    printf("%d名学生分数\n", NUMBER);
    for (int i = 0; i < NUMBER; ++i)
    {
     printf("%d:", i + 1);
        scanf("%d", &tensu[i]);
    }

    printf("最高分=%d\n", top());

    return 0;
}

int top(void)
{
    extern int tensu[];
    int i;
    int max = tensu[0];

    for (int i = 0; i < NUMBER; ++i)
    {
        if(tensu[i] > max)
            max = tensu[i];
    }
    return max;
}