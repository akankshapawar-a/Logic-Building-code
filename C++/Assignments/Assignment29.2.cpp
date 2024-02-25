#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT onBit(UINT iNo1, UINT iNo2){
UINT count1 =0;
UINT count2 =0;

UINT ipos1=0;
UINT ipos2=0;

while(iNo1!=0 ){
if(iNo1 & 1 || iNo2 & 1){
ipos1=count1;
ipos2=count2;


}
iNo1=iNo1>>1;
iNo2=iNo2>>1;


}
if(ipos1==ipos2){
return ipos1;
}
else{
return 0;
}
}
int main(){
UINT iValue1=0;
UINT  iValue2=0;
UINT iRes=0;
cout<<"enter any number1:";
cin>>iValue1;
cout<<"enter any number2:";
cin>>iValue2;

iRes=onBit(iValue1,iValue2);
cout<<"Result is:"<<iRes<<endl;
return 0;
}