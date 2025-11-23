#include<stdio.h>
void FactRev(int iNo)
{
    for(int iCnt=iNo/2;iCnt>=1;iCnt--)
    {
        if(iNo%iCnt==0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue=0;
    printf("enter number:");
    scanf("%d",&iValue);
    printf("FACTORS:");
    FactRev(iValue);

}