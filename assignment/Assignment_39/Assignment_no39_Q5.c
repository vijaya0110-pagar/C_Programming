#include<stdio.h>

void Display()
{
    static int count =1;
    static int value=97;
    if(count >6)
       return ;
    
    printf("%c\t",(char)value);
    value++;
    count++;
    Display();
    return;

}
int main()
{
    Display();
    return 0;
}