#include<stdio.h>
int OddFactorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iFact=1;
    for(int i=1;i<=iNo;i++)
    {
        if(i%2!=0)
        {
            iFact=iFact*i;
        }
    }
 return iFact;
}
int main()
{
    int iValue=0;
    
    printf("enter number");
    scanf("%d",&iValue);
    int iRet=OddFactorial(iValue);
    printf("factorial :%d",iRet);
    return 0;
    
}