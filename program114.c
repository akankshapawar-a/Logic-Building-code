/*
    Input : 

    Row : 3
    Col : 5

    Output : 
    1   1   1   1   1
    2   2   2   2   2   
    3   3   3   3   3   

*/  
#include<stdio.h>
void Display(int row ,int col){
int i=0;
int j=0;
for(i=1;i<=row;i++){
for(j=1;j<=col;j++)
{
printf("%d",i);
}
printf("\n");
}
}
int main(){
int iRow=0;
int iCol=0;
printf("enter rows and columns:");
scanf("%d\t%d",&iRow,&iCol);
Display(iRow,iCol);
return 0;
}