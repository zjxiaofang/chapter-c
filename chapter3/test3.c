#include <stdio.h>
int main(void)
{
	int a;
	printf("请输入一个整数");
	scanf("%d",&a);
	if (a >=0) 
		printf("它的绝对值是%d\n",a);
	else
		printf("它的绝对值是%d\n",-a);

	return 0;
}