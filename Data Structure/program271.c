#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;      
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));
newn->data=No;
newn->next=NULL;
newn->prev=NULL;
if(*Head==NULL){
*Head=newn;
}
else{
(*Head)->prev=newn;
newn->next=*Head;
*Head=newn;
}
}

void InsertLast(PPNODE Head, int No)
{
    PNODE newn=NULL;
PNODE temp=*Head;
newn=(PNODE)malloc(sizeof(NODE));
newn->data=No;
newn->next=NULL;
newn->prev=NULL;
if(*Head==NULL){
*Head=newn;
}
else{

while(temp->next!=NULL){
temp=temp->next;
}
temp->next=newn;
newn->prev=temp;

}


}


void DeleteFirst(PPNODE Head)
{
if(*Head==NULL){
return;
}
else if((*Head)->next==NULL){
free(*Head);
*Head=NULL;
}
else{
*Head=(*Head)->next;
free((*Head)->prev);
(*Head)->prev=NULL;
}
}

void DeleteLast(PPNODE Head)
{
PNODE temp=*Head;
if(*Head==NULL){
return;
}
else if((*Head)->next==NULL){
free(*Head);
*Head=NULL;
}
else{
while(temp->next->next!=NULL){
temp=temp->next;
}
free(temp->next);
temp->next=NULL;
}

}


void Display(PNODE Head)
{
    printf("Elements of Linked List are : \n");

    printf("NULL <=> ");
    while(Head != NULL)
    {
        printf("| %d | <=> ",Head->data);
        Head = Head -> next;
    }
    printf("NULL \n");
}
int Count(PNODE Head){
int icnt=0;
while(Head!=NULL){
icnt++;
Head=Head->next;
}
return icnt;
}


void InsertAtPos(PPNODE Head, int No, int iPos)
{
int iLength=0;
iLength=Count(*Head);
PNODE newn=NULL;
PNODE temp=*Head;
int icnt=0;

if((iPos<1) &&(iPos>iLength+1)){
printf("Invalid input");
return;
}
if(iPos==1){
InsertFirst(Head,No);
}
else if(iPos==iLength){
InsertLast(Head,No);
}
else{
for(icnt=1;icnt<iPos-1;icnt++){
temp=temp->next;
} 
newn = (PNODE)malloc(sizeof(NODE));
newn->data=No;
newn->next=NULL;
newn->prev=NULL;

newn->next=temp->next;
temp->next->prev=newn;
temp->next=newn;
newn->prev=temp;
}

}

void DeleteAtPos(PPNODE Head, int iPos)
{

int iLength=0;
iLength=Count(*Head);
PNODE newn=NULL;
PNODE temp=*Head;
int icnt=0;

if((iPos<1) &&(iPos>iLength)){
printf("Invalid input");
return;
}
if(iPos==1){
DeleteFirst(Head);
}
else if(iPos==iLength){
DeleteLast(Head);
}
else{
for(icnt=1;icnt<iPos-1;icnt++){
temp=temp->next;
}
temp->next=temp->next->next;
free(temp->next->prev);
temp->next->prev=temp;
}

}

int main()
{
    PNODE First = NULL;
int iRes=0;
   InsertFirst(&First,101);
     InsertFirst(&First,102);
     InsertFirst(&First,103);
     InsertFirst(&First,104);
InsertAtPos(&First,105,4);
InsertLast(&First,88);
 //DeleteFirst(&First);
//DeleteLast(&First);
DeleteAtPos(&First,3);
  Display(First);

iRes=Count(First);
printf("%d\t",iRes);
    return 0;
}