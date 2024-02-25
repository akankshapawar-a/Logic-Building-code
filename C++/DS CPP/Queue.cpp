#include<iostream>
using namespace std;
typedef class node{
public:
int data;
node *next;
node(int value){
data=value;
next=NULL;
}

}NODE,*PNODE;

class Queue{
private:
PNODE First;
int iCount;

public:
Queue();
void enqueue(int no);
int Dequeue();
void Display();
int Count();
};

Queue::Queue(){
First=NULL;
iCount=0;
}

void Queue::enqueue(int no){
PNODE newn=new NODE(no);
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
int Queue::Dequeue(){
int value=0;
if(iCount==0){
cout<<"Queue is empty\n";
return -1;
}
else if(iCount==1){
value=First->data;
delete First;
First=NULL;
}
else{
value=First->data;
delete First;
First=NULL;
}

}
iCount--;
return value;
}

void Queue:: Display(){
cout<<"Element of Queue are:"
PNODE temp=First;
for(int iCnt=1;iCnt<=iCount;iCnt++){
cout<<temp->data<<"\n";
temp=temp->next;
}
}
int Queue::Count(){
return iCount;
}


int main(){

int choice =1;
int value=0;
int iRet=0;
Queue obj;
cout<<"-----------------------------------------------------\n";
cout<<"Dynamic Implementation of Queue\n";
cout<<"-----------------------------------------------------\n";
while(choice!=0){
  cout<<"-----------------------------------------------------\n";
            cout<<"1 : enqueue element into Queue\n";
            cout<<"2 : dequeue element from the Queue\n";
            cout<<"3 : Display elements from Queue\n";
            cout<<"4 : Count number of elements from Queue\n";
            cout<<"0 : Terminate the application\n";
            cout<<"-----------------------------------------------------\n";

cout<<"Please enter the option : \n";
cin>>Choice;

switch(choice){
case 1:
cout<<"Enter the element that you want to enqueue\n";
cin>>value;
obj.enqueue(value);
break;

case 2:
iRet=obj.dequeue();
if(iRet!=1){
cout<<"dequeueed element from Queue is : "<<iRet<<"\n";

}
break;

case 3:
iRet=obj.Display();
break;

case 4:
iRet=obj.Count();
cout<<"Number of elements are : "<<iRet<<"\n";
break;

case 0:
 cout<<"Thank you for using the applicatoion\n";
  break;

default:
 cout<<"Please enter valid option\n";
  break;
}
}
return 0;
}