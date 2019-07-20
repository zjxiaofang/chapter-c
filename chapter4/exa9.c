#include <stdio.h>
int main(void)
{
	int i = 0;
	int sum = 0;
	int a,temp;

	printf("输入多少个整数");
	scanf("%d",&a);

	while(i < a) {
		printf("NO.%d:", ++i);
		scanf("%d",&temp);
		sum+=temp;
	}
	printf("和为%d,均值为%.2f\n",sum,(double)sum/a );

	return 0;
}