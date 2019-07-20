#include <stdio.h>
int main(void)
{
	int a,b;
	printf("请输入2个数:");
	scanf("%d%d",&a,&b);
	printf("输入的2个数为:%d,%d\n",a,b);

	if(a==b)
		puts(" 输入的2个数相同");
	else
		puts("输入的2个数不同");

	return 0;
}