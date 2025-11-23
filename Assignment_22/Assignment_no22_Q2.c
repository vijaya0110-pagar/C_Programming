#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength)
{
    int iCnt=0,iCountEven=0,iCountOdd=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }
    }
    return iCountEven-iCountOdd;
}
int main()
{
    int iSize=0,iCnt=0,iRet=0;
    int *p=NULL;

    printf("enter the number of elements :");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("unable to allocate memory!");
        return -1;
    }
    printf("Enter %d elements :\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("enter element:%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet=Frequency(p,iSize);
    printf("%d\n",iRet);
    free(p);
    return 0;
}