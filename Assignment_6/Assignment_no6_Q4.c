#include<stdio.h>
int Multiply(int ino1,int ino2,int ino3)
{
    int iReslt=0;
     if (ino1 != 0) {
        iReslt *= ino1;
       
    }
    if (ino2 != 0) {
        iReslt *= ino2;
        
    }
    if (ino3 != 0) {
        iReslt *= ino3;
      
    }
    return iReslt;
}
int main()
{
    int iValue1=0,iValue2=0,iValue3=0,iRet=0;
    printf("please enter three numbers");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);
    iRet=Multiply(iValue1,iValue2,iValue3);
    printf("multiplication :%d",iRet);
    return 0;
}