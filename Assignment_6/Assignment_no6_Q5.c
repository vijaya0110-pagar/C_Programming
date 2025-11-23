#include<stdio.h>
float Percentage(int iNo1,int iNo2)
{
    float fPercentage=0;
    if(iNo1 ==0)
    {
        printf("zero denominator!!");
    }
    fPercentage=(iNo2/iNo1)*100;
    return fPercentage; 
}
int main()
{
    int iValue1=0,iValue2=0;
    float fRet=0.0;
    printf("please enter total marks");
    scanf("%d",&iValue1);
    printf("please enetr obtained marks");
    scanf("%d",&iValue2);
    fRet=Percentage(iValue1,iValue2);
    printf("percentage:%f",fRet);
    return 0;
}