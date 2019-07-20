#include <stdio.h>
void swap(int *n1,int *n2)
{
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

void sort3(int *n1,int *n2,int *n3)
{
	if (n1>n2) swap(n1,n2);
	if (n1>n3) swap(n1,n3);
	if (n2>n3) swap(n2,n3);
}

int main(void)
{
	int n1,n2,n3;
	printf("3个数");
	scanf("%d%d%d",&n1,&n2,&n3);
	sort3(&n1,&n2,&n3);
	puts("将两数的值按升序排列。");
    printf("整数A是%d。\n", n1);
    printf("整数B是%d。\n", n2);
    printf("整数C是%d。\n", n3);

	return 0;
}