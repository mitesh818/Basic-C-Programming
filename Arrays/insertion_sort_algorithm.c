// Problem On Sorting Insersion Array
// Date 23 Febrary 2021
// - Mitesh Darda
#include <stdio.h>
void main()
{
    int incersionArray[25], x;
    for (int i = 0; i < 25; ++i)
    {
        printf("Enter Value %d : ", i + 1);
        scanf("%d", &incersionArray[i]);
    }

    for (int i = 1; i <= 24; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (incersionArray[j] >= incersionArray[i])
            {
                x = incersionArray[i];
                for (int k = 0; k < i - j; ++k)
                {
                    incersionArray[i - k] = incersionArray[i - k - 1];
                }
                incersionArray[j] = x;
            }
        }
    }
    printf("\n");
    for (int i = 0; i <= 24; ++i)
    {
        printf("%d ", incersionArray[i]);
    }
}