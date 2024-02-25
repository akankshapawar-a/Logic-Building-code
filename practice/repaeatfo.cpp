
#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int firstoccuranc(char *str,char ch){
int count=1;
int ipos=0;
while(*str!='\0'){
if(*str==ch){
ipos=count;
break;
}
count++;
str++;
}
return ipos;
}
int main(){
char str[20];
char c='\0';
int ires=0;
cout<<"enter string:";
cin>>str;
cout<<"enter charater:";
cin>>c;

ires=firstoccuranc(str,c);
cout<<ires;
return 0;



}