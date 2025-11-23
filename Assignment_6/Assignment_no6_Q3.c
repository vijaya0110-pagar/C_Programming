#include<stdio.h>
#include<stdbool.h>
bool ChkEqual(int iNo1,int iNo2)
{
    if(iNo1==iNo2)
     return true;
     else return false;
}
int main()
{
    int iValue1=0,iValue2=0;
    bool bRet=false;
    printf("please enter two numbers");
    scanf("%d %d",&iValue1,&iValue2);
    bRet=ChkEqual(iValue1,iValue2);
    if(bRet==true)
    {
        printf("equal");
    }
    else{
        printf("not equal");
    }
    return 0;
}