#include <stdio.h>
void main(void)
{
    int number, divisor, sum = 0;
    printf("Input The Number =>> ");
    scanf("%d", &number);
    printf("Devisor's Are =>> ");
    for (divisor = 1; divisor <= number / 2; ++divisor)
    {
        if (number % divisor == 0)
        {
            printf("%d ", divisor);
            sum += divisor;
        }
    }
    printf("\nSum Is =>> %d\n", sum);
    if (sum == number)
        printf("So, The Number Is Perfect.");
    else
        printf("So, The Number Is Not Perfect.");
}