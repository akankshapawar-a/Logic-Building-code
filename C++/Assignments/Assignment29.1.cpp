/*
1.Write a program which accept one number from user and count number of ON (1) bits in it without using % and / operator.
enter any number:11
Result is:3

*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT onBit(UINT iNo){
UINT count =0;
while(iNo!=0){
if(iNo & 1){
count++;
}
iNo=iNo>>1;
}
return count;
}
int main(){
UINT iValue=0;
UINT iRes=0;
cout<<"enter any number:";
cin>>iValue;
iRes=onBit(iValue);
cout<<"Result is:"<<iRes<<endl;
return 0;
}