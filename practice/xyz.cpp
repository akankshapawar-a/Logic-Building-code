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
cin>>#include<iostream>
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
printf("enter string:");
scanf("%[^ '\n']s",str);
printf("enter charater:");
scanf(" %c",&c);

ires=firstoccuranc(str,c);
printf("%d",ires);
return 0;

}
printf("enter charater:");
scanf(" %c",&c);

ires=firstoccuranc(str,c);
printf("%d",ires);
return 0;

}