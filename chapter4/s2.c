#include <stdio.h>
int main(void) {
    int i, count;
    int j = 0;
    printf("shu"); scanf("%d", &count);
    for (int i = 0; i < count; ++i) {
        
        printf("%d\n", j);
        j+=1;
        if (j >= 10) j -= 10;

    }

    return 0;
}