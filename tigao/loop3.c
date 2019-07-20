#include <stdio.h>
int main(void)
{
	int i,count;
	printf("输入一个数");
	scanf("%d",&count);
	for (i = 2; i < count; ++i)
	{
		if(count%i==0)
			puts("不是质数");
		else 
			puts("是质数");
	}

	return 0;
}