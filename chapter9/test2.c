#include <stdio.h>
int main(void)
{
	char s[] = "ABC";
		printf("%.0s\n", s);

	char a[] = "";
	for (int i = 0; i < 3; ++i)
	{
		s[i]=a[i];
	}
	printf("%s\n", s);
	printf("%lu\n",sizeof(a) );

	return 0;
}