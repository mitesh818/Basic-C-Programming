#include <stdio.h>
void main()
{
    float x, sum = 1, t, d;
    int i, n;
    printf("Input the Value of x :");
    scanf("%f", &x);
    printf("Input the number of terms : ");
    scanf("%d", &n);
    if (n == 0)
        sum = 0;
    t = 1;
    for (i = 1; i < n; i++)
    {
        d = (2 * i) * (2 * i - 1);
        t = -t * x * x / d;
        sum = sum + t;
    }
    printf("\nthe sum = %f\nNumber of terms = %d\nvalue of x = %f\n", sum, n, x);
}
