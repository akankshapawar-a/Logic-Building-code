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

}
void DeleteFirst(PPNODE Head){

}
void DeleteLast(PPNODE Head){

}
void DeleteAtPos(PPNODE Head ,int pos){

}
int main(){
PNODE first =NULL;
int ires=0;
InsertFirst(&first,34);

InsertFirst(&first,67);
InsertLast(&first,12);
Display(first);
ires=count(first);
printf("%d",ires);
return 0;
}