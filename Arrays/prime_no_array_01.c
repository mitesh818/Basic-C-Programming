#include <stdio.h>
void main()
{
    int primeOrNot, noOfPrimeNo = 1, position, no = 1;
    printf("1 ");
    for(int index = 1; index <= 100; index = index + 2)
    {
        for(int dividor = index; dividor > 1; --dividor)
        {
            if(index%dividor == 0)
                primeOrNot = dividor;
        }
        if(primeOrNot == index)
        {
            printf("%d ", primeOrNot);
            ++noOfPrimeNo;
        }
    }

    printf("\n%d", noOfPrimeNo);

    int prime[noOfPrimeNo + 1];
    prime[0] = 1; 
    
    
    for(int index = 1; index <= 100; index = index + 2)
    {
        for(int dividor = index; dividor > 1; --dividor)
        {
            if(index%dividor == 0)
                primeOrNot = dividor;
        }
        if(primeOrNot == index)
            {
                prime[no] = primeOrNot;
                ++no;
            }
    }

    printf("\nEnter Position Of Prime No. > ");
    scanf("%d", &position);
    if(position < 1 || position > noOfPrimeNo)
        printf("Invalid Position");
    else
        printf("Prime No. on Position %d Is > %d",position, prime[position - 1]);
}
