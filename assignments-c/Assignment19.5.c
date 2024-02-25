#include<stdio.h>
void Display(int iRow , int iCol){
int i=0;
int j=0;


for(i=1;i<=iRow;i++){
for(j=1;j<=iCol;j++){

 if(i == j)
            {
                printf("%d\t",j);
            }
            else if(i>=j)       // outer trianle
            {
             printf(" \t");
            }
            else if(i<=j)         // upper triangle
            {
                printf("%d\t",j);
            }
}

printf("\n");}
}
int main(){
int iValue=0;
int iValue1=0;
printf("enter number of rows and col:");
scanf("%d\t%d",&iValue, &iValue1);
Display(iValue, iValue1);
return 0;
}
