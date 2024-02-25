// Accept number from user and display multiplication of factor
#include<iostream>
using namespace std;
int multiplication(int iNo){
int mul=1;
int iCnt=0;
for(iCnt=1;iCnt<iNo;iCnt++){
mul=mul+iCnt;
}
return mul;
}
int main(){
int iValue=0;
int iRes=0;

cout<<"enter any number:";
cin>>iValue;
iRes=multiplication(iValue);
return 0;
}