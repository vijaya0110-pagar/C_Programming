#include<stdio.h>
void RangeDisplayRev(int iStart,int iEnd)
{
    for(int iCnt=iEnd;iCnt>=iStart;iCnt--)
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
    RangeDisplayRev(iValue1,iValue2);
    return 0;

}