#include <stdio.h>
int main(void)
{
	int month;

	printf("请输入月份：");
	scanf("%d",&month);

	if (month >=3 && month <=5)
		printf("%d是春季。\n",month);
	else if (month >=6 && month <=8)
		printf("%d是夏季。\n",month);
	else if (month >=9 && month <=11)
		printf("%d是秋季。\n",month);
	else if (month == 1 || month ==2 ||month ==12)
		printf("%d是冬季。\n",month);
	else 
		printf("没有");

	return 0;
}