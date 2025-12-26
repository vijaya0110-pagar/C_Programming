#include<stdio.h>

void Display(int iNo)
{
    static int count =1;

    if(count >iNo)
       return ;
    
    printf("%d\t",count);
    count++;
    Display(iNo);
    return;

}
int main()
{
    int iValue=0;

    printf("enter number");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}