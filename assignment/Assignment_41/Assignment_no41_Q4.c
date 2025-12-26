#include<stdio.h>

int fact(int iNo)
{
    
    if (iNo==0)
         return 1;
    else
        return iNo * fact(iNo-1);
}
int main()
{
    int iValue=0,iRet=0;
    
    printf("enter number");
    scanf("%d",&iValue);
    iRet = fact(iValue);
    printf("%d\n",iRet);
    return 0;
}