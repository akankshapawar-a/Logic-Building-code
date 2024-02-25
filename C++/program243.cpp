#include<iostream>
using namespace std;
typedef unsigned int UINT;
bool Checkbit(UINT iNo ,UINT ipos1 ,UINT ipos2){
UINT iMask1=0X00000001;
UINT iMask2=0X00000001;

UINT iResult=0;

if((ipos1<1) || (ipos1>32 )||  (ipos2<1) || (ipos2>32)){
cout<<"Inavlid bit";
return false;
}
iMask1=iMask1 << (ipos1-1);
iMask2=iMask2<< (ipos2-1);
iResult=iNo & (iMask1 | iMask2);
if(iResult==(iMask1 | iMask2)){
return true;
}
else{
return false;
}
}
int main(){
bool bRet=false;
UINT iValue=0;
UINT bit1=0,bit2=0;
cout<<"enter any number:";
cin>>iValue;
cout<<"enter the bit 1:";
cin>>bit1;
cout<<"enter the bit 2:";
cin>>bit2;
bRet=Checkbit(iValue,bit1,bit2);
if(bRet==true){
cout<<"Bit is ON"<<endl;
}
else{
cout<<"Bit is OFF"<<endl;

}
return 0;

}