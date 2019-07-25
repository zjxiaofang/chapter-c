#include <stdio.h>
int main(void)
{
	int i;
	char s[3][128];
for (int i = 0; i < 3; ++i)
{
	printf("s[%d]的值",i);
	scanf("%s",s[i]);
}
	return 0;
}