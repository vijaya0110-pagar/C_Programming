#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check (int Arr[],int iSize)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]== 11)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int iSize=0,iCnt=0;
    bool bRet=false;
    printf("enter the numbers of elements:\n");
    scanf("%d",&iSize);

    int *p=NULL;
    p=(int *)malloc(iSize * sizeof(int));

    printf("Enter the %d numbers:\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("enter %d element:\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    bRet=Check(p,iSize);
    if(bRet == true)
    {
        printf("11 is present\n");
    }
    else{
        printf("11 is absent\n");
    }
    free(p);
    return 0;

}