// Accept number from user and display factor in reverse factor
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

int iCnt=0;
for(iCnt=iNo;iCnt>1;iCnt--){
if((iNo%iCnt)!=0){
cout<<iCnt<<endl;
}
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