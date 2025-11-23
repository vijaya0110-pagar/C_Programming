#include<stdio.h>
#include<stdlib.h>
void Display(int iNo)
{
   if(iNo==0)
   {
    printf("zero\n");
    return;
   }
   if(iNo<0)
   {
    printf("minus ");
   }
    
    switch(abs(iNo))
    {
        case 1: printf("one\n"); break;
        case 2: printf("two\n"); break;
        case 3: printf("three\n"); break;
        case 4: printf("four\n"); break;
        case 5: printf("five\n"); break;
        case 6: printf("six\n"); break;
        case 7: printf("seven\n"); break;
        case 8: printf("eight\n"); break;
        case 9: printf("nine\n"); break;
    }
}
int main()
{
    int iValue=0;
    printf("enter number");
    scanf("%d",&iValue);
    if(iValue<-9 || iValue >9)
    {
        printf("Error :please enter singlr didgits");
        return 1;

    }
    Display(iValue);
    return 0;
    
}