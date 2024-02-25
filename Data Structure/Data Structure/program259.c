#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node *next;
};
typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

int count(PNODE Head){
return 0;
}
void InsertFirst(PPNODE Head ,int No){
PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));
newn->data=No;
newn-> next=NULL;
if(*Head==NULL){
  *Head =newn;
}
else{
newn->next=*Head;
*Head=newn;
}
}
void InsertLast(PPNODE Head ,int No){
PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));
newn->data=No;
newn-> next=NULL;
if(*Head==NULL){
  *Head =newn;
}
}
void InsertAtPos(PPNODE Head ,int No , int pos){}



void delectFirst(PPNODE Head ){

}
void delectLast(PPNODE Head){

}
void delectAtPos(PPNODE Head , int pos){

}

void Display(PNODE Head){
printf("Elements of Linked list are : \n");
while(Head !=NULL){
printf("|%d|->\t",Head->data);
Head=Head->next;
}
printf("NULL");
}


int main(){
PNODE first=NULL;
 InsertFirst(&first ,51);	
 InsertFirst(&first ,21);
 InsertFirst(&first ,11);
Display(first);
return 0;
}