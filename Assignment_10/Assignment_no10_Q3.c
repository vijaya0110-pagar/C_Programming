#include<stdio.h>
int KMtoMeter(float iNo)
{
    int iRet=0.0; 
    iRet=iNo*1000;
    return iRet;
}
int main()
{
    int iValue=0 , iRet=0;
    printf("enter distance");
    scanf("%d",&iValue);
    iRet=KMtoMeter(iValue);
    printf("distance :%d ",iRet);
    return 0;
}