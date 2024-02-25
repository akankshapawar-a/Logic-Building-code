// write program which accept number from usr and if numbers is less than 50
// then print small, if it is greater than 50 and less than 100 then print medium , if
// it is greater than 100 then print large

// input : 75
// output : Medium

// input : 101
// output : Large



#include<stdio.h>
void Display(int iNo){
if(iNo<50){
printf("small");
}
else{
if(iNo<100){
printf("Medium");
}
else{
printf("Greater than 100");
}
}
}
int main(){
int iValue=0;
printf("enter any element:");
scanf("%d",&iValue);
Display(iValue);
return 0;

}