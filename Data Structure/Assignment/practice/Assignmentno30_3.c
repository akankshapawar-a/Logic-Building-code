#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node *next;
}NODE,*PNODE,**PPNODE;

void InsertFun(PPNODE Head ,int no){
PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));
newn->data=no;
newn->next=NULL;
if(*Head==NULL){
    *Head=newn;
}
else{
    newn->next=*Head;
*Head=newn;
}
}
void Display(PNODE Head){
    while(Head!=NULL){
printf("\t%d",Head->data);
Head=Head->next;

    }
printf("NULL");
}

int Add(PNODE Head){
    PNODE temp=Head;
    int sum=0;
    while(temp!=NULL){
       sum=sum+temp->data;
        temp=temp->next;
    }
     return sum;
}

int main(){
    PNODE first=NULL;
    InsertFun(&first,40);
    InsertFun(&first,50);
    InsertFun(&first,60);
    InsertFun(&first,70);
    Display(first);
int res=Add(first);
printf("\n%d",res);

}