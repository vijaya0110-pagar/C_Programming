#include<stdio.h>
void print_numbers(int limit)
{
    for(int i=0;i<=limit;i++)
    {
        printf("%d\t",i);
    }
}
int main()
{
    int iNum=0;
    printf("enter number:");
    scanf("%d",&iNum);
    print_numbers(iNum);
    return 0;
}