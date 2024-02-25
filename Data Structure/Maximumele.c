#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));         
    newn->data = no;                            
    newn->next = NULL;

    if(*Head == NULL)                           
    {
        *Head = newn;                          
    }
    else
    {
        newn->next = *Head;                     
        *Head = newn;                          
    }
}

int MaximumE(PNODE Head){
int max=0;
if(Head==NULL){
return -1;
}
 max=Head->data;
while(Head!=NULL){
if(max<(Head->data)){
max=Head->data;
}
Head=Head->next;
}
return max;
}
void Display(PNODE Head)
{
    printf("Elements of LinkedList are : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head -> next;
    }
    printf("NULL \n");
}





int main()
{
    PNODE First = NULL;
int iRet=0;
    InsertFirst(&First,111);
    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
 Display(First);
iRet=MaximumE(First);
printf("%d",iRet);
   

    

    return 0;
}