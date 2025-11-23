#include<stdio.h>
int RangeSumEven(int iStart,int iEnd)
{
     int iSum=0;
    for(int iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
       if(iCnt%2==0)
       {
        iSum=iSum+iCnt;
       }
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
    int iRet= RangeSumEven(iValue1,iValue2);
    printf(" even sum of range:%d\t",iRet);
    return 0;

}