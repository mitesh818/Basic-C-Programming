#include <stdio.h>
void main()
{
    int half_rows, rows, blank, star, condition_blank, condition_star;
    printf("Input Half No. Of Rows =>> ");
    scanf("%d", &half_rows);
    for (rows = 1; rows <= (half_rows * 2) - 1; ++rows)
    {
        if (rows <= half_rows)
        {
            condition_blank = half_rows - rows;
            condition_star = (2 * rows) - 1;
        }
        else if (rows > half_rows)
        {
            condition_blank = rows - half_rows;
            condition_star = (2 * ((2 * half_rows) - rows)) - 1;
        }
        for (blank = 1; blank <= condition_blank; ++blank)
            printf(" ");
        for (star = 1; star <= condition_star; ++star)
            printf("*");
        printf("\n");
    }
}
// also a solution
//
//
//
//
// for (rows = 1; rows <= (half_rows * 2) - 1; ++rows)
// {
//     if (rows <= half_rows)
//     {
//         for (blank = 1; blank <= half_rows - rows; ++blank)
//         {
//             printf(" ");
//         }
//         for (star = 1; star <= (2 * rows) - 1; ++star)
//         {
//             printf("*");
//         }
//     }
//     else if (rows > half_rows)
//     {
//         for (blank = 1; blank <= rows - half_rows; ++blank)
//         {
//             printf(" ");
//         }
//         for (star = 1; star <= (2 * ((2 * half_rows) - rows)) - 1; ++star)
//         {
//             printf("*");
//         }
//     }
//     printf("\n");
// }