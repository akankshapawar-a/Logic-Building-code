#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node *next;
};
typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;


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
PNODE temp=*Head;
newn=(PNODE)malloc(sizeof(NODE));
newn->data=No;
newn-> next=NULL;
if(*Head==NULL){
  *Head =newn;
}
else{
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newn;
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
printf("%d\t",Head->data);
Head=Head->next;
}

}
int count(PNODE Head){
int iCnt=0;
while(Head !=NULL){
iCnt++;
Head=Head->next;
}

return iCnt;
}


int main(){
PNODE first=NULL;
int iRes=0;
 InsertFirst(&first ,51);	
 InsertFirst(&first ,21);
 InsertFirst(&first ,11);
InsertLast(&first,123);
Display(first);
iRes=count(first);
printf("Number of elements: %d\n",iRes);
return 0;
}