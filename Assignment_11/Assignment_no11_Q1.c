#include<stdio.h>
void RangeDisplay(int iStart,int iEnd)
{
    for(int iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue1=0,iValue2=0;
    printf("enter starting point:");
    scanf("%d",&iValue1);
    printf("enter ending point:");
    scanf("%d",&iValue2);
    RangeDisplay(iValue1,iValue2);
    return 0;

}