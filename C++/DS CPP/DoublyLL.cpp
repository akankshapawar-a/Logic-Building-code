#include<iostream>
using namespace std;


typedef struct node{
int data;
struct node *next;
struct node *Prev;
}NODE ,PNODE;

class DoublyLL{
private:
PNODE First;
PNODE Last;
int iCount;
public:
DoublyLL();
~DoublyLL();

void InsertFirst(int no);
void InsertLast(int no);
void InsertAtPos(int no,int pos);
void DeleteFirst();
void DeleteLast();
void DeleteAtPos(int pos);
void Display();
int Count();
};

void DoublyLL::InsertFirst(int no){
PNODE newn=new NODE;
newn->data=no;
newn->next=NULL;
if(First==NULL && Last==NULL){
First=newn;
Last=newn;
}
else{

}
}
void DoublyLL::InsertLast(int no){
}
void DoublyLL::InsertAtPos(int no,int pos){
}
void DoublyLL::DeleteFirst(){
}
void DoublyLL::DeleteLast(){
}
void DoublyLL::DeleteAtPos(int pos){
}
void DoublyLL::Display(){
}
int DoublyLL::Count(){
return 0;
}
DoublyLL::DoublyLL(){

}
DoublyLL::~DoublyLL(){
}

int main(){
return 0;
DoublyLL obj;
}