// Accept number from user and display multiplication of factor
#include<iostream>
using namespace std;
void multiplication(int iNo){
int mul=1;
int iCnt=0;
for(iCnt=1;iCnt<iNo;iCnt++){
if((iNo%iCnt)==0){
cout<<iCnt;
}
}
}
int main(){
int iValue=0;


cout<<"enter any number:";
cin>>iValue;
multiplication(iValue);

return 0;
}