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

class Stack{
private:
PNODE First;
int iCount;

public:
Stack();
void push(int no);
int pop();
void Display();
int Count();
};

Stack::Stack(){
First=NULL;
iCount=0;
}

void Stack::push(int no){
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
int Stack::pop(){
int value=0;
if(iCount==0){
cout<<"Stack is empty\n";
return -1;
}
else if(iCount==1){
value=First->data;
delete First;
First=NULL;
}
else{
PNODE temp=First;
while(temp->next->next!=NULL){
temp=temp->next;
}
value=temp->next->data;
delete temp->next;
temp->next=NULL;
}
iCount--;
return value;
}

void Stack:: Display(){
cSout<<"Element of stack are:"
PNODE temp=First;
for(int iCnt=1;iCnt<=iCount;iCnt++){
cout<<temp->data<<"\n";
temp=temp->next;
}
}
int Stack::Count(){
return iCount;
}


int main(){

int choice =1;
int value=0;
int iRet=0;
Stack obj;
cout<<"-----------------------------------------------------\n";
cout<<"Dynamic Implementation of Stack\n";
cout<<"-----------------------------------------------------\n";
while(choice!=0){
  cout<<"-----------------------------------------------------\n";
            cout<<"1 : Push element into stack\n";
            cout<<"2 : Pop element from the stack\n";
            cout<<"3 : Display elements from stack\n";
            cout<<"4 : Count number of elements from stack\n";
            cout<<"0 : Terminate the application\n";
            cout<<"-----------------------------------------------------\n";

cout<<"Please enter the option : \n";
cin>>Choice;

switch(choice){
case 1:
cout<<"Enter the element that you want to push\n";
cin>>value;
obj.push(value);
break;

case 2:
iRet=obj.pop();
if(iRet!=1){
cout<<"Poped element from stack is : "<<iRet<<"\n";

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