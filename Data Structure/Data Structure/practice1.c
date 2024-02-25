//SINGLY LINEAR LL
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
int data;
struct Node *next;
}NODE ,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head, int No){
PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));
newn->data=No;
newn->next=NULL;
if(*Head==NULL){
*Head=newn;
}
else{
newn->next=*Head;
*Head=newn;
}

}

void InsertLast(PPNODE Head, int No){
PNODE newn=NULL;
PNODE temp=*Head;
newn=(PNODE)malloc(sizeof(NODE));
newn->data=No;
newn->next=NULL;
if(*Head==NULL){
*Head=newn;
}
else{
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=newn;
}
}

void InsertAtPos(PPNODE Head, int No,int pos){
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

void DeleteFirst(PPNODE Head){
PNODE temp=*Head;
if(*Head==NULL){
return;
}
else if((*Head)->next==NULL){
free(*Head);
*Head=NULL;
}
else{
*Head=(*Head)->next;
free(temp);
}
}

void DeleteLast(PPNODE Head){
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


void DeleteAtPos(PPNODE Head, int pos){
int iLength=0;
iLength=count(*Head);
PNODE tempx=NULL;
PNODE temp=*Head;
int icnt=0;
if((pos<1) || (pos>iLength)){
printf("Invalid Input");
return;
}
if(pos==1){
DeleteFirst(Head);
}
else if(pos=iLength){
DeleteLast(Head);
}
else{
for(icnt=1;icnt<pos-1;icnt++){
temp=temp->next;
}
tempx=temp->next;
temp->next=temp->next->next;
free(tempx);
}

}

void Display(PNODE Head){
printf("Enter element in linkedlist:");
while(Head!=NULL){
printf("|%d|->",Head->data);
Head=Head->next;
}
printf("NULL");
}
int count(PNODE Head){
int icnt=0;
while(Head!=NULL){
icnt++;
Head=Head->next;
}

return icnt;
}
int main(){
PNODE First=NULL;
int iRes=0;
InsertFirst(&First,89);
InsertFirst(&First,88);
InsertLast(&First,78);
//DeleteLast(&First);
//DeleteFirst(&First);

InsertAtPos(&First,66,2);
DeleteAtPos(&First,2);
Display(First);

iRes=count(First);
printf("\nnode in LL:%d",iRes);
return 0;
}