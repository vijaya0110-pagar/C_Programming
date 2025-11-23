#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength,int iNo)
{
    int iCnt=0,iCount=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iSize=0,iRet=0,iCnt=0,iNo=0;
    int *p=NULL;
    printf("Enter number of elements:");
    scanf("%d",&iSize);
    p=(int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    printf("enter the number whose frequency has to be find:\n");
    scanf("%d",&iNo);
    printf("enter %d elements\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter elements :%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet= Frequency(p,iSize,iNo);
    printf("Frequency of %d is %d ",iNo,iRet);
    free(p);
    return 0;

}