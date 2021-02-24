#include <stdio.h>

void primeFun(int x);
void primeFunRec(int x);

void main()
{
    int n;
    printf("Enter A No. : ");
    scanf("%d", &n);
    printf("Func. Without rec. : \n");
    primeFun(n);
    printf("\n\n");
    printf("Func. With rec. : \n");
    primeFunRec(n);
}

void primeFun(int x)
{
    int dividor;
    for (x; x != 1; x /= dividor)
    {
        for (dividor = 2; dividor <= x; dividor++)
        {
            if (x % dividor == 0)
            {
                printf("%d ", dividor);
                break;
            }
        }
    }
}

void primeFunRec(int x)
{
    for (int dividor = 2; dividor <= x; dividor++)
    {
        if (x % dividor == 0)
        {
            printf("%d ", dividor);
            if (x / dividor == 1)
                return;
            else
                primeFunRec(x / dividor);
            break;
        }
    }
}
