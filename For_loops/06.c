#include <stdio.h>
void main(void)
{
    int end, original_no, no, sum, r;
    printf("Input Starting Number : ");
    scanf("%d", &original_no);
    printf("Input Ending Number : ");
    scanf("%d", &end);
    printf("Armstrong No's Are =>> ");
    for (original_no; original_no <= end; ++original_no)
    {
        sum = 0;
        for (no = original_no; no != 0; no /= 10)
        {
            r = no % 10;
            sum += r * r * r;
        }
        if (sum == original_no)
            printf("%d ", original_no);
    }
}