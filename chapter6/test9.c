#include <stdio.h>

void rev_intary( int v[],int n){
	int temp,i;
	for (int i = 0; i < n/2; ++i)
	{
		temp = v[i];
		v[i] = v[n-i-1];
		v[n-1-i]=temp;
	}	
}

void print_array(const int v[],int n)
{
	printf("{");
	for (int i = 0; i < n; ++i)
		printf("%4d,",v[i]);
	printf("}\n");
}

int main(void)
{
	int ary1[] = {1, 2, 3, 4, 5};
	rev_intary(ary1,5);
	printf("ary1 = "); print_array(ary1, 5);puts("");

	return 0;
}