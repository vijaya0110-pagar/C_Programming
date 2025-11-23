#include<stdio.h>
void print_even_numbers(int limit)
{
    for(int i=0;i<=limit;i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
        }
    }
}
int main()
{
    int iNum=0;
    printf("enter number:");
    scanf("%d",&iNum);
    print_even_numbers(iNum);
    return 0;
}