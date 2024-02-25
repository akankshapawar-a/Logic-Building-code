/*

enter number of rows and col:6
6
1       2       3       4       5       6
1       2                               6
1               3                       6
1                       4               6
1                               5       6
1       2       3       4       5       6

*/

#include<stdio.h>
void Display(int iRow , int iCol){
int i=0;
int j=0;
if(iRow!=iCol){
printf("INVALID INPUT");
}


for(i=1;i<=iRow;i++){
for(j=1;j<=iCol;j++){
if((i==iRow)||(i==1)||(j==iCol)||(j==1)||(i==j)){
printf("%d\t",j);

}
else{
printf("\t");
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