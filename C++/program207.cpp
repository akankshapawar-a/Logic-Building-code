#include<iostream>
using namespace std;
class Number{
public:
int iNo1;
int iNo2;

void Accept(){
cout<<"enter two numbers:";
cin>>iNo1;
cin>>iNo2;


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

int iRes=0;
Number obj;
obj.Accept();
iRes=obj.Maximum();
cout<<"Maximum number is "<<iRes<<"\n";
return 0;
}