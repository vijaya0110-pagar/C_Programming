#include<stdio.h>
#include<stdlib.h>
void Digits(int Arr[],int iLength)
{
    int iDigits=0,iTemp=0,iCount=0,iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        iTemp = Arr[iCnt];  
        iCount = 0; 
        while(iTemp!=0)
        {
            iTemp=iTemp/10;
            iCount++;
        
        }
        if(iCount == 3)
        {
            printf("%d\t ",Arr[iCnt]);
        }
    }

}
int main()
{
    int iSize=0,iRet=0,iCnt=0;
    int *p=NULL;

    printf("Enter number of elements:");
    scanf("%d",&iSize);
    p=(int*)malloc(iSize * sizeof(int));
    if(p ==NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    printf("enter %d elments :\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("enter element:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Digits(p,iSize);
    free(p);
    return 0;
}