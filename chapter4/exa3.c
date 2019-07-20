#include <stdio.h>
int main(void)
{
	int sum = 0;
	int count = 1;
	int retry ;

	do {
		int t;
		printf("请输入一个数");
		scanf("%d",&t);
		sum+=t;
		count+=1;
		printf("要继续就输入1" );
		scanf("%d",&retry);
	}while (retry == 1);
	printf("和为%d均值为%.2f\n",sum,(double)sum/count);

	return 0;
}