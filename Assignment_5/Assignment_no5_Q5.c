#include<stdio.h>
int FindLargest(int iNo1,int iNo2,int iNo3)
{
    if(iNo1<iNo2 && iNo3<iNo2)
    {
        return iNo2;
    }
    else if(iNo1<iNo3 && iNo2<iNo3)
    {
        return iNo3;
    }
    else{
        return iNo1;
    }
}
int main()
{
    int iValu1=0,iValu2=0,iValu3=0,iResult=0;
    printf("Enter three numbers:");
    scanf("%d %d %d",&iValu1,&iValu2,&iValu3);
    iResult=FindLargest(iValu1,iValu2,iValu3);
    printf("Largest number is:%d\n",iResult);
    return 0;
}