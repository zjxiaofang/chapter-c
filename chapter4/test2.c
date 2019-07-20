#include <stdio.h>
int main(void)
{
	int a,b;
	int sum = 0;
		printf("请输入2个整数:");
		scanf("%d%d",&a,&b);
		printf("输入的2个数为%d,%d\n", a,b);

		if(b-a>1) {
			int t = a;

			do {
				sum += ++t;
			}	
		 	while(t<b-1);

		 	printf("和是%d\n",sum);
		 }

		 else if (b -a < 1){
		 	int t = b;

		 	do {
				sum += ++t;
			}	
		 	while(t<a-1);

		 	printf("和是%d\n",sum);

		 }else 
		 	puts("和是0");

	return 0;
}