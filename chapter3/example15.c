#include <stdio.h>
int main(void)
{
	int n1,n2;
	printf("输入2个数:");
	printf("整数1:");scanf("%d",&n1);
	printf("整数2:");scanf("%d",&n2);
	printf("它们的差是%d\n",(n1>n2)?n1-n2:n2-n1);
	
	return 0;
}