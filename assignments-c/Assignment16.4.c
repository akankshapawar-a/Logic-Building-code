/*
enter rows and col:6
5
6       6       6       6       6
5       5       5       5       5
4       4       4       4       4
3       3       3       3       3
2       2       2       2       2
1       1       1       1       1
*/
#include<stdio.h>
void Display(int iRow,int iCol){
int i=0;
int j=0;

for(i=iRow;i>=1;i--){
for(j=1;j<=iCol;j++){
printf("%d\t",i);
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