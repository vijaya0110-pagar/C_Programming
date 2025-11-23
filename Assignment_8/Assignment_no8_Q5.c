#include<stdio.h>
void Table(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(int icnt=10;icnt>=1;icnt--)
    {
      printf("%d  ",iNo*icnt);
    }
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number");
    scanf("%d",&iValue);
     Table(iValue);
    
    return 0;
    
}