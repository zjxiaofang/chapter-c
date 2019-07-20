#include <stdio.h>
#define num 5
int main(void)
{
	int i,j;
	int fen[num];
	int bu[11] = {0};
	for (i = 0; i < num; ++i)
	{
		do{
		printf("第%d个：",i+1);
		scanf("%d",&fen[i]);
		if(fen[i]<0||fen[i]>100) 
			printf("重输");
		}while(fen[i]<0||fen[i]>100);
		bu[fen[i]/10]++;
	}

		int max = bu[0];

	for (int i = 1; i < 11; ++i)
		if (max<bu[i]) max = bu[i];

	for (int i = 0; i < max; ++i)
	{
		printf("  ");
		for (int j = 0; j < 11; ++j)
		{
			if(bu[j]>=max-i){
				printf("  *  ");
			}else
				printf("     ");
		}
		puts("");
	}

	for (int i = 0; i < 11; ++i)
		printf("-----");
	puts("");

	for (int i = 0; i < 11; ++i)
		printf("%5d",i*10);

	return 0;
}