#include<stdio.h>
double CircleArea(float fRadius)
{
    double dRet=0.0; 
    dRet=3.14*fRadius*fRadius;
    return dRet;
}
int main()
{
    float fValue=0.0;
    double dRet=0.0;
    printf("enter radius");
    scanf("%f",&fValue);
    dRet=CircleArea(fValue);
    printf("the area of circle area:%f ",dRet);
    return 0;
}