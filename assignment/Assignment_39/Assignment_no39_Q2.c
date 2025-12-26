#include<stdio.h>

void Display()
{
    static int count =1;

    if(count >5)
       return ;
    
    printf("%d\t",count);
    count++;
    Display();
    return;

}
int main()
{
    Display();
    return 0;
}