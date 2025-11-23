#include<stdio.h>
int MultFact(int iNo)
{
    int iRet=1;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    
    for(int iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            printf("%d\n",iCnt);
            iRet=iRet*iCnt;
        }
}
return iRet;
}
int main()
{
    int iValue=0,iRet=0;
    printf("enter number:");
    scanf("%d",&iValue);
    printf("factors:");
    iRet=MultFact(iValue);
    printf("multiplication of number factors:%d ",iRet);
    return 0;
}