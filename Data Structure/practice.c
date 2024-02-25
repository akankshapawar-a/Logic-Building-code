#include<stdio.h>
#include<stdlib.h>

typedef struct{

int data;
struct Node *next;
}NODE ,*PNODE,**PPNODE;
void InsertFirst(PPNODE Head,int No){
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

void Display(PNODE Head){
printf("elements in linkedlist are:");
while(Head!=NULL){
printf("%d\t",Head->data);
 Head = Head->next;
}
}
int Count(PNODE Head){
int icnt=0;
while(Head!=NULL){
icnt++;
 Head = Head->next;
}
return icnt;
}
void DeleteFirst(PPNODE Head){

}


int main(){

PNODE first =NULL;
int iRes=0;
InsertFirst(&first,80);
InsertLast(&first,50);
Display(first);
iRes=Count(first);
printf("\n%d",iRes);
return 0;
}