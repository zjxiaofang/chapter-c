#include <stdio.h>
int main(void)
{
	int i;
	int sum = 0;
	printf("钱");
	scanf("%d",&i);

	for(;i>2;i/=3)
		sum+=i/3;
	printf("%d\n",sum );
	
	return 0;
}