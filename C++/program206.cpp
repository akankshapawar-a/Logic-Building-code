#include<iostream>
using namespace std;
class Number{
public:
int iNo1;
int iNo2;
int Maximum(){
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
cout<<"enter two numbers:";
cin>>iValue1;
obj.iNo1=iValue1;
cin>>iValue2;
obj.iNo2=iValue2;

iRes=obj.Maximum();
cout<<"Maximum number is "<<iRes;
return 0;
}