#include<stdio.h>
#include<stdbool.h>
bool is_Divible_by_five(int number)
{
    if(number%5==0)
        return true;
    else
        return false;
}
int main(void)
{
    int iNum=0;
    printf("enter number:");
    scanf("%d",&iNum);
    printf("%s\n",is_Divible_by_five(iNum)?"Yes":"no");
    return 0;
} 