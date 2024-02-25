#include<iostream>
using namespace std;

class Digit
{
public:
int iNo;
Digit(int x){
iNo=x;
}
};
int main(){
int iValue=0;
cout<<"Enter number : "<<"\n";
    cin>>iValue;
Digit dobj(iValue);
return 0;
}