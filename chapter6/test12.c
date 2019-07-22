#include <stdio.h>

void mat_mul(const int a[4][3],const int b[3][4],int c[4][4])
{
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			for (int k = 0; k < 3; ++k)
			{
				c[i][j] = a[i][k]*b[k][j];
			}
		}
	}
}
int main(void)
{
	int a[4][3];int b[3][4];int c[4][4];
	int i,j,k;
	mat_mul(a,b,c);

	return 0;
}