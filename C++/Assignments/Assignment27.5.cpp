/*
5. Write a program which accept one number from user and on its first 4 bits. Return modified number.
enter any number:73
Result is:79

*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT onBit(UINT iNo){
UINT iMask=0X0000000F;

UINT iResult=0;
iResult=iMask & iNo;

if(iResult == iMask){
return iNo;
}
else{
return (iMask | iNo);
}
}
int main(){
UINT iValue=0;
UINT iRes=0;
cout<<"enter any number:";
cin>>iValue;
iRes=onBit(iValue);
cout<<"Result is:"<<iRes<<endl;
return 0;
}