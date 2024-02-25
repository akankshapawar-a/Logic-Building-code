// Accept number from user and display summation of factor
#include<iostream>
using namespace std;
class summmation{
public:
int iNo;

summmation(int x){
iNo=x;
}
bool summation(){
int sum=0;
bool flag=false;
int iCnt=0;
for(iCnt=1;iCnt<iNo;iCnt++){
if((iNo%iCnt)==0){
sum=sum+iCnt;
flag=true;
}
}
return flag;
}

};
int main(){

int iValue=0;
bool iRes=false;

cout<<"enter any number:";
cin>>iValue;
summmation obj(iValue);
iRes=obj.summation();
if(iRes==true){
    cout<<"true";
}
else{
    cout<<"false";
}

return 0;
}