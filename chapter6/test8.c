#include <stdio.h>

int min_of(const int v[],int n){
	int min = v[0];
	for (int i = 0; i < n; ++i)
	{
		if(v[i]<min) min = v[i];
	}
	return min;
}
int main(void)
{
	
	 

	return 0;

}