#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
int data;
struct Node *next;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,PPNODE Tail,int No){
PNODE newn=NULL;
newn=(PNODE) malloc(sizeof(NODE));
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
void InsertLast(PPNODE Head,PPNODE Tail,int No){
PNODE newn=NULL;
newn=(PNODE) malloc(sizeof(NODE));
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
(*Tail)->next=*Head;
}




void Display(PNODE Head, PNODE Tail){
if(Head!=NULL && Tail!=NULL){
do{
printf("|%d|->",Head->data);
Head=Head->next;
}while(Head!=Tail->next);
printf("\n");
}
 else
    {
        printf("Linked List is empty\n");
    }
}

int Count(PNODE Head, PNODE Tail){
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
void DeleteFirst(PPNODE Head,PPNODE Tail){
if(*Head==NULL && *Tail==NULL){
  return ;
}
else if(*Head==*Tail){
free(*Head);
*Head=NULL;
*Tail=NULL;
}
else{
*Head=(*Head)->next;
free((*Tail)->next);
(*Tail)->next=*Head;
}
}

void DeleteLast(PPNODE Head,PPNODE Tail){
PNODE temp=*Head;
if(*Head==NULL && *Tail==NULL){
  return ;
}
else if(*Head==*Tail){
free(*Head);
*Head=NULL;
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


void InsertAtPos(PPNODE Head,PPNODE Tail,int No,int pos){
int iLength=0;
int icnt=0;
PNODE newn=NULL;
PNODE temp=*Head;
iLength=Count(*Head,*Tail);
if((pos<1) || (pos>iLength+1)){
printf("invalid input");
return;
}
if(pos==1){
InsertFirst(Head,Tail,No);
}
else if(pos==iLength+1){
InsertLast(Head,Tail,No);
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

void DeleteAtPos(PPNODE Head,PPNODE Tail,int pos){
int iLength=0;
int icnt=0;
PNODE temp=*Head;
PNODE tempx=NULL;
iLength=Count(*Head,*Tail);
if((pos<1) || (pos>iLength)){
printf("invalid input");
return;
}
if(pos==1){
DeleteFirst(Head,Tail);
}
else if(pos==iLength){
DeleteLast(Head,Tail);
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

int main(){
PNODE First=NULL;
PNODE Last=NULL;
int iRes=0;
InsertFirst(&First,&Last,51);
InsertLast(&First,&Last,101);
InsertFirst(&First,&Last,21);
InsertFirst(&First,&Last,11);
InsertLast(&First,&Last,111);
InsertLast(&First,&Last,121);
//DeleteFirst(&First,&Last);
//DeleteLast(&First,&Last);
InsertAtPos(&First,&Last,55,2);
DeleteAtPos(&First,&Last,2);

Display(First,Last);
iRes=Count(First,Last);
printf("%d",iRes);
return 0;
}