#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check (int Arr[],int iSize,int iNo)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]== iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}
int main()
{
    int iSize=0,iCnt=0,iValue=0;
    BOOL bRet=FALSE;
    printf("enter the numbers of elements:\n");
    scanf("%d",&iSize);
    
    printf("enter the numbers to find in the elements:\n");
    scanf("%d",&iValue);
    int *p=NULL;
    p=(int *)malloc(iSize * sizeof(int));

    printf("Enter the %d numbers:\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("enter %d element:\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet=Check(p,iSize,iValue);
    if(bRet == true)
    {
        printf("%d is present\n",iValue);
    }
    else{
        printf("%d is absent\n",iValue);
    }
    free(p);
    return 0;

}