/*
enter number of rows and col:4
4
1       2       3       4
1       *       *       4
1       *       *       4
1       2       3       4

*/

#include<stdio.h>
void Display(int iRow , int iCol){
int i=0;
int j=0;


for(i=1;i<=iRow;i++){
for(j=1;j<=iCol;j++){
if((i==iRow)|| (i==1)||( j==iCol)||(j==1)){
printf("%d\t",j);

}
else{
printf("*\t");
}
}
printf("\n");
}
}
int main(){
int iValue=0;
int iValue1=0;
printf("enter number of rows and col:");
scanf("%d\t%d",&iValue, &iValue1);
Display(iValue, iValue1);
return 0;
}
