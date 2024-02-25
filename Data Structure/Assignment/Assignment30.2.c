/*

1. Write a program which search first occurrence of particular element from singly linear linked list. 
Function should return position at which element is found. int SearchFirstOcc( PNODE Head, int no );
Elements in LinkedList are:|10|->|20|->|30|->|40|->|50|->|30|->|70|->NULL
input:30
6

*/
#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
int data;
struct Node *next;
}NODE,*PNODE,**PPNODE;

void Display(PNODE Head){
printf("Elements in LinkedList are:");
while(Head!=NULL){
printf("|%d|->",Head->data);
Head=Head->next;
}
printf("NULL");

}


void InsertFirst(PPNODE Head ,int No){

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

void InsertLast(PPNODE Head ,int No){
PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));
PNODE temp=*Head;
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






void InsertAtPos(PPNODE Head ,int No,int ipos){
int iLength=0;
iLength=count(*Head);
PNODE newn=NULL;
int icnt=0;
PNODE temp=*Head;
if((ipos<1) || (ipos>iLength+1)){
printf("invalid input");
return;
}
if(ipos==1){
InsertFirst(Head,No);
}
else if(ipos==iLength+1){
InsertLast(Head,No);
}
else{
newn=(PNODE)malloc(sizeof(NODE));
newn->data=No;
newn->next=NULL;
for(icnt=1;icnt<ipos-1;icnt++){
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







void DeleteAtPos(PPNODE Head ,int ipos){
int iLength=0;
iLength=count(*Head);
PNODE newn=NULL;
PNODE temp=*Head;
int icnt=0;
PNODE tempx=NULL;
if((ipos<1)||(ipos>iLength+1)){
printf("invalid input");
return ;
}
if(ipos==1){
DeleteFirst(Head);
}
else if(ipos==iLength+1){
DeleteLast(Head);
}
else{
for(icnt=1;icnt<ipos-1;icnt++){
temp=temp->next;
}
tempx=temp->next;
temp->next=temp->next->next;
free(tempx);
}
}
int count(PNODE Head){
int icnt=0;
while(Head!=NULL){
icnt++;
Head=Head->next;
}
return icnt;
}




int SearchLastOcc(PNODE Head , int target){
int pos=1;
int icnt=0;
PNODE temp=Head;
while(temp!=NULL){
if(temp->data==target){
pos=icnt;

}
icnt++;

temp=temp->next;
}
return pos;
}







int main(){
PNODE first =NULL;
int iRes=0;
InsertFirst(&first,70);
InsertFirst(&first,30);
InsertFirst(&first,50);
InsertFirst(&first,40);
InsertFirst(&first,30);
InsertFirst(&first,20);
InsertFirst(&first,10);
Display(first);
iRes= SearchLastOcc(first,30);
printf("\n%d",iRes);
return 0;
}