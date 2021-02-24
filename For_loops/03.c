#include <stdio.h>

void main(void)
{
    int rows, blank_or_number, number = 1, value = 1;
    printf("No. Of Rows =>> ");
    scanf("%d", &rows);
    for (rows; rows > 0; --rows)
    {
        for (blank_or_number = rows; blank_or_number > 0; --blank_or_number)
            printf(" ");
        for (blank_or_number = 1; blank_or_number <= number; ++blank_or_number)
        {
            printf("%d ", value);
            ++value;
        }
        ++number;
        printf("\n");
    }
}