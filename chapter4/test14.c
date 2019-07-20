#include <stdio.h>
int main(void)
{
	int i,count;
	int j=1;
	printf("请输入一个数：");
	scanf("%d",&count);
	for (int i = 0; i < count; ++i){
		printf("%d",j);
		j++;
		if (j>9)
		j-=10;	
	}
	printf("\n");

	return 0;
}