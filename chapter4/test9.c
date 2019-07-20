#include <stdio.h>
int main(void) {
    int count;
    int i = 0;
    printf("请输入总个数：");
    scanf("%d", &count);
    if (count > 0) {

    	while (i++ < count) {
    		if(i % 2) 
    			puts("+");
    		else 
    			puts("-");
    	}

    }
    return 0;
}