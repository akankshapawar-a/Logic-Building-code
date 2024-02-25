#include<iostream>
using namespace std;
void display(int iNo1,int iNo2){
int iResult=0;
iResult=iNo1 & iNo2;
cout<<"and="<<iResult<<endl;

iResult=iNo1 | iNo2;
cout<<"Or="<<iResult<<endl;

iResult=iNo1 ^ iNo2;
cout<<"XOR="<<iResult<<endl;



}
int main(){
int iValue1=0;
int iValue2=0;

cout<<"enter any number";
cin>>iValue1;
cout<<"enter any number";
cin>>iValue2;
display(iValue1,iValue2);
return 0;
}