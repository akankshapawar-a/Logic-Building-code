#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT OffBit(UINT iNo ){
UINT iMask=0XFFFFFFBF;
UINT iResult=0;
iResult=iNo & iMask;
return iResult;

}
int main(){
UINT iRet=0;
UINT iValue=0;
cout<<"enter any number:";
cin>>iValue;
iRet=OffBit(iValue);
cout<<iRet;
return 0;

}