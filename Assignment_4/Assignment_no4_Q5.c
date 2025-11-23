#include<stdio.h>
int FactDiff(int iNo)
{
    int iSumfact=0;
    int iSumnonfact=0;
    int iDiffRet=0;
    for(int iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iSumfact=iSumfact+iCnt;
        }
        else
        {
            iSumnonfact=iSumnonfact+iCnt;
        }
    }
    iDiffRet=iSumfact-iSumnonfact;
    return iDiffRet;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number:");
    scanf("%d",&iValue);
    
    iRet=FactDiff(iValue);
    printf("%d",iRet);
    return 0;
}