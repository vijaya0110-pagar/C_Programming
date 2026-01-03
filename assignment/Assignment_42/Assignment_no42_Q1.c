#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
struct node
{
    int Data;
    struct node *Next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn =NULL;
    newn = (PNODE) malloc (sizeof(NODE));
    newn->Next = NULL;
    newn->Data = no;
    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head =newn;
    }
}
int SearchFirstOcc(PNODE Head,int no)
{
    int pos=1;
    while(Head!=NULL)
    {
        if(Head->Data == no)
        {
            return pos;
        }
        Head=Head->Next;
        pos++;
    }
    return -1;
}
int main()
{
    PNODE First =NULL;
    int iRet=0;
    InsertFirst(&First,10);
    InsertFirst(&First,20);
    InsertFirst(&First,30);
    InsertFirst(&First,40);
    InsertFirst(&First,50);
    InsertFirst(&First,30);
    InsertFirst(&First,70);

   iRet= SearchFirstOcc(First,30);
   if(iRet == -1)
   {
    printf("element not found\n");
   }
   else
   {
   printf("element found at position :%d\n",iRet);
   }
    return 0;
}