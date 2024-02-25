
/*enter number of rows and col:4
4
1       2       3       4
2       3       4       5
3       4       5       6
4       5       6       7
*/

#include<stdio.h>
void Display(int iRow , int iCol){
int i=0;
int j=0;
for(i=1;i<=iRow;i++){
int c=i;
for(j=1;j<=iCol;j++){
    printf("%d\t",c);
c++;
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