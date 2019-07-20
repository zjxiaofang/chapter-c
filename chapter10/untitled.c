#include <stdio.h>
void s(int *y)
{
do {
                if (*y < 1) {
                    printf("重新输入年");
                    scanf("%d", &*y);
                }
            } while (*y < 1);	
}

int main(void)
{
	int y=-1;
	s(&y);
	printf("%d\n",y );
	return 0;
}