#include <stdio.h>

int search_idx(const int v[], int idx[], int key, int n) {
    int j = -1; int i ;
    for (i = 0; i < n; ++i)
        if (v[i] == key) {
            j++;
            idx[j] = v[i];
        }

    return j;
}

int main(void) {
    int n = 5;
    int v[5] = {2, 3, 23, 2, 1}; int idx[5]; int key = 2;
    search_idx(v, idx, 2, 5);

    printf("%d\n", idx[1]);

    return 0;
}