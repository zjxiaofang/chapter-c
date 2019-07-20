#include <stdio.h>
int main(void) {
    int i = 1;
    int sum = 0;
    int num, tmp;
    printf("请输入整数个数：");
    scanf("%d", &num);

    for (; i <= num; i++)
    {
    	printf("No.%d:",i);
    	scanf("%d",&tmp);
    	sum+=tmp;
    }

    printf("和为%d\n", sum);
    printf("平均值为%.2f\n",(double)sum/num);

    return 0;
}