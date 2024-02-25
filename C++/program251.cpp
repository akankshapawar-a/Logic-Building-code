#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT OffBit(UINT iNo ){
    return (iNo & 0XFFFFFFBF);

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