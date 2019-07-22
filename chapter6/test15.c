#include <stdio.h>

void put_count()
{
	static int i;
	printf("put_count:第%d次\n",++i);
}
int main(void)
{
	 put_count();
	 put_count();
	 put_count();

	return 0;
}