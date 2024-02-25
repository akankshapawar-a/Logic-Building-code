//DOUBLY LINEAR LL
#include<stdio.h>
#include<stdlib.h>

typedef struct{
int data;
struct Node *next;
struct Node *prev;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,int No){
PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));
newn->data=No;
newn->next=NULL;
newn->prev=NULL;
if(*Head==NULL){
*Head=newn;
}
else{
newn->next=*Head;
(*Head)->prev=newn;
*Head=newn;
}
}

void InsertLast(PPNODE Head,int No){
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
temp->next=newn;
newn->prev=temp;
}
}



void InsertAtPos(PPNODE Head,int No,int pos){
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
newn->prev=NULL;
for(icnt=1;icnt<pos-1;icnt++){
temp=temp->next;
}
newn->next=temp->next;
temp->next->prev=newn;
newn->prev=temp;
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
free((*Head)->prev);
(*Head)->prev=NULL;
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




void DeleteAtPos(PPNODE Head,int pos){
int iLength=0;
iLength=count(*Head);
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

for(icnt=1;icnt<pos-1;icnt++){
temp=temp->next;
}
temp->next=temp->next->next;
free(temp->next->prev);
temp->next->prev=temp;
}


}

void Display(PNODE Head){
printf("Enter element in linkedlist:");
printf("NULL<=>");
while(Head!=NULL){
printf("|%d|<=>",Head->data);
Head=Head->next;
}
printf("NULL");

}

int Count(PNODE Head){
int icnt=0;
while(Head!=NULL){
icnt++;
Head=Head->next;
}

return icnt;
}

int main(){
PNODE First =NULL;
int iRes=0;
InsertFirst(&First,96);
InsertLast(&First,69);
InsertFirst(&First,12);
InsertFirst(&First,66);
DeleteFirst(&First);
DeleteLast(&First);
DeleteLast(&First);


Display(First);
iRes=Count(First);
printf("\nNode in LL:%d",iRes);
return 0;
}