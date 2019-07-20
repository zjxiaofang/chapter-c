#include <stdio.h>
int main(void)
{
	int n1,n2,cha;
	printf("输入2个数:");
	printf("整数1:");scanf("%d",&n1);
	printf("整数2:");scanf("%d",&n2);
	if(n1 > n2)
		cha = n1 -n2;
	else
		cha = n2 - n1;
	printf("它们的差是%d\n",cha);
	
	return 0;
}