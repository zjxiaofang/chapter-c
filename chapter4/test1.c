#include <stdio.h>
int main(void)
{
	int no,retry;
	do{
	printf("输入一个整数");
	scanf("%d",&no);
	if(no == 0)
		puts("该整数为0");
	else if(no>0)
		puts("该整数为正数");
	else
		puts("该整数为负数");
	printf("继续就输入【1】：");
	scanf("%d",&retry);
 	}while(retry == 1);
	return 0;
}