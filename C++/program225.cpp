#include<iostream>
using namespace std;
void display(int iNo){
int iDigit=0;
 cout<<"Binary conversion if : "<<iNo<<"is : "<<"\n";

while(iNo!=0){
iDigit=iNo%2;
cout<<iDigit;
iNo=iNo/2;
}
cout<<endl;

}
int main(){
int iValue=0;
cout<<"enter any number";
cin>>iValue;
display(iValue);
return 0;
}