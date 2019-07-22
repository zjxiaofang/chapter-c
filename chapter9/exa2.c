#include <stdio.h>
int main(void)
{
	char str[4];
	//char str[] = "ABC";
	//char str[] = {'A','B','C','\0'};

	str[0] = 'A';
	str[1] = 'B';
	str[2] = 'C';
	str[3] = 'D';

	printf("字符串str为\"%s\"\n",str );

	return 0;
}