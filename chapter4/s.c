#include <stdio.h>
int main(void)
{
	int i,j;
	printf("  |");
	for ( i = 1; i <= 9; ++i)
		printf("%3d", i);
	puts("");

	for (i = 0; i < 10; ++i)
		printf("---");
	puts("");
	
	for (int i = 1; i <= 9; ++i)
	{
		printf("%-2d|",i);
		for (int j = 1; j <= 9; ++j){
			printf("%3d",i*j);
		}
			puts("");	
	}

	return 0;
}
/*
int main() {
    
    for (int i = 1; i <=9; ++i)
    {
        printf("%-2d|",i);          
        for (int j = 1; j <= 9; ++j)
        {
            printf("%3d", i*j);
        }
        putchar('\n');
    }
    
    return 0;
}
*/