// Accept one  number from user if number is less than 10 
// then print "hello" otherwise print "Demo"
// Accept number from user and display all its non factor
#include<iostream>
using namespace std;
class nonf{
public:
int iNo;
nonf(int x){
iNo=x;
}
void number(){

if(iNo<10){
cout<<"Hello"<<endl;
}
else{
cout<<"Demo"<<endl;
}
}
};
int main(){

int iValue=0;


cout<<"enter any number:";
cin>>iValue;
nonf obj(iValue);
obj.number();

return 0;
}