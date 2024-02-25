#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;
};
typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;


void Display(PNODE Head ){
printf("Element in linked list are:");
while(Head!=NULL){
printf("%d\t",Head->data);
Head=Head->next;
}
}
int count(PNODE Head){
int iCnt=0;
while(Head!=NULL){
iCnt++;
Head=Head->next;
}
return iCnt;
}
void InsertFirst(PPNODE Head , int No){
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
void InsertLast(PPNODE Head , int No){
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
void InsertAtPos(PPNODE Head , int No,int pos){
int iLength=0;
iLength=count(*Head);
PNODE newn=NULL;
PNODE temp=*Head;
int icnt=0;

if((pos>1)||(pos<iLength+1)){
printf("Invalid input");
return;
}
if(pos==1){
InsertFirst(Head,No);
}
else if(pos==iLength+1){
InsertLast(Head ,No);
}else{
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
void DeleteAtPos(PPNODE Head ,int pos){
int iLength=0;
iLength=count(*Head);
PNODE temp=*Head;
PNODE tempx=NULL;
int icnt=0;
if((pos<1)||(pos>iLength)){
printf("Invalid input");
return;
}
if(pos==1){
DeleteFirst(Head);
}
else if(pos==iLength){
DeleteLast(Head );
}else{
for(icnt=1;icnt<pos-1;icnt++){
temp=temp->next;
}
tempx->next=temp->next->next;
free(tempx);
}

}
int main(){
PNODE first =NULL;
int ires=0;
InsertFirst(&first,34);

InsertFirst(&first,67);
InsertAtPos(&first, 25, 3);
  
DeleteAtPos(&first, 3);
DeleteFirst(&first);
InsertLast(&first,12);
Display(first);
ires=count(first);
printf("%d",ires);
DeleteLast(&first);
return 0;
}