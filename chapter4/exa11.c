#include <stdio.h>
int main(void)
{
	int num,i;
	printf("请输入一个整数：");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
		printf("%d  ",i);
	puts("");

	return 0;
}