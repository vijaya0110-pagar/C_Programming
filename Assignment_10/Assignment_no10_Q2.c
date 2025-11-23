#include<stdio.h>
double RectArea(float fwidth,float fHeight)
{
    double dRet=0.0; 
    dRet=fwidth*fHeight;
    return dRet;
}
int main()
{
    float fValue1=0.0,fValue2=0.0;
    double dRet=0.0;
    printf("enter width");
    scanf("%f",&fValue1);
    printf("enter height");
    scanf("%f",&fValue2);
    dRet=RectArea(fValue1,fValue2);
    printf("the area of rectangle area:%f ",dRet);
    return 0;
}