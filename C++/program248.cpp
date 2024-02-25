#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT Toggle(UINT iNo ,UINT ipos){
UINT iMask=0X00000040;
UINT iResult=0;
iMask=iMask<<(ipos-1);
iResult=(iNo ^iMask);
return iResult;
}
int main(){
UINT iRet=0;
UINT iValue=0;
UINT Bit=0;
cout<<"enter any number:";
cin>>iValue;
cout<<"enter any number:";
cin>>Bit;

iRet=Toggle(iValue,Bit);
cout<<iRet;
return 0;

}