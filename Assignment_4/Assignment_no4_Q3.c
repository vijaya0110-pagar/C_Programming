#include<stdio.h>
void NonFact(int iNo)
{
    for(int iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
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
    printf(" NON FACTORS:");
    NonFact(iValue);

}