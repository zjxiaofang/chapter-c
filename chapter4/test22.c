#include <stdio.h>
int main(void)
{
	int i,j,h1,h2,height,width;
	printf("长方形");
	scanf("%d%d",&h1,&h2);
	if(h1<h2){
		height = h1;
		width  = h2;
	}else {
		height = h2;
		width = h1;
	}

	printf("长:%d\n",height);
	printf("宽:%d\n",width);

	for(i=1;i<=height;i++){
		for(j=1;j<=width;j++)
			putchar('*');
			puts("");
	}

	return 0;
}