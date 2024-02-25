/*
 write a program which display all elements which are Perfect from singly linear linked list 
Elements in LinkedList are:|28|->|110|->|230|->|320|->|240|->|6|->NULL
28
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



int Perfect(int No){

int sum=0;
int icnt=0;

for(icnt=1;icnt<=(No/2); icnt++){
if(No%icnt==0){
sum=sum+icnt;
}
}

return (sum==No);
}


void DisplayPerfect(PNODE Head){

while(Head!=NULL){
if(Perfect(Head->data)){
printf("\n%d\t",Head->data);
}
Head=Head->next;
}
}




int main(){
PNODE first =NULL;
InsertFirst(&first, 6);
InsertFirst(&first,240);
InsertFirst(&first,320);
InsertFirst(&first,230);
InsertFirst(&first,110);
InsertFirst(&first, 28);
Display(first);
 DisplayPerfect(first);
return 0;
}