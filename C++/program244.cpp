#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT OffBit(UINT iNo ){
UINT iMask=0X00000040;
UINT iResult=0;
iResult=iNo & iMask;
if(iResult==iMask){
return (iNo ^ iMask);
}
else{
return iNo;
}


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