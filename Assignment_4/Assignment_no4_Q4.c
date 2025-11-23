#include<stdio.h>
int SumNonFact(int iNo)
{
    int ifreq=0;
    for(int iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
            ifreq=ifreq+iCnt;
        }
    }
    return ifreq;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number:");
    scanf("%d",&iValue);
    printf("NON FACTORS SUM:");
    iRet=SumNonFact(iValue);
    printf("%d",iRet);
    return 0;
}