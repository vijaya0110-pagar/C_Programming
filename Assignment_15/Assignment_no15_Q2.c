//Time comlexity:log(n)
#include<stdio.h>
int  CountOdd(int iNo)
{
    int iDigit=0;
    int icnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit%2!=0)
        {
            icnt++;
        }
        
        iNo=iNo/10;
    }
    return icnt;
}
int main()
{
    int iValue=0;
    printf("enter number:");
    scanf("%d",&iValue);
    int iRet=CountOdd(iValue);
    printf("no of odd digits is:%d",iRet);
    return 0;
}