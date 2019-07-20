#include <stdio.h>
int main(void)
{
    int i,count;
    printf("显示多少个*：");scanf("%d",&count);

    for (int i = 1; i < count; ++i)
    {
        putchar('*');
        if(i%5==0)
            puts("");
    }
            putchar('*');
            if(i%5!=0)
            puts("");

    return 0;
}
