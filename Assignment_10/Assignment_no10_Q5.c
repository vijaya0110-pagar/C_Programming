#include<stdio.h>
double SquareMeter(int iValue)
{
    double dRet=0.0; 
    dRet=iValue*0.0929;
    return dRet;
}
int main()
{
    int iValue=0.0;
    double dRet=0.0;
    printf("enter area in square feet:");
    scanf("%d",&iValue);
    dRet=SquareMeter(iValue);
    printf("the square meter:%f ",dRet);
    return 0;
}