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

void Display(int iRow,int iCol){
int i=0;
int j=0;
for(i=1;i<=iRow;i++){
for(j=1;j<=iCol;j++){
cout<<"*\t";
}
cout<<"\n";
}
}
int main(){
int iValue1=0;
int iValue2=0; 

cout<<"enter a number of rows and colunms:";
cin>>iValue1;
cin>>iValue2;
Maximum(iValue1,iValue2);
return 0;
}