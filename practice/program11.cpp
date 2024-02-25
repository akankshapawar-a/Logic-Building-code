#include<iostream>
using namespace std;
int power(int base,int power){
int iCnt=0;
int iResult=1;
for( iCnt=1;iCnt<power;iCnt++){
iResult=iResult*base;
}
return iResult;
}
int main(){
int Value1=0;
int Value2=0;
int iRet=0;
cout<<"enter number base no:";
cin>>Value1;
cout<<"enter number power no:";
cin>>Value2;
iRet=power(Value1, Value2);
cout<<iRet;

return 0;
}