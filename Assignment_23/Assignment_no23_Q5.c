#include<stdio.h>
#include<stdlib.h>
int ProductOdd(int Arr[],int iLength)
{
    int iCnt=0;
    int iPro;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2!=0)
        {
            iPro*=Arr[iCnt];
        }
    }
    return iPro;
}
int main()
{
    int iSize=0,iRet=0,iCnt=0;
    int *p=NULL;
    printf("Enter number of elements:");
    scanf("%d",&iSize);

    
    p=(int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    printf("enter %d elements\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter elements :%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet= ProductOdd(p,iSize);
    printf(" %d\n",iRet);
    
    free(p);
    return 0;

}