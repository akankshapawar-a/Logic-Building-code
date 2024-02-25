// Accept number from user and display multiplication of factor
#include<iostream>
using namespace std;
class mul{
public:
int iNo;
mul(int x){
iNo=x;
}
int multiplication(){
int mul=1;
int iCnt=0;
for(iCnt=1;iCnt<iNo;iCnt++){
if((iNo%iCnt)==0){
mul=mul*iCnt;
}
}
return mul;
}
};
int main(){

int iValue=0;
int iRes=0;

cout<<"enter any number:";
cin>>iValue;
mul obj(iValue);
iRes=obj.multiplication();
cout<<iRes<<"\n";
return 0;
}