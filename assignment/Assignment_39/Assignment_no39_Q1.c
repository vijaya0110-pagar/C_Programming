#include<stdio.h>

void Display()
{
    static int count =0;

    if(count ==5)
       return ;
    
    printf("*\t");
    count++;
    Display();
    return;

}
int main()
{
    Display();
    return 0;
}