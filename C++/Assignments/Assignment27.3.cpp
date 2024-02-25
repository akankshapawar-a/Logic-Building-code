/*
Write a program which accept one number from user and toggle 7th bit of that number. Return modified number.
enter any number:137
Result is:201
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT offBit(UINT iNo){
UINT iMask=0X40;
UINT iResult=0;
iResult=(iMask ^ iNo);
return iResult;
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