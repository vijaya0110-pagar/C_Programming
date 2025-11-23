#include<stdio.h>
void Pattern(int iNo)
{
      for(int iCnt=0;iCnt<iNo;iCnt++)
      {
        printf("$ * ");
      }
}
int main()
{
    int iValue=0;
    printf("enter number:");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}