#include <stdio.h>
int main(void)
{
	int no;
	printf("请输入1个整数:");
	scanf("%d",&no);

	if (no % 2)
		puts("您输入的是一个奇数");
	else 
		puts("你输入的是一个偶数");

	return 0;
}