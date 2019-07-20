#include <stdio.h>
int main(void)
{
	int i;
	do {
		printf("请输入一个整数：");
		scanf("%d",&i);
		if (i <= 0)
			puts("");
	}while(i<=0);
	
	printf("输入的整数为：");
	while(i > 0){
		printf("%d",i%10);
		i/=10;
	}
	printf("%d  ",i);

	return 0;
}