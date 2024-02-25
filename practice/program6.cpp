#include<iostream>
using namespace std;
class Array{
public:
int addition(int arr[],int iLength){
int iCnt=0;
int sum=0;
for(iCnt=1;iCnt<iLength;iCnt++){
sum=sum+arr[iCnt];
}
return sum;
}

};
int main(){
int *ptr=NULL;
int iCnt=0;
int iSize=0;
int iRes=0;
cout<<"enter the number:";
cin>>iSize;
ptr=(int *)malloc(iSize*sizeof(int));
cout<<"enter elements in array:";
for(iCnt=1;iCnt<iSize;iCnt++){
cin>>ptr[iCnt];

}
printf("enter the array element:");
for(iCnt=1;iCnt<iSize;iCnt++){
cout<<ptr[iCnt];
}
Array obj;
iRes=obj.addition(ptr,iSize);
cout<<"Addition:"<<iRes;

free(ptr);
return 0;
}