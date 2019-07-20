#include <stdio.h>
int main(void)
{
	int i,j;
	int h;
	puts("正方形");
	printf("边长:");scanf("%d",&h);

	for(i=1;i<=h;i++){
		for(j=1;j<=h;j++)
			putchar('*');
			puts("");
	}

	return 0;
}