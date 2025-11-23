#include<stdio.h>
int RangeSum(int iStart,int iEnd)
{
     int iSum=0;
    for(int iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
       
        iSum=iSum+iCnt;
    }
    return iSum;
}
int main()
{
    int iValue1=0,iValue2=0;
    printf("enter starting point:");
    scanf("%d",&iValue1);
    printf("enter ending point:");
    scanf("%d",&iValue2);
    int iRet= RangeSum(iValue1,iValue2);
    printf(" sun of range:%d\t",iRet);
    return 0;

}