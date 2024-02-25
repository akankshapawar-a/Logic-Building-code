//1.Write a program which checks whether 5th and 18th bit is On or OFF

#include<iostream>
using namespace std;
typedef int BOOL;
typedef unsigned int UINT;
BOOL checkBit(UINT iNo){
UINT iMask=0X20010;
UINT iResult=0;
iResult=iNo & iMask;
if(iResult==iMask){
return true;
}
else{
return false;
}

}
int main(){
UINT iValue=0;
BOOL bRet=false;
cout<<"enter any number:";
cin>>iValue;
bRet=checkBit(iValue);
if(bRet==true){
cout<<"5th and 18th bits are ON"<<"\n";
}
else{
cout<<"5th and 18th bits are OFF"<<"\n";
}
return 0;
}


