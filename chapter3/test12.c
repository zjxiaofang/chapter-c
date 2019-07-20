#include <stdio.h>
int main(void)
{
	int no;
	printf("请输入1个整数:");
	scanf("%d",&no);
	switch (no % 2) {
		case 0:puts("您输入的是一个偶数");break;
		case 1:puts("您输入的是一个奇数");break;

	}

	return 0;
}