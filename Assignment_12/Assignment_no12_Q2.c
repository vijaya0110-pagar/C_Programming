#include<stdio.h>
int count_factors(int number)
{
    int iCnt=0;
    int iCount=0;
    for(iCnt=1;iCnt<=number/2;iCnt++)
    {
        if(number%iCnt==0)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iNum=0;
    printf("Enter number:");
    scanf("%d",&iNum);
    int iRet=count_factors(iNum);
    printf("count of factors:%d\t",iRet);
    return 0;
}