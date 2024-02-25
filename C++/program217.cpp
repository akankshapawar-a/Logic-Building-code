#include<iostream>
using namespace std;
class Digit{
public:
int iNo;
Digit(int x){
iNo=x;

}
int summitation(){
int iDigit=0;
int iSum=0;
while(iNo!=0){
iDigit=iNo%10;
iSum=iSum+iDigit;
iNo=iNo/10;
}
return iSum;
}

};

int main(){
int iValue=0;
int iRes=0;
cout<<"enter any number";
cin>>iValue;
Digit obj(iValue);
iRes=obj.summitation();
cout<<iRes;
return 0;
}