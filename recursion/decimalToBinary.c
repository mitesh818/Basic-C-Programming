// Converts Positive Decimal To Binary
// Made By Mitesh Darda
// Date - 6 Feb. 2021

#include <stdio.h>
int binaryConverter(int);
int binaryConverterRec(int);
void main()
{
    int no = -1, binaryValue;
    while (no < 0)
    {
        printf("Enter A Positive Decimal :-->> ");
        scanf("%d", &no);
        // Only Allow Positive Value
        if (no < 0)
            printf("\nPLEASE ENTER A POSITIVE VALUE\nPLEASE ENTER A POSITIVE VALUE\nPLEASE ENTER A POSITIVE VALUE\n\n");
    }
    binaryValue = binaryConverter(no);
    printf("\nBinary == %d\n\n", binaryValue);

    binaryValue = binaryConverterRec(no);
    printf("Binary From Recursion == %d\n\n", binaryValue);
}

// Without Reccursion
int binaryConverter(int n)
{
    int b = 0;
    for (int tenM = 1; n != 0; n /= 2, tenM *= 10)
    {
        b = tenM * (n % 2) + b;
    }
    return b;
}

// With Reccursion
int binaryConverterRec(int no)
{
    int binary = 0;
    if (no != 0)
        binary = no % 2 + (binaryConverterRec(no / 2) * 10);
    return binary;
}