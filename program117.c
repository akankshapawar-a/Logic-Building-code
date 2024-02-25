/*
    Input : 

    Row : 3
    Col : 5

    Output : 
    a   a   a   a   a
    b   b   b   b   b
    c   c   c   c   c
*/  


#include<stdio.h>
void Display(int row ,int col){
int i=0;
int j=0;
char ch='\0';
for(i=1,ch='a';i<=row;i++,ch++){
for(j=1;j<=col;j++)
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