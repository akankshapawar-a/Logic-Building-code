#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
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

if(*Head!=NULL){
*Head=newn;
}
else{
(*Head)->prev=newn;
newn->next=*Head;
*Head=newn;
}
}
void InsertLast(PPNODE Head,int No){

}
void InsertAtPos(PPNODE Head,int No,int pos){

}
void DeleteFirst(PPNODE Head){

}
void DeleteLast(PPNODE Head){

}
void DeleteAtPos(PPNODE Head,int pos){

}
void Display(PNODE Head){
printf("enter elements in linkedlist:\n");
printf("NULL <=> ");
while(Head!=NULL){
printf("|%d|<=>",Head->data);
Head=Head->next;
}
 printf("NULL \n");
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
int iRet = 0;
PNODE first=NULL;
InsertFirst(&first,45);
InsertFirst(&first,21); 
iRet = count(first);
Display(first);
return 0;
}