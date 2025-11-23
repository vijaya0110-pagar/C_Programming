#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{
    if(iNo%2==0)
     return true;
    else
     return false;
}
int main()
{

    int iValue=0;
    bool bRet=false;
    printf("enter number");
    scanf("%d",&iValue);
    bRet=ChkEven(iValue);
    if(bRet==true)
    {
        printf("the no is even!!");
    }
    else
    {
        printf("the no is odd");
    }
    return 0;

}