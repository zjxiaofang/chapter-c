#include <stdio.h>
int main(void)
{
	int a;
	
	printf("请输入一个正数");
	scanf("%d",&a);

	while (a >= 0){
		printf("%d  ",a--);	
	}
	printf("\n");

	return 0;
}
