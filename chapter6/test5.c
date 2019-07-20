
int sumup(int n){
	int sum=0;
	for (int i = 1; i <= n; ++i)
	{
		sum+=i;
	}
	return sum;
}

/*int sumup(int n){
	int sum=0;
	while(n-->0)
		sum+=n+1;
	return sum;
}
*/
#include <stdio.h>
int main(void)
{
	printf("%d\n",sumup(3) );

	return 0;
}