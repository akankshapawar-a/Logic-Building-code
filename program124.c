/*
    Input : 

    Row : 4
    Col : 4

    Output : 
    1   &   1   &
    2   &   2   &
    3   &   3   &
    4   &   4   &

*/


#include<stdio.h>
void Display(int iRow ,int iCol){
int i=0;
int j=0;
for(int i=1;i<=iRow;i++){
for(int j=1;j<=iCol;j++){
if(j%2==0){
printf("&\t");
}
else{
printf("%d\t",i);
}
}
printf("\n");
}
}
int main(){
int iValue1=0;
int iValue2=0;

printf("enter no of rows and col:");
scanf("%d\t%d",&iValue1,&iValue2);
Display(iValue1,iValue2);
return 0;

}