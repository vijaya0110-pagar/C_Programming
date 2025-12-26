#include<stdio.h>

void Display()
{
    static int count =5;

    if(count >0)
       return ;
    
    printf("%d\t",count);
    count--;
    Display();
    return;

}
int main()
{
    Display();
    return 0;
}