#include<stdio.h>
void DsiplayEvenFactor(int iNo)
{
    int iCnt=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0 && iCnt%2==0)
        {
             printf("%d\t",iCnt);
        }
    }
    printf("\n");
}
int main()
{
    int iValue=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    DsiplayEvenFactor(iValue);
    return 0;
}