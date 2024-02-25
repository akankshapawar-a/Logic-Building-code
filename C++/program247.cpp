#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT Toggle(UINT iNo ){
UINT iMask=0X00000040;
UINT iResult=0;
iResult=(iNo ^iMask);
return iResult;
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