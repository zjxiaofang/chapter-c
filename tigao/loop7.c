#include <stdio.h>
int main(void)
{
	int j = 0;
	for (int i = 8; i < 884813000; i*=2){
		j++;
	}
	printf("%d\n", j);

	return 0;
}