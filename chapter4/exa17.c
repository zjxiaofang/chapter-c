#include <stdio.h>
int main(void)
{
	int i,j;
	int height,width;
	puts("长方形");
	printf("长:");scanf("%d",&height);
	printf("宽:");scanf("%d",&width);

	for(i=1;i<=height;i++){
		for(j=1;j<=width;j++)
			putchar('*');
			puts("");
	}

	return 0;
}