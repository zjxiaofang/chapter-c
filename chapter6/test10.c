#include <stdio.h>
int main(void) {
   

    return 0;
}
void intary_rcpy(int v1[], const int v2[], int n) {
    int temp, i;
    for (int i = 0; i < n; ++i) {
        v1[i] = v2[n-1-i];
    }
    printf("{");
    for (int i = 0; i < n; ++i) {
        printf("%4d,", v1[i]);
    }
    printf("}\n");

}