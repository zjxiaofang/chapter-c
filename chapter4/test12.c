#include <stdio.h>
int main(void)
{
	int i;
	int num = 0;
	do {
		printf("输入一个正数");
		scanf("%d",&i);
		if (i<=0) {
			printf("您输入的不是正数");
		}
	}while(i<=0);

	while(i>0) {
		i/=10;
		num++;
	}
			printf("位数是:%d",num);

	return 0;
}