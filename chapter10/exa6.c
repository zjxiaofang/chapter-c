#include <stdio.h>

void swap(int *px,int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

int main(void)
{
	int na,nb;

	puts("2个数");
	printf("整数a：");scanf("%d",&na);
	printf("整数b：");scanf("%d",&nb);
	swap(&na,&nb);

	puts("互换的值");
	printf("整数A是%d。\n", na);
    printf("整数B是%d。\n", nb);

	return 0;
}