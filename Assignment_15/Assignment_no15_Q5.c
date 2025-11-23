//Time comlexity:log(n)
#include<stdio.h>
int  CountDiff(int iNo)
{
    int iDigit=0;
    int isumeven=0;
    int isumodd=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit%2==0)
        {
            isumeven=isumeven+iDigit;
        }
        else if(iDigit%2!=0)
        {
            isumodd=isumodd+iDigit;
        }
        iNo=iNo/10;
    }
    return isumeven-isumodd;
}
int main()
{
    int iValue=0;
    printf("enter number:");
    scanf("%d",&iValue);
    int iRet=CountDiff(iValue);
    printf("diff betn odd and even digits is:%d",iRet);
    return 0;
}