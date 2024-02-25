
/*enter number of rows and col:4
4
2       4       6       8
1       3       5       7
2       4       6       8
1       3       5       7

*/

#include<stdio.h>
void Display(int iRow , int iCol){
int i=0;
int j=0;
for(i=1;i<=iRow;i++){
for(j=1;j<=iCol;j++){
  
if(i%2!=0){
printf("%d\t",j*2);
}

else{
printf("%d\t",j*2-1);
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