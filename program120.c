/*
    Input : 

    Row : 4
    Col : 5

    Output : 
    #   #   #   #   #
    *   *   *   *   *
    #   #   #   #   #
    *   *   *   *   *

*/  
#include<stdio.h>
void Display(int row ,int col){
int i=0;
int j=0;
char arr[2]={'#','*'};
for(i=1;i<=row;i++){
for(j=1;j<=col;j++)
{
printf("%c\t",arr[i%2]);
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