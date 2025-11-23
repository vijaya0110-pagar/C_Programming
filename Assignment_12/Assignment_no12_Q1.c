#include<stdio.h>
void print_factors(int number)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=number/2;iCnt++)
    {
        if(number%iCnt==0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iNum=0;
    printf("Enter number:");
    scanf("%d",&iNum);
    print_factors(iNum);
    return 0;

}