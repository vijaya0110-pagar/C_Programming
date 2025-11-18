#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        
        if(Arr[iCnt]%2==0 && Arr[iCnt]%5==0)
        {
            printf("%d\t",Arr[iCnt]);
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
    Display(p,iSize);
   
    free(p);
    return 0;
}