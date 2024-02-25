
// write a program which accept total marks and obtained marks from
// user and displays percentage

// input : 1000 745
// output : 74.5%

#include<stdio.h>
float percentage(int tMark, int oMark){
if(tMark==0 || oMark==0){
    return 0;
}
return (float)tMark/oMark*100;
}
int main(){
int iValue1=0;
int iValue2=0;
float fRes=0.0f;

printf("enter total marks:");
scanf("%d",&iValue1);
printf("enter obtained marks:");
scanf("%d",&iValue2);
fRes=percentage(iValue1,iValue2);
printf("%.2f",fRes);
return 0;
}