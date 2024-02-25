#include<iostream>
using namespace std;
class Number{
public:
int Maximum(int iNo1,int iNo2){
if(iNo1>iNo2){
return iNo1;
}
else{
return iNo2;

}
}
};
int main(){
int iValue1=0;
int iValue2=0;
int iRes=0;
Number obj;
cout<<"entertwo numbers:";
cin>>iValue1;
cin>>iValue2;
iRes=obj.Maximum(iValue1,iValue2);
cout<<"Maximum number is \n"<<iRes;
return 0;
}