// Write a program which accepts the marks and display the class accordingly
//  0 to 34         Fail
//  35 to 49        Pass Class
//  50 to 59        Second Class
//  60 to 74        First Class
// 75 to 100        First Class with Deistinction

#include<stdio.h>
void DisplayClass(float fmarks){
if((fmarks<0.0f)||(fmarks>100.00f)){
printf("Invalid input\n");
printf("Please enter the marks between 0.0 to 100.00 ");
}
if((fmarks>=0.0f) && (fmarks<35.00)){
printf("You are fail\n");
}
else if((fmarks>=35.00) &&(fmarks<50)){
printf("You are Pass class\n");

}
else if((fmarks>=50) && (fmarks<60)){
printf("You are Second class\n");
}
else if((fmarks>=60) && (fmarks<75)){
printf("You are First class\n");

}
else if((fmarks>=75) && (fmarks<=100)){
printf(" First Class with Deistinction\n");

}
return ;

}
int main(){
float ivalue=0.0;
printf("Enter your perctanges:\n");
scanf("%f",&ivalue);
DisplayClass(ivalue);
return 0;
}