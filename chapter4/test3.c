#include <stdio.h>
int main(void)
{
	int a;
	
	printf("请输入一个正数");
	scanf("%d",&a);

	while (a >= 0){
		printf("%d  ",a);
		a--;
	}
	printf("\n");

	return 0;
}
//题目看不懂