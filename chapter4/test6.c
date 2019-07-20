#include <stdio.h>
int main(void) {
    int a;
    int i = 2;
    printf("输入一个正数:");
    scanf("%d", &a);
    if (a > 2) {

        while (i <= a) {
            printf("%d  ", i );
            i = i + 2;
        }
        printf("\n");

    }
    return 0;
}