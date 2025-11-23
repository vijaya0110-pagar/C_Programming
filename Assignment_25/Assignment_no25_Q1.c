#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)
{
    int iTemp=0,iSumEven=0,iSumOdd=0,iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iSumEven=iSumEven+Arr[iCnt];
        }
        if(Arr[iCnt]%2!=0)
        {
            iSumOdd=iSumOdd+Arr[iCnt];
        }
        
    }
    return iSumEven-iSumOdd;
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
    iRet=Difference(p,iSize);
    printf("Result is %d ",iRet);
    free(p);
    return 0;
}