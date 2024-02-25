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

int CheckPerfect(PNODE Head){
int iNo=0;
int sum=0;
int icnt=0;
while(Head!=NULL){
iNo=Head->data;
for(icnt=1;icnt<iNo/2;icnt++){
if(iNo%icnt==0){
sum=sum+icnt;
}
}       
 if(sum=iNo){
 printf("%d is perfect number\n",iNo);
}
sum=0;
Head=Head->next;
}

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
iRet=CheckPerfect(First);
printf("%d",iRet);
   

    

    return 0;
}