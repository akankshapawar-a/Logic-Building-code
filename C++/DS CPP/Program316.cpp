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

class LinkedList{
public:
PNODE First;
int iCount;

LinkedList(){
First=NULL;
iCount=0;
}
virtual void InsertFirst(int no )=0;
virtual void InsertLast(int no)=0;
virtual void InsertAtPos(int no, int pos)=0;
virtual void DeleteFirst()=0;
virtual void DeleteLast()=0;
 virtual void DeleteAtPos(int pos)=0;
void Display(){
PNODE temp=First;
cout<<"Enter element in LinkedList:"<<"\n";
for(int iCnt=1;iCnt<=iCount;iCnt++){
cout<<"|"<<temp->data<<"|->";
temp=temp->next;
}
 cout<<"NULL"<<"\n";
}
 int Count(){
return iCount;
}

};

class DoubLL : public LinkedList{
private:

PNODE Last;
public:
DoubLL();
~DoubLL();
void InsertFirst(int no );
void InsertLast(int no);
void InsertAtPos(int no, int pos);
void DeleteFirst();
void DeleteLast();
void DeleteAtPos(int pos);

};

void DoubLL::InsertFirst(int no ){
PNODE newn=new NODE;
if(First==NULL && Last==NULL){
First=newn;
Last=newn;
}
else{
newn->next=First;
First->prev=newn;
First=newn;
}
Last->next=First;
First->prev=Last;
iCount++;
}

void DoubLL::InsertLast(int no){
PNODE newn=new NODE;
if(First==NULL && Last==NULL){
First=newn;
Last=newn;
}
else{
Last->next=newn;
newn->prev=Last;
Last=Last->next; 
}
Last->next=First;
First->prev=Last;
iCount++;

}

void DoubLL::InsertAtPos(int no, int pos){
 if((pos < 1) || (pos > iCount+1))
    {
        cout<<"Invalid position\n";
        return;
    }
    
    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE temp = First;

        for(int icnt = 1; icnt < ipos -1; icnt++)
        {
            temp = temp->next;
        }

        PNODE newn = new NODE(no);

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        iCount++;
    }

}


void DoubLL::DeleteFirst(){
if(iCount==0){
return;
}
else if(iCount==1){
delete First;
First=NULL;
Last=NULL;
}
else{
First=First->next;
delete Last->next;
First->prev=Last;
Last->next=First;
}
iCount--;
}
void DoubLL::DeleteLast(){
if(iCount==0){
return;
}
else if(iCount==1){
delete First;
First=NULL;
Last=NULL;
}
else{
Last=Last->prev;
delete Last->next;
First->prev=Last;
Last->next=First;
}
iCount--;

}
void DoubLL::DeleteAtPos(int pos){
    if((ipos < 1) || (pos > iCount))
    {
        cout<<"Invalid position\n";
        return;
    }
    
    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = First;

        for(int icnt = 1; icnt < ipos -1; icnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        iCount--;
    }
}
DoubLL::DoubLL(){
Last=NULL;
}
DoubLL::~DoubLL(){}

int main(){
DoubLL obj;
obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);

    obj.DeleteFirst();
    obj.DeleteLast();
 obj.Display();
    cout<<"Length of Linked list is : "<<obj.Count()<<"\n";

return 0;
}