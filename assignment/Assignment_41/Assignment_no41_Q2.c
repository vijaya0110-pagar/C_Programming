#include<stdio.h>

int Sum(int iNo)
{
    
    static int count =1;

    if(count >iNo)
       return -1;
    int iDigit=0;
    int iSum=0;
    while(iNo!=0)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;
    }
    iNo--;
    Sum(iNo);
    return iSum;

}
int main()
{
    int iValue=0,iRet=0;

    printf("enter number");
    scanf("%d",&iValue);
    iRet = Sum(iValue);
    printf("%d\n",iRet);
    return 0;
}