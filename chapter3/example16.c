#include <stdio.h>
int main(void)
{
	int n1,n2,max,min;
	puts("请输入2个数：");
	printf("第一个数是:");scanf("%d",&n1);
	printf("第二个数是:");scanf("%d",&n2);
	if (n1 > n2) {
		max = n1;
		min = n2;
	}else {
		max = n2;
		min = n1;
	}
	printf("较大的数是%d\n",max);
	printf("较小的数是%d\n",min);

	return 0;
}