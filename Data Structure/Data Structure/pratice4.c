//singly circular ll

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int No)
{
PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));
newn->data=No;
newn->next=NULL;
if(*Head==NULL && *Tail==NULL){
*Head=newn;
*Tail=newn;
}
else{
newn->next=*Head;
*Head=newn;
}
(*Tail)->next=*Head;
}
void InsertLast(PPNODE Head, PPNODE Tail, int No)
{
PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));
newn->data=No;
newn->next=NULL;
if(*Head==NULL && *Tail==NULL){
*Head=newn;
*Tail=newn;
}
else{
(*Tail)->next=newn;
*Tail=newn;
}
(*Tail)-next=*Head;
}


void InsertAtPos(PPNODE Head, PPNODE Tail, int No, int iPos)
{
int iLength=0;
iLength=count(*Head);
PNODE newn=NULL;
PNODE temp=*Head;
int icnt=0;
if((pos<1) || (pos>iLength+1)){
printf("Invalid Input");
return;
}
if(pos==1){
InsertFirst(Head,No);
}
else if(pos=iLength+1){
InsertLast(Head,No);
}
else{
newn=(PNODE)malloc(sizeof(NODE));
newn->data=No;
newn->next=NULL;
for(icnt=1;icnt<pos-1;icnt++){
temp=temp->next;
}
newn->next=temp->next;
temp->next=newn;
}
}
void DeleteFirst(PPNODE Head, PPNODE Tail)
{
if(*Head==NULL && *Tail==NULL){
return ;
}
else if(*Head==*Tail){
free(*Head);
*Head=NUll;
*Tail=NULL;
}
else{
*Head=(*Head)->next;
free((*Tail)->next);
(*Tail)->next=*Head;
}

}
void DeleteLast(PPNODE Head, PPNODE Tail)
{
PNODE temp=*Head;
if(*Head==NULL && *Tail==NULL){
return ;
}
else if(*Head==*Tail){
free(*Head);
*Head=NUll;
*Tail=NULL;
}
else{
while(temp->next!=*Tail){
temp=temp->next;
}
free(*Tail);
*Tail=temp;
(*Tail)->next=*Head;
}

}
void DeleteAtPos(PPNODE Head, PPNODE Tail,int iPos)
{}
void Display(PNODE Head, PNODE Tail)
{
if(Head!=NULL && Tail!=NULL){
do{
printf("%d",Head->data);
Head=Head->next;
}while(Head!=Tail->next);
}
else
    {
        printf("Linked List is empty\n");
    }
}
int Count(PNODE Head, PNODE Tail)
{
  int icnt=0;
if(Head!=NULL && Tail!=NULL){
do{
icnt++;
Head=Head->next;
}while(Head!=Tail->next);
return icnt;
}
 else
    {
       return 0;
    }

}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;          

    return 0;
}