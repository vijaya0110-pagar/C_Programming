#include<stdio.h>
#include<stdbool.h>
bool ChkGreater(int iNo)
{
    if(iNo>100)
     return true;
    else 
    return false;
}
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("please enter number");
    scanf("%d",&iValue);
    bRet=ChkGreater(iValue);
    if(bRet==true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    return 0;
}
//TIME COMPLEXITY : O(1)