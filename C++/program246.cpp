#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT Toggle(UINT iNo ){
UINT iMask=0X00000040;

return (iNo ^iMask);

}
int main(){
UINT iRet=0;
UINT iValue=0;
cout<<"enter any number:";
cin>>iValue;

iRet=Toggle(iValue);
cout<<iRet;
return 0;

}