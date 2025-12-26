#include<stdio.h>

int Mult(int iNo)
{
    
    static int count =1;

    if(count >iNo)
       return -1;
    int iDigit=0;
    int iMult=1;
    while(iNo!=0)
    {
        iDigit=iNo%10;
        iMult=iMult*iDigit;
        iNo=iNo/10;
    }
    iNo--;
    Mult(iNo);
    return iMult;

}
int main()
{
    int iValue=0,iRet=0;

    printf("enter number");
    scanf("%d",&iValue);
    iRet = Mult(iValue);
    printf("%d\n",iRet);
    return 0;
}