#include<stdio.h>
int FindMax(int iNo1,int iNo2)
{
    if(iNo1>iNo2)
    return iNo1;
    else 
    return iNo2;
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    int iMax=0;
    printf("enter numbers 1:");
    scanf("%d",&iValue1);
    printf("enter numbers 2:");
    scanf("%d",&iValue2);
    iMax=FindMax(iValue1,iValue2);
    printf("Largest number:%d",iMax);
    return 0;
}