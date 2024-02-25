#include<iostream>
using namespace std;
class Array{
int iCnt=0;
int iSize=0;
int *ptr=NULL;
public:
Array(int no){
no=iSize;

}
int addition(int arr[],int iLength){

int sum=0;
for(iCnt=1;iCnt<iLength;iCnt++){
sum=sum+arr[iCnt];
}
return sum;
}

void Display(){
printf("enter the array element:");
for(iCnt=1;iCnt<iSize;iCnt++){
cout<<ptr[iCnt];
}

}

};
int main(){


int iRes=0;
cout<<"enter the number:";
cin>>iSize;
ptr=(int *)malloc(iSize*sizeof(int));
cout<<"enter elements in array:";
for(iCnt=1;iCnt<iSize;iCnt++){
cin>>ptr[iCnt];

}
Array obj;
iRes=obj.addition(ptr,iSize);
cout<<"Addition:"<<iRes;

free(ptr);
return 0;
}