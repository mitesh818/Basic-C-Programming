#include <stdio.h>

void main(void)
{
    int no_of_table, h, v = 1;
    printf("Q. Write a program in C to display the multiplication table of a given integer. \n");
    printf("Enter Integer =>> ");
    scanf("%d", &no_of_table);
    //  h * v
    for (h = 1; h <= no_of_table; ++h)
    {
        printf("%d * %d = %d,", h, v, h * v);
        if (h == no_of_table && v != 10)
        {
            h = 0;
            ++v;
            printf("\n");
        }
    }
}
