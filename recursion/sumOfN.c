// Sum Of N Natural Number Using Recursion 
// Made By Mitesh Darda
// Date == 6 Feb. 2021
#include <stdio.h>
int sumOfNaturalNo(int);

void main()
{
    int numberOfTerms;
    printf("Enter Total No Of Terms = >> ");
    scanf("%d", &numberOfTerms);
    printf("Sum Of First %d Terms Is %d", numberOfTerms, sumOfNaturalNo(numberOfTerms));
}

int sumOfNaturalNo(int n)
{
    int sum = 0;
    if (n != 0)
        sum = n + sumOfNaturalNo(n - 1);
    return sum;
}