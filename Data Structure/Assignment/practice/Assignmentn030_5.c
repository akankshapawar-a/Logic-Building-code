#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
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
//printf("\t NULL");
}

int Smaller(PNODE Head ){
    PNODE temp=Head;
    int min=INT_MAX;
while(temp!=NULL){
    if(temp->data<min){
        min=temp->data;
    }
    temp=temp->next;
}
return min;
}

int main(){
    PNODE first=NULL;
    InsertFun(&first,40);
    InsertFun(&first,50);
    InsertFun(&first,60);
    InsertFun(&first,70);
    Display(first);
int res=Smaller(first);
printf("\n%d",res);

}