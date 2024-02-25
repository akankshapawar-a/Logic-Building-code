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
printf("\tNULL");
}

int large(PNODE Head ){
    PNODE temp=Head;
    int max=0;
    while(temp!=NULL){
if(temp->data>max){
 max=temp->data;
}
        temp=temp->next;

    }
    return max;

}
int main(){
    PNODE first=NULL;
    InsertFun(&first,40);
    InsertFun(&first,50);
    InsertFun(&first,60);
    InsertFun(&first,70);
    Display(first);
int res=large(first);
printf("\n%d",res);

}