#include<stdio.h>
void CheckNumberType(int num)
{
    if(num<0)
    {
        printf("number is negative!!");
    }
    else if(num>0)
    {
        printf("number is positive");
    }
    else{
        printf(" number is zero");
    }
}
int main()
{
    int iNumber;
    printf("enter number:");
    scanf("%d",&iNumber);
    CheckNumberType(iNumber);
    return 0;
}