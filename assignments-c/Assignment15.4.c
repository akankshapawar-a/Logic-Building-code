/*
4. Accept number of rows and number of columns from user and display below pattern.

*       #       *       #
*       #       *       #
*       #       *       #
*/
#include<stdio.h>
void Display(int iRow,int iCol){
int i=0;
int j=0;

for(i=iRow;i>=1;i--){
for(j=1;j<=iCol;j++){
if(j%2==0){
printf("#\t");
}
if(j%2!=0){
printf("*\t");
}
}
printf("\n");
}

}
int main(){
int iValue1=0;
int iValue2=0;
printf("enter rows and col:");
scanf("%d %d",&iValue1,&iValue2);
Display(iValue1,iValue2);
return 0;

}