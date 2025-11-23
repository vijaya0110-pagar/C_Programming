//Time comlexity:log(n)
#include<stdio.h>
int  CountFour(int iNo)
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
        if(iDigit==4)
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
    int iRet=CountFour(iValue);
    printf("no of 4 is:%d",iRet);
    return 0;
}