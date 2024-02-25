#include<iostream>
using namespace std;

typedef struct node{
int data;
struct node *next;
struct node *prev;
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

void DoubLL::InsertFirst(int no );
void DoubLL::InsertLast(int no);
void DoubLL::InsertAtPos(int no, int pos);
void DoubLL::DeleteFirst();
void DoubLL::DeleteLast();
void DoubLL::DeleteAtPos(int pos);
void Display();
int Count();


int main(){
return 0;
}