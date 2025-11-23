//Time complexity:O(n)
#include<stdio.h>
int sun_even_numbers(int limit)
{
    int iSum=0;
    for(int i=0;i<=limit;i++)
    {
        if(i%2==0)
        {
            iSum=iSum+i;
        }
    }
    return iSum;
}
int main()
{
    int iNum=0;
    printf("enter number:");
    scanf("%d",&iNum);
    int iRet=sun_even_numbers(iNum);
    printf("summ of even numbers:%d",iRet);
    return 0;
}