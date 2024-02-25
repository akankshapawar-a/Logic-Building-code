/*
    Input : 

    Row : 3
    Col : 5

    Output : 
    a   b   c   d   e
    a   b   c   d   e
    a   b   c   d   e        
*/

#include<stdio.h>
void Display(int row ,int col){
int i=0;
int j=0;
char ch='\0';
for(i=1;i<=row;i++){
for(j=1,ch='a';j<=col;j++,ch++)
{
printf("%c\t",ch);

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