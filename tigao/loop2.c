#include <stdio.h>
int main(void)
{
	int i,j,x,y;
	printf("数1:");scanf("%d",&x);
	printf("数2:");scanf("%d",&y);
	for (int i = 2; i <= x*y; ++i)
	{
		if(i%x==0 && i%y==0){
			printf("最小公倍数是%d\n",i);
			break;
		}
	}
	for (int i = (x<y)?x:y; i >0 ; i--)
	{
		if(x%i==0 && y%i==0){
			printf("最大公约数是%d\n",i);	
			break;
	}
	}
	return 0;
}