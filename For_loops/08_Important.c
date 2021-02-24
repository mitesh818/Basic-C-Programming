#include <stdio.h>
void main()
{
    int n, k, rows, space, term;
    printf("Input No. Of Rows =>> ");
    scanf("%d", &rows);
    for (n = 0; n < rows; ++n)
    {
        term = 1;
        for (space = 1; space <= rows - n; ++space)
            printf(" ");
        for (k = 0; k <= n; ++k)
        {
            if (n == 0 || k == 0 || n == k)
                printf("1 ");
            else
            {
                term = (term * (n - k + 1)) / k;
                printf("%d ", term);
            }
        }
        printf("\n");
    }
}

// #include <stdio.h>

// void main()
// {
//     int no_row,c=1,blk,i,j;
//     printf("Input number of rows: ");
//     scanf("%d",&no_row);
//     for(i=0;i<no_row;i++)
//     {
//         for(blk=1;blk<=no_row-i;blk++)
//         printf("  ");
//         for(j=0;j<=i;j++)
//         {
//             if (j==0||i==0)
//                 c=1;
//             else
//                c=c*(i-j+1)/j;
//             printf("% 4d",c);
//         }
//         printf("\n");
//     }
// }