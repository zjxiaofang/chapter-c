#include <stdio.h>
int main(void)
{
	int a;
	
	printf("请输入一个正数");
	scanf("%d",&a);
	if ( a > 0){

	while (a >= 1){
		printf("%d  ",a--);	
	}
	printf("\n");

	}else
	return 0;
}
