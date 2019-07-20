#include <stdio.h>
int main(void) {
    int i = 0;
    int count;
    printf("输入整数个数:");
    scanf("%d", &count);
    
    if (count > 0) {

        while (i++ < count) {
            printf("*\n");
        }

    }
    return 0;
}