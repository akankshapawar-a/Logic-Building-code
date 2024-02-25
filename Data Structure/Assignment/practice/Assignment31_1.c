#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
int data;
struct Node *next;
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
 InsertFun(&first,40);
    InsertFun(&first,50);
    InsertFun(&first,60);
    InsertFun(&first,70);
Display(first);
 DisplayPerfect(first);
return 0;
}