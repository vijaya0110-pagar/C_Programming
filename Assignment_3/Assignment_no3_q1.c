// i/p : 5
// o/p : 2 4 6 8 10 

// i/p : 7
// o/p : 2 4 6 8 10 12 14

#include<stdio.h>

void PrintEven(int iNo)
{
    int icnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    icnt = 1;
    while(iNo != 0)
    {
        if(icnt % 2 == 0)
        {
            printf("%d\t",icnt);
            iNo--;
        }
        icnt++;
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}