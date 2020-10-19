#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d\n", a + b, a - b);

    float floatA, floatB;
    scanf("%f %f", &floatA, &floatB);
    printf("%.1f %.1f", floatA + floatB, floatA - floatB);
    
    return 0;
}