/*
enter a number of rows and colunms:4
4
*       *       *       *
*       *       *       *
*       *       *       *
*       *       *       *
*/

#include<iostream>
using namespace std;
class pattern{
public:
int iRow;
int iCol;
pattern(int x, int y){
iRow=x;
iCol=y;
}
void Display(){
int i=0;
int j=0;
for(i=1;i<=iRow;i++){
for(j=1;j<=iCol;j++){
cout<<"*\t";
}
cout<<"\n";
}
}
};
int main(){
int iValue1=0;
int iValue2=0; 

cout<<"enter a number of rows and colunms:";
cin>>iValue1;
cin>>iValue2;
pattern obj(iValue1, iValue2);
obj.Display();
return 0;
}