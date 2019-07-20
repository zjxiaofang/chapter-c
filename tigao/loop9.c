#include <stdio.h>
int main(void) {
    int i = 1; int j = 1; int k = 1; int num = 0;
    for (int i = 1; i <= 100; ++i) {
        for (int j = 1; j <= 100; ++j) {
            for (int k = 1; k <= 100; ++k) {
                if (i + 2 * j + 5 * k == 100)
                    printf("%d,%d,%d\n", i, j, k);
            }
        }
    }

    return 0;
}