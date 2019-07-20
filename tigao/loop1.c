#include <stdio.h>
int main(void)
{
	int i,n,temp;
	int sum=0;
	printf("需要多少个个整数");
	scanf("%d",&n);

	for (int i = 1; i <= n; ++i)
	{
		printf("NO.%d:",i );
		scanf("%d",&temp);
		sum+=temp;
	}
	printf("和%d\n", sum);

	return 0;
}