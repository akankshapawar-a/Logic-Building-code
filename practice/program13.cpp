#include<iostream>
using namespace std;
int fact(int iNo){
int iCnt=0;
int fact=1;
for( iCnt=iNo;iCnt>1;iCnt--){
fact=fact*iCnt;
}
return fact;
}
int main(){
int Value1=0;

int iRet=0;
cout<<"enter number base no:";
cin>>Value1;

iRet=fact(Value1);
cout<<iRet;

return 0;
}