/*
5. Accept number from user and display below pattern. 
Input: 8
Output : 2 4 6 8 10 12 14 16
*/
#include<stdio.h>
void Display(int iNo){
int i=0;
int j=0;
for(i=1;i<=iNo;i++){

printf("%d\t",i*2);
}

printf("\n");


}
int main(){
int iValue1=0;

printf("enter any number:");
scanf("%d",&iValue1);
Display(iValue1);
return 0;

}