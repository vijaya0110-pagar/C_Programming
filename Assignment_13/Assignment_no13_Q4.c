#include<stdio.h>
int sun_natural_numbers(int limit)
{
    int iSum=0;
    for(int i=0;i<=limit;i++)
    {
        iSum=iSum+i;
    }
    return iSum;
}
int main()
{
    int iNum=0;
    printf("enter number:");
    scanf("%d",&iNum);
    int iRet=sun_natural_numbers(iNum);
    printf("summ of natural numbers:%d",iRet);
    return 0;
}