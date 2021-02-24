#include <stdio.h>

void fibo(int f, int l, int trm);

void main()
{
    fibo(1, 1, 20);
}

void fibo(int f, int l, int trm)
{
    if (trm > 0)
    {
        int s;
        printf("%d ", f);
        s = f + l;
        f = l;
        l = s;
        fibo(f, l, --trm);
    }
    else
        return;
}