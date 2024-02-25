#include<iostream>
using namespace std;

typedef class node
{
public:
int data;
struct node *next;
struct node *prev;
 
node(){
data=0;
next=NULL;
prev=NULL;
}

node(int value){
data=value;
next=NULL;
prev=NULL;
}
}NODE,*PNODE;
class DoubLL{
private:
PNODE First;
PNODE Last;
int iCount;
public:
DoubLL();
~DoubLL();
void InsertFirst(int no );
void InsertLast(int no);
void InsertAtPos(int no, int pos);
void DeleteFirst();
void DeleteLast();
void DeleteAtPos(int pos);
void Display();
int Count();


};

void DoubLL::InsertFirst(int no ){}
void DoubLL::InsertLast(int no){}
void DoubLL::InsertAtPos(int no, int pos){}
void DoubLL::DeleteFirst(){}
void DoubLL::DeleteLast(){}
void DoubLL::DeleteAtPos(int pos){}
void DoubLL::Display(){}
int DoubLL::Count(){}
DoubLL::DoubLL(){}
DoubLL::~DoubLL(){}

int main(){
DoubLL obj;
return 0;
}