#include<iostream>
using namespace std;
class Array{
public:
int iSize;
int *Arr;
Array(int iNo){
iSize=iNo;
Arr=new int[iSize];
}
~Array(){
delete []Arr;
}
void Accept(){
cout<<"enter the elements:"<<"\n";
int iCnt=0;
for(iCnt=0;iCnt<iSize;iCnt++){
cin>>Arr[iCnt];
}

}
void Display(){

cout<<"elements in array are:"<<"\n";
int iCnt=0;
for(iCnt=0;iCnt<iSize;iCnt++){
cout<<Arr[iCnt]<<"\n";
}
}
};

int main(){
int iNo;
cout<<"enter the element:";
cin>>iNo;
Array obj(iNo);
obj.Accept();
obj.Display();
return 0;
}