#include<stdio.h>
void Display(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
   for (int icnt=0;icnt<iNo;icnt++)
   {
    printf("* ");
   }

   for (int icnt=0;icnt<iNo;icnt++)
   {
    printf("# ");
   }
}
int main()
{
    int iValue=0;
    
    printf("enter number");
    scanf("%d",&iValue);
     Display(iValue);
    
    return 0;
    
}