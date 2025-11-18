#include<stdio.h>
#include<stdlib.h>
void Range(int Arr[],int iSize,int iStart,int iEnd)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>=iStart && Arr[iCnt]<=iEnd)
        {
            printf("%d \t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize=0,iCnt=0,iValue1=0,iValue2=0;
    int *p=NULL;
    printf("Enter number of elements:");
    scanf("%d",&iSize);

    printf("enter the start of range :\n");
    scanf("%d",&iValue1);

    printf("enter the end of range :\n");
    scanf("%d",&iValue2);
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
    Range(p,iSize,iValue1,iValue2);

    free(p);
    return 0;
}