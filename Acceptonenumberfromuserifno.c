// Accept one  number from user if number is less than 10 
// then print "hello" otherwise print "Demo"
#include<stdio.h>
void display(int iNo){
if(iNo<10){
printf("hello");

}
else{
printf("Demo");
}
}
int main(){
int iValue=0;
printf("enetr any number:");
scanf("%d",&iValue);
display(iValue);
return 0;

}