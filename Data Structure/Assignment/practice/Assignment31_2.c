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
// int prime(int no){
//    boolean flag =false;
//   if(no==0 || no==1){
//       return flag;
//   } 
// for(int i=2;i<no;i++){
//     if(no%i==0){
//      printf("no is not prime");
//      flag=true;
//       break;
//     }
   
// }


int prime(int no){
    int i=0;
for( i=2;i<(no/2);i++){
    if(no%i==0){
     
      break;
    }

}
return i==(no/2)+1;
}

void Displayprime( PNODE Head ){
    while(Head!=NULL){
        if(prime(Head->data)){
            printf("%d",Head->data);
        }
        Head=Head->next;
    }
}
 
   


int main(){
    PNODE first=NULL;
    InsertFun(&first,5);
    InsertFun(&first,50);
    InsertFun(&first,89);
    InsertFun(&first,70);
    Display(first);

DisplayPrime(first);
return 0;
}