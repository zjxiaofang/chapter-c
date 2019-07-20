#include <stdio.h>
int main(void) {
    int i = 1 ;
    int sum = 0;
    do {
        sum += i;
        i++;
    } while (i < 101);

    /*
    for (;i<101;i++){
    	sum+=i;
    }
    */

    /*
    	while (i<101){
    	sum+=i;
    	i++;
    	}
    */

    printf("%6d", sum);
    return 0;
}