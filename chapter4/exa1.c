#include <stdio.h>
int main(void) {
    int retry;
    do {
    	int a;
        printf("请输入一个数:");
        scanf("%d",&a);

        if ( a % 2)
        	puts("奇数");
        else
        	puts("偶数");

        printf("需要重复一次吗？[yes...0/no...9]");
        scanf("%d",&retry);

    } while (retry==0);

    return 0;
}