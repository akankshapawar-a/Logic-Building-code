#include<iostream>
using namespace std;

typedef struct node{
int data;
struct node *next;
}NODE,*PNODE;

class SinglyLL{
private :
PNODE First;
int iCount;
public :
SinglyLL();
~SinglyLL();

void InsertFirst(int no);
void InsertLast(int no);
void InsertAtPos(int no ,int pos);

void DeleteFirst();
void DeleteLast();
void DeleteAtPos(int pos);

void Display();
int Count();
};

void SinglyLL::InsertFirst(int no){
PNODE newn=NULL;   
newn =new NODE;    // newn = (PNODE)malloc(sizeof(NODE)); 
  
newn->data=no;
newn->next=NULL;
 
if(First==NULL){
First=newn;
}
else{
newn->next=First;
First=newn;
}
iCount++;
}
void SinglyLL::InsertLast(int no){
PNODE newn=NULL;   
newn =new NODE;    // newn = (PNODE)malloc(sizeof(NODE)); 
  
newn->data=no;
newn->next=NULL;
 
if(First==NULL){
First=newn;
}
else{
PNODE temp=First;
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=newn;
}
iCount++;
}

void SinglyLL::DeleteFirst(){
if(First==NULL){
return ;
}
else if(First->next==NULL){
delete First;//free(First);
First=NULL;
}
else{
PNODE temp=First;
First=First->next;
delete temp;
}
iCount--;
}
void SinglyLL::DeleteLast(){
if(First==NULL){
return ;
}
else if(First->next==NULL){
delete First;//free(First);
First=NULL;
}
else{
PNODE temp=First;
while(temp->next->next!=NULL){
temp=temp->next;
}
delete temp->next;
temp->next=NULL;
}
iCount--;
}

void SinglyLL::Display(){
PNODE temp=First;
cout<<"Elements of Linked list are : "<<"\n";
while(temp!=NULL){
cout<<"|"<<temp->data<<"|->";
temp=temp->next;
}
cout<<"NULL"<<"\n";
}
int SinglyLL::Count(){
return iCount;
}


SinglyLL ::SinglyLL(){
//cout<<"Inside Constructor";
First=NULL;
iCount=0;
}

SinglyLL::~SinglyLL(){
    cout<<"Inside destructor\n";

}


void SinglyLL::InsertAtPos(int no ,int pos){
if((pos<1) || (pos>iCount)){
 cout<<"Invalid position\n";
  return;
}

if(pos==1){
InsertFirst(no);
}
else if(pos==iCount+1){
  InsertLast(no);
}
else{
PNODE temp=First;
for(int iCnt=1;iCnt<pos-1;iCnt++){
temp=temp->next;
}
PNODE newn=new NODE;
newn->data=no;
newn->next=NULL;

newn->next=temp->next;
temp->next=newn;
iCount++;
}

}

void SinglyLL::DeleteAtPos(int pos){
if((pos<1) || (pos>iCount)){
 cout<<"Invalid position\n";
  return;
}

if(pos==1){
DeleteFirst();
}
else if(pos==iCount){
  DeleteLast();
}
else{
PNODE temp=First;
PNODE tempx=NULL;
for(int iCnt=1;iCnt<pos-1;iCnt++){
temp=temp->next;
}
tempx=temp->next;
temp->next=temp->next->next;
delete tempx;
iCount--;
}

}


int main(){
int iRet=0;

SinglyLL obj1;  
SinglyLL obj2;  

obj1.InsertFirst(51);
obj1.InsertFirst(21);
obj1.InsertFirst(11);
obj1.InsertLast(101);
obj1.InsertLast(111);
obj1.InsertAtPos(55,2);

obj1.DeleteFirst();
obj1.DeleteLast();
obj1.DeleteAtPos(4);
obj1.Display();
iRet=obj1.Count();
cout<<iRet;



return 0;
}