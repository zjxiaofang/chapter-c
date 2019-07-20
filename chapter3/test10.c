#include <stdio.h>
int main(void)
{
	int a,b,c;
	printf("输入三个整数:");
	scanf("%d%d%d",&a,&b,&c);
	printf("三个整数为%d,%d,%d\n",a,b,c);

	if (a==b) {
		if (a ==c)
			puts("三个数相等");
		else 
			puts("两个数相等");

	}else {
		if (a ==c || b ==c) 
			puts("两个数相等");
		else 
			puts("三个数不等");
	}
	
	return 0;
}