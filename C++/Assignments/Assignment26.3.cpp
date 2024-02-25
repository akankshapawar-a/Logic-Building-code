//1.Write a program which checks whether 7th ,15th, 21th and 28th bit is On or OFF

#include<iostream>
using namespace std;
typedef int BOOL;
typedef unsigned int UINT;
BOOL checkBit(UINT iNo){
UINT iMask=0X8104040;
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
cout<<"7th ,15th,21th and 28th bits are ON"<<"\n";
}
else{
cout<<"7th ,15th,21th and 28th bits are OFF"<<"\n";
}
return 0;
}


