#include<stdio.h>
int FactorialDiff(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iFact1=1;
    for(int i=1;i<=iNo;i++)
    {
        if(i%2==0)
        {
            iFact1=iFact1*i;
        }
    }
    int iFact2=1;
    for(int i=1;i<=iNo;i++)
    {
        if(i%2!=0)
        {
            iFact2=iFact2*i;
        }
    }
 return iFact1-iFact2;
}
int main()
{
    int iValue=0;
    
    printf("enter number");
    scanf("%d",&iValue);
    int iRet=FactorialDiff(iValue);
    printf("factorial difference :%d",iRet);
    return 0;
    
}