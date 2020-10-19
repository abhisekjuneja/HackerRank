#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
    int maxA = a > b ? a : b;
    int maxB = maxA > c ? maxA : c;
    int maxC = maxB > d ? maxB : d;

    return maxC;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}