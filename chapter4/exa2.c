#include <stdio.h>
int main(void)
{
	int hand;
	do {
		printf("请选择出什么拳：【0。。石头/1。。剪刀/2。。布】：");
		scanf("%d",&hand);
	}while(hand > 2 || hand < 0);

		printf("您输入的是：");
		switch(hand) {
		case 0:printf("石头");break;
		case 1:printf("剪刀");break;
		case 2:printf("布");break;
		}
	return 0;
}