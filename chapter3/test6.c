#include <stdio.h>
int main(void)
{
	int a,b,c,min;
	printf("输入三个数");
	scanf("%d%d%d",&a,&b,&c);
	min = a;
	if(b < min) min = b;
	if(c < min) min = c;
	printf("三个数中的最小值是%d\n",min);
	return 0;
}