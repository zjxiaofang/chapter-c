#include <stdio.h>
int main(void) {
    int i, no,retry;
    do {

        do {
            printf("请输入一个正整数：");
            scanf("%d", &no);
            if (no <= 0)
                puts("请不要输入负数");
        } while (no <= 0);

        for (i = 1; i <= no; i++)
            putchar('*');
        puts("");

        printf("继续输入0");
        scanf("%d", &retry);

    } while(retry==0);

    return 0;
}