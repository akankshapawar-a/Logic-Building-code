#include<iostream>
using namespace std;
class Number{
public:
int iNo1;
int iNo2;
Number(int x, int y){
iNo1=x;
iNo2=y;
}
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
cout<<"enter two numbers:";
cin>>iValue1;

cin>>iValue2;
Number obj1 (iValue1,iValue2);


iRes=obj1.Maximum();
cout<<"Maximum number is "<<iRes;


cout<<"enter two numbers:";
cin>>iValue1;

cin>>iValue2;
Number obj2 (iValue1,iValue2);


iRes=obj2.Maximum();
cout<<"Maximum number is "<<iRes;
return 0;
}