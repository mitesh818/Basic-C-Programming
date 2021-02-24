#include <stdio.h>

void main(void)
{
    int rows, blank_or_star, number_of_star = 1;
    printf("No. Of Rows =>> ");
    scanf("%d", &rows);
    for (rows; rows > 0; --rows)
    {
        for (blank_or_star = rows; blank_or_star > 0; --blank_or_star)
            printf(" ");
        for (blank_or_star = 1; blank_or_star <= number_of_star; ++blank_or_star)
            printf("* ");
        ++number_of_star;
        printf("\n");
    }
}