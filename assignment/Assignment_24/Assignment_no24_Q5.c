#include<stdio.h>
#include<stdlib.h>
void DigitSum(int Arr[],int iLength)
{
    int iTemp=0,iSum=0,iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        iTemp = Arr[iCnt];  
        iSum=0;
        while(iTemp!=0)
        {
            
            iSum=iSum+(iTemp%10);
            iTemp=iTemp/10;
        
        }
        printf("%d\t ",iSum);
        
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
    DigitSum(p,iSize);
    free(p);
    return 0;
}