#include<stdio.h>

void Display(int iNo)
{
    
    static int count =1;
    static int value=65;
    if(count >iNo)
       return ;
    
    printf("%c\t",(char)value);
    iNo--;
    value++;
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