/*
5. Write a program which accept one number from user and toggle contents of first and last nibble of the number. Return modified number. (Nibble is a group of four bits)
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT toggle(UINT iNo){
UINT iMask=0XF000000F;
UINT iResult=0;
iResult=(iMask ^ iNo);
return iResult;
}
int main(){
UINT iValue=0;
UINT iRes=0;
cout<<"enter any number:";
cin>>iValue;
iRes=toggle(iValue);
cout<<"Result is:"<<iRes<<endl;
return 0;
}