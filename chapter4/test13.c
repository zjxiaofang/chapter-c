#include <stdio.h>
int main(void)
{
	int n;
	int sum = 0;
	do{
	printf("请输入一个数：");
	scanf("%d",&n);
	if (n <=1)
		printf("不符合");
	}while(n<=1);

	for(int i=1;i<=n;++i)
		sum+=i;
	printf("结果是：%d\n",sum);

	return 0;
}