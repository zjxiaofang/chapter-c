#include <stdio.h>
int main(void)
{

	return 0;
}
void rev_intary(int v[],int n){
	int temp,i;
	for (int i = 0; i < n/2; ++i)
	{
		temp = v[i];
		v[i] = v[n-i-1];
		v[n-1-i]=temp;
	}
	printf("{");
	for (int i = 0; i < n; ++i)
	{
		printf("%4d,",v[i]);
	}
	printf("}\n");

}