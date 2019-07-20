#include <stdio.h>

#define count 100

int main(void)
{
	int i,x[count],num;

	do {
		printf("数组个数:");
		scanf("%d",&num);
		if(num<1||num>count)
			printf("重输");
	}while(num<1||num>count);

	printf("元素个数为%d\n",num);

	for (int i = 0; i < num; ++i)
	{

		printf("第%d的值是",i+1);
		scanf("%d",&x[i]);
	}

	printf("{");

	for (int i = 0; i < num-1; ++i)
	{
		printf("%d , ",x[i]);
	}
	printf("%d}\n个数为%d\n",x[num-1],num);

	return 0;
}