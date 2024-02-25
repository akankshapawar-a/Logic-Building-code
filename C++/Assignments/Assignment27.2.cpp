/*
2. Write a program which accept one number from user and off 7th and 10th bit of that number. Return modified number.
enter any number:577
Result is:1
*/
#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT offBit(UINT iNo){
UINT iMask=0X240;
UINT iResult=0;
iResult=iMask & iNo;
if(iResult ==iMask){
return (iMask^iNo);
}
else{
return iNo;
}
}
int main(){
UINT iValue=0;
UINT iRes=0;
cout<<"enter any number:";
cin>>iValue;
iRes=offBit(iValue);
cout<<"Result is:"<<iRes<<endl;
return 0;
}